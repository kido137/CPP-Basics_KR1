#include <iostream>
// C++ ǥ�� ���̺귯���� �ϳ��̴�.
#include <stdio.h>
// ǥ������� ���̺귯�� (Standard Input/Output library) C��� ǥ��
// stdio.h �� printf, scanf �� �Լ��� ���ԵǾ��ִ�.

// �ش� ���̽��� C ǥ�������� C++ ǥ���� iostream �� �����Ѵ�.

using namespace std;


int Add(int a, int b)
{
	return a + b;
}


// �Լ��� ����ϴ� �޸� ����
	// ���� �޸� ����

	// �ڷ� ����
	// ���� (���� ����)
	// ť (���� ����)


//�Լ�
int main()
{

	int iData = Add(100, 200);
	// 300
	iData = Add(300, 400);
	// 700
	iData = Add(500, 600);
	// 1100 Add �� ������ ȣ�� ���ѵ� �ش� �������� �� ���� 1100�̴�.
	// Add �Լ��� �޸𸮰� ���ǰ� �������� �ݺ��Ѵ�.


	// �ݺ���
	//for (/*�ݺ��� �ʱ�ȭ*/; /*�ݺ��� ���� üũ*/; /*�ݺ��� ����*/)
	//{

	//}

	//int i = 0;
	// �� �Ʒ��� i �� �ٸ� i �̴�.
	//for (int i = 0; ;)
	//{

	//}


	for (int i = 0; i < 4; ++i)
	{
		if (i % 2 == 1)
		{
			continue;
			// �ݺ� ������ �����ϴ� ���߿� continue ������ �Ǹ� �̹� �ݺ�Ƚ���� �ѱ�� ���� �ݺ����� �����Ų��.
		}
		// Output Test �� 2�� ��� �ȴ�.
		cout << "Output Test" << endl;
		// endl �ٳѱ�

	}
	
	// break; �ݺ��� �ȿ��� �ٷ� �ݺ����� �ߴܽ�Ų��.




	// while(/*����üũ*/)
	
	int i = 0;
	while ( i < 2)
	{
		cout << "Output Tset" << endl;
		++i;

		continue;
		// Output Test �� 2�� ��� �ȴ�.
		break;


	}
	

	for (int i = 0; i < 10; ++i)
	{
		cout << "Output i : " << i << endl;
	}





	// �ܼ�
	// std::cout, cout
	int A = 3;
	cout << "adbcef"<< A <<endl;
	// A �� ���ִ� ���� 3������ ��� cout ���� A �� 3���� ġȯ�ȴ�.

	double B = 1.23456789;
	cout << fixed; // cout << fixed �Ҽ����� �������� ǥ���� �ϰڴٴ� ���Դϴ�.
	// cout << fixed; == cout.setf(ios::fixed);
	cout.precision(6); //cout.precision(6) 6�ڸ����� ǥ���� �ϰڴٴ� ���Դϴ�.
	cout << B << endl;
	
	// cout.precision()�� �Ǽ��� �����ο� �Ҽ��θ� ��ģ, ��ü�� ��� ������ �����ϴ� �Լ��Դϴ�. 
	// cout << fixed �� �������ָ� ���ϴ� �ڸ�����ŭ ����Ѵ�.

	cout.unsetf(ios::fixed); // cout << fixed ����
	cout << B << endl;
	// �Ǽ� ��ü�� ��� ������ ���� �ϰ������ cout.unsetf(ios::fixed); �ڵ带 �߰����ָ� �˴ϴ�.

	// scientific ����ǥ�� 


	// cin
	int C;
	cin >> C;
	cout << C << endl;

	// cin >> �Է¹������� �� ����Ʈ �����ڷ� C �� ���� �����մϴ�.
	// C �� int ���� �Է¹ް� ����Ѵ�.

	double D;
	cin >> D;
	cout << D << endl;
	// double ���̳� float �� ������ �����ϸ� �Ҽ��� �Է��� ������ �ִ�.
	

	return 0;
}

// ����Ű

// ������ ���� �ּ�	     :Ctrl + k, c
// ������ ���� �ּ� ���� :Ctrl + k, u

// Alt Drag

// �����
// ����� ���� : F5
// ���� �ߴ������� �ڵ� ����

// �ߴ��� ���� �� ���� : F9
// ����� ��, ���� ���� : F10
// ����� ��, ���� ����(�Լ� ����) : F11
// ����� ��, ����� �����ϱ� : Shift + F5