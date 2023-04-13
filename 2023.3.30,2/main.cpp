#include <iostream>

using namespace std;

// 출력 명령어 : cout
// 입력 명령어 : cin
// 줄바꿈 명령어 : endl

/*
10진법
0 ~ 9 의 숫자로 표현되는 데이터

2진법
0 ~ 1 두개의 숫자로 표현되는 데이터

10진법 2 -> 2진법 10

1bit -> 0 ~ 1

1byte == 8bit
1byte : 00000000 ~ 11111111 == 2^8개
*/

/* 데이터 자료형
bool	:	1byte 불형 - 참과 거짓을 표현한다 true(1), false(0)
char	:	1byte 문자형 - 문자 하나를 표현 ex) a,b,c
short	:	2byte 정수형 (음수, 0, 양수)
int		:	4byte 정수형
float	:	4byte 실수형
double	:	8byte 실수형
*/

/* 연산자
대입 연산자 = (오른쪽 값을 왼쪽으로)
비교 연산자 == (수학에서의 =)
수학 A = 10 의 의미는 A는 10과 같다
프로그래밍 A = 10 의 의미는 A에 10을 대입한다

산술 연산자 + - * /
*/

void main()
{
	// 헝가리안 표기법	:	변수명 앞에 데이터 타입의 종류를 표기해주는 방식
 
	// 변수 선언
	bool isPlaying, bPlay;
	char chLetter;
	short shArmor;
	int nAttack;
	float fSpeed;
	double dPower;

	isPlaying = true;
	bPlay = false;

	chLetter = 'a';
	shArmor = 10;
	nAttack = 20;
	fSpeed = 3.0f;
	dPower = 4.0;

	cout << chLetter << endl;
	cout << nAttack << endl;
	cout << fSpeed << endl;

	cout << "파워를 입력하세요." << endl;
	cin >> dPower;

	cout << "입력하신 파워는 " << dPower << "입니다." << endl;

	system("pause");
}