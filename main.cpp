#include <iostream>
// C++ 표준 라이브러리의 하나이다.
#include <stdio.h>
// 표준입출력 라이브러리 (Standard Input/Output library) C언어 표준
// stdio.h 는 printf, scanf 등 함수가 포함되어있다.

// 해당 베이스는 C 표준임으로 C++ 표준인 iostream 로 진행한다.

using namespace std;


int Add(int a, int b)
{
	return a + b;
}


// 함수가 사용하는 메모리 영역
	// 스택 메모리 영역

	// 자료 구조
	// 스택 (후입 선출)
	// 큐 (선입 후출)


//함수
int main()
{

	int iData = Add(100, 200);
	// 300
	iData = Add(300, 400);
	// 700
	iData = Add(500, 600);
	// 1100 Add 를 여러번 호출 시켜도 해당 구문에서 의 값은 1100이다.
	// Add 함수의 메모리가 사용되고 지워지고 반복한다.


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
		cout << "Output Test" << endl;
		// endl 줄넘김

	}
	
	// break; 반복문 안에서 바로 반복문을 중단시킨다.




	// while(/*조건체크*/)
	
	int i = 0;
	while ( i < 2)
	{
		cout << "Output Tset" << endl;
		++i;

		continue;
		// Output Test 가 2번 출력 된다.
		break;


	}
	

	for (int i = 0; i < 10; ++i)
	{
		cout << "Output i : " << i << endl;
	}





	// 콘솔
	// std::cout, cout
	int A = 3;
	cout << "adbcef"<< A <<endl;
	// A 에 들어가있는 값는 3임으로 출력 cout 에서 A 는 3으로 치환된다.

	double B = 1.23456789;
	cout << fixed; // cout << fixed 소수점을 고정시켜 표현을 하겠다는 뜻입니다.
	// cout << fixed; == cout.setf(ios::fixed);
	cout.precision(6); //cout.precision(6) 6자리까지 표현을 하겠다는 뜻입니다.
	cout << B << endl;
	
	// cout.precision()은 실수의 정수부와 소수부를 합친, 전체의 출력 범위를 설정하는 함수입니다. 
	// cout << fixed 를 선언해주면 원하는 자릿수만큼 출력한다.

	cout.unsetf(ios::fixed); // cout << fixed 해제
	cout << B << endl;
	// 실수 전체의 출력 범위를 설정 하고싶으면 cout.unsetf(ios::fixed); 코드를 추가해주면 됩니다.

	// scientific 지수표기 


	// cin
	int C;
	cin >> C;
	cout << C << endl;

	// cin >> 입력받을변수 를 쉬프트 연산자로 C 에 수를 대입합니다.
	// C 에 int 형을 입력받고 출력한다.

	double D;
	cin >> D;
	cout << D << endl;
	// double 형이나 float 로 변수를 지정하면 소수점 입력을 받을수 있다.
	

	return 0;
}

// 단축키

// 지정한 구문 주석	     :Ctrl + k, c
// 지정한 구문 주석 해제 :Ctrl + k, u

// Alt Drag

// 디버깅
// 디버깅 시작 : F5
// 다음 중단점까지 코드 실행

// 중단점 생성 및 해제 : F9
// 디버기 중, 구문 수행 : F10
// 디버기 중, 구문 수행(함수 진입) : F11
// 디버깅 중, 디버깅 종료하기 : Shift + F5