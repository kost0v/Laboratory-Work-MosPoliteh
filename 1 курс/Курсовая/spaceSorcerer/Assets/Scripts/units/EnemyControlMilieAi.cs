using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class EnemyControlMilieAi : MonoBehaviour
{
    public Transform target; // ���� ���������� (������ �����)
    private NavMeshAgent navMeshAgent;

    private void Start()
    {
        navMeshAgent = GetComponent<NavMeshAgent>();
    }

    private void Update()
    {
        if (target != null)
        {
            // ���������� ���� �������������� ������
            navMeshAgent.SetDestination(target.position);
        }
    }
}
