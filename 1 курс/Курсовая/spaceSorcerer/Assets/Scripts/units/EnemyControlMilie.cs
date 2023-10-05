using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyControlMilie : MonoBehaviour
{
    
    public float attackRange = 1f; // ��������� ����� ����������
    public float damage = 10; // ���� ����� ����������
    public El_Type DamageType;
    public float startReload;
    public float moveSpeed { get; private set; } // �������� �������� ����������

    private Transform target; // ������ �� ������
    private Rigidbody2D rb;
    private Unit Self;
    private float Reload;


    private void Start()
    {

        target = GameObject.FindGameObjectWithTag("Player").transform; // ������� ������ �� ����
        rb = GetComponent<Rigidbody2D>();
        Self = GetComponent<Unit>();
        
    }

    private void Update()
    {
        moveSpeed = Self.Speed;
        Vector2 direction = target.position - transform.position;

        // ��������� ��������� �� ������
        if (direction.magnitude > attackRange)
        {
            // ��������� � ����������� ������
            rb.velocity = direction.normalized * moveSpeed;
        }
        else
        {
            if (Reload <= 0)
            {
                Attack();
                Reload = startReload;
            }
            
        }
    }

    private void FixedUpdate()
    {
        if (Reload > 0)
        {
            Reload -= 0.2f;
        }

    }

    private void Attack()
    {
        target.GetComponent<Unit>().TakeDamege(damage, DamageType);
    }
}
