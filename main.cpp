
#include <stdio.h>
// ǥ������� ���̺귯�� (Standard Input/Output library)

int Add(int a, int b)
{
	return a + b;
}

//�Լ�
int main()
{

	int iData = Add(100, 200);

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
		printf("Output Test\n");
		// \n �ٳѱ�

	}
	
	// break; �ݺ��� �ȿ��� �ٷ� �ݺ����� �ߴܽ�Ų��.




	// while(/*����üũ*/)
	
	int i = 0;
	while ( i < 2)
	{
		printf("Output Tset\n");
		++i;

		continue;
		// Output Test �� 2�� ��� �ȴ�.
		break;


	}
	


	

	return 0;
}