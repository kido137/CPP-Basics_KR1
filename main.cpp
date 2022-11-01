
#include <stdio.h>
// 표준입출력 라이브러리 (Standard Input/Output library)

int Add(int a, int b)
{
	return a + b;
}

//함수
int main()
{

	int iData = Add(100, 200);

	// 반복문
	//for (/*반복자 초기화*/; /*반복자 조건 체크*/; /*반복자 변경*/)
	//{

	//}

	//int i = 0;
	// 위 아레의 i 는 다른 i 이다.
	//for (int i = 0; ;)
	//{

	//}


	for (int i = 0; i < 4; ++i)
	{
		if (i % 2 == 1)
		{
			continue;
			// 반복 구문을 수행하는 도중에 continue 만나게 되면 이번 반복횟수를 넘기고 다음 반복문을 실행시킨다.
		}
		// Output Test 가 2번 출력 된다.
		printf("Output Test\n");
		// \n 줄넘김

	}
	
	// break; 반복문 안에서 바로 반복문을 중단시킨다.




	// while(/*조건체크*/)
	
	int i = 0;
	while ( i < 2)
	{
		printf("Output Tset\n");
		++i;

		continue;
		// Output Test 가 2번 출력 된다.
		break;


	}
	


	

	return 0;
}