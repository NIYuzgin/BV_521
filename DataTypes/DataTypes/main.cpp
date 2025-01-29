#include<iostream>
using namespace std;



void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Hello DataTypes" << endl;
	cout << true << endl;
	cout << false << endl;
	cout << (bool)-0.00000000000000001 << endl;





	cout << "short:" << endl;
	cout << "SIZE: " << sizeof(short) << endl;
	cout << "unsigned short: " << 0 << " ... " << USHRT_MAX << endl;
	cout << "  signed short:" << SHRT_MIN << " ... " << SHRT_MAX << endl;
	cout << endl;

	cout << "int:" << endl;
	cout << "SIZE: " << sizeof(int) << endl;
	cout << "unsigned int: " << 0 << " ... " << UINT_MAX << endl;
	cout << "  signed int:" << INT_MIN << " ... " << INT_MAX << endl;
	cout << endl;

	//Ctrl + D  -  Duplicate selection (�������������� ���������� ���).






	//���������������� Visual Studio
	SHRT_MIN, SHRT_MAX, USHRT_MAX;
	LONG_MIN, LONG_MAX, ULONG_MAX;
	INT_MIN, INT_MAX, UINT_MAX;
	LLONG_MIN, LLONG_MAX, ULLONG_MAX;
	FLT_MIN, FLT_MAX;
	DBL_MIN, DBL_MAX;
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
	
			
			float  - ������������ ����� ��������� ��������, �������� 4 ����� ������.
			double - ������������ ����� ������� ��������, �������� 8 ���� ������.
*/