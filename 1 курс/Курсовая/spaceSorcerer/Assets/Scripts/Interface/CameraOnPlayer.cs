using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class CameraOnPlayer : MonoBehaviour
{
    public Transform target; // ������ �� ������ ������
    public float smoothSpeed = 0.125f; // �������� �������� ���������� � ����
    public Vector2 offset; // �������� ������ ������������ ����

    void Update()
    {
        // ������������ �������, � ������� ������ ��������� ������
        Vector3 desiredPosition = target.position.ConvertTo<Vector2>() + offset;
        Vector3 smoothedPosition = Vector2.Lerp(transform.position, desiredPosition, smoothSpeed * Time.deltaTime);
        smoothedPosition.z = -10;

        // ��������� ������� ������
        transform.position = smoothedPosition;
    }
}
