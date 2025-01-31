#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define DATA_TYPES

#if defined DATA_TYPES
	//���� ���� ���������� DATA_TYPES,
	//�� ������������� ��� �� ��������� #endif
	//����� ����� ������������.
#endif

//#define INITIALIZATION

void main()
{
	setlocale(LC_ALL, "Russian");

#if defined DATA_TYPES
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

	//					Declaration of Variables:
	int a;
	int t;
	double price;
	double priceOfCoffee;	//camelCaseStyle (pascalCaseStyle)
	//double price_of_coffee;	//snake_case_style
	//BigCamal
	//smallCamel

#endif

#if defined INITIALIZATION
	int a;// = 0;	//������������� ���������� 'a' ��� ����������
	cout << a << endl;

	int b;
	b = 1;		//������������� ����� ���������� ���������� ������������.

	int c;		//���������� ����������
	cout << "������� ����� �����: "; //����������� ������������ �� ����
	cin >> c;	//������������� ���������� ������ � ����������

	//Init - ������

	double price;
	//double price;
	cout << price << endl;
#endif // INITIALIZATION

	double price_of_coffee;
	int number_of_cups;
	cout << "������� ��������� ����� ����: ";	cin >> price_of_coffee;
	cout << "������� ���������� �����: ";		cin >> number_of_cups;

	double total_price = price_of_coffee * number_of_cups;
	cout << "����� ���������: " << total_price << endl;
	//ConsoleIn
	//		>> - �������� ������� �� ������ (Stream Extraction operator)
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

	Identifier - ��� ���.
				
				������� ���������� ����������:
	1. ��� ���������� ����� �������� �� �������� ���������� ��������,
	   ��� ��������, ��� � ���������, �������� ���� � ������� _
		ABC...Z
		abc...z
		012...9
		_

	2. ��� ���������� ������� �� ����� ���������� �������� �����;

	3. ����� ���������� ����������������, �� ����, 
		�������� � ��������� ������� ����������, ��������
		'Price' � 'price' - ��� ������ ����������;

	4. ��� ���������� ���������� ������ ������������ �������� ����� ����� C++;

	------------------------------------------

	�������������������

	������������� - ��� ���������� ���������� ��������.

*/