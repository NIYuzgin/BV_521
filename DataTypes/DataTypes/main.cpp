#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Hello DataTypes" << endl;
	cout << true << endl;
	cout << false << endl;
	cout << (bool)-0.00000000000000001 << endl;
}

/*
	Variable - ��� ����������� ������� ������, ���������� �������
			   ����� ���������� � �������� ���������� ���������.

					
					type name;
	type - ��� ����������, �� ���������� 3 ����:
	1. ������� ������ ���������� ����� ��������;
	2. ����� �������� ��� ������ ���������;
	3. ����� �������� ��� ��� ����� ���������;

					���� ������
	I.  ���������� ����: bool (Boolean). 1 Byte
		 true	- �������� � ������ ��� 1;
		 false	- �������� � ������ ��� 0;
		 �� ����� ���� 0 - ��� false, a true - ��� ��� ��� �� 0.
		 1 Byte = 8 bit.
		 bit - Binary Digit (�������� ����� 0 ��� 1)
	II. ���������� ����: char (Character - ������) 1 Byte.
		 ASCII - American Stadard Code for Information Interchange
		 256.
	III.�������� ����. ������� �� ������������� � ������������.
		����������� (unsigned) - ����� ������� ������ ������������� ����� �����;
		   �������� (signed) - ����� ������� ��� �������������, ��� � ������������� ����� �����;
		
*/