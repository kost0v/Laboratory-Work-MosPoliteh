using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Partical_Form : MonoBehaviour
{
    public Form_type Type;

    public enum Form_type
    {
        Simple_Bullet, Ray, Rocket, Wave_In_Front, Wave_Around, Short_Wave_In_Front, Cone, Clot, Explozion_Clot, Mine, Fraction
    }
    void Start()
    {
        
    }

    void Create_Partical()
    {
        if( Type == Form_type.Simple_Bullet) // ������� ��������� �������
        {

        }
        else if( Type == Form_type.Ray) // ���
        {

        }
        else if ( Type == Form_type.Rocket) // ������
        {

        }
        else if ( Type == Form_type.Wave_In_Front) // ����� ����� ����������
        {

        }
        else if (Type == Form_type.Wave_Around) // ����� ������ ���������
        {

        }
        else if (Type == Form_type.Short_Wave_In_Front) // �������� ����� �����
        {

        }
        else if (Type == Form_type.Cone) // �����
        {

        }
        else if (Type == Form_type.Clot) // �������
        {

        }
        else if (Type == Form_type.Explozion_Clot) // �������� �������
        {

        }
        else if (Type == Form_type.Mine) // ����
        {

        }
        else if (Type == Form_type.Fraction) // �����
        {

        }
    }

    
}
