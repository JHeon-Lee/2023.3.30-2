#include <iostream>

using namespace std;

// ��� ��ɾ� : cout
// �Է� ��ɾ� : cin
// �ٹٲ� ��ɾ� : endl

/*
10����
0 ~ 9 �� ���ڷ� ǥ���Ǵ� ������

2����
0 ~ 1 �ΰ��� ���ڷ� ǥ���Ǵ� ������

10���� 2 -> 2���� 10

1bit -> 0 ~ 1

1byte == 8bit
1byte : 00000000 ~ 11111111 == 2^8��
*/

/* ������ �ڷ���
bool	:	1byte ���� - ���� ������ ǥ���Ѵ� true(1), false(0)
char	:	1byte ������ - ���� �ϳ��� ǥ�� ex) a,b,c
short	:	2byte ������ (����, 0, ���)
int		:	4byte ������
float	:	4byte �Ǽ���
double	:	8byte �Ǽ���
*/

/* ������
���� ������ = (������ ���� ��������)
�� ������ == (���п����� =)
���� A = 10 �� �ǹ̴� A�� 10�� ����
���α׷��� A = 10 �� �ǹ̴� A�� 10�� �����Ѵ�

��� ������ + - * /
*/

void main()
{
	// �밡���� ǥ���	:	������ �տ� ������ Ÿ���� ������ ǥ�����ִ� ���
 
	// ���� ����
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

	cout << "�Ŀ��� �Է��ϼ���." << endl;
	cin >> dPower;

	cout << "�Է��Ͻ� �Ŀ��� " << dPower << "�Դϴ�." << endl;

	system("pause");
}