#include <stdio.h>

void Process()
{
	printf("Process...\n");
	printf("----------\n");
}

int Damage()
{
	return 10;
}

char Character()
{
	return 36.5f;
}

void Position(int x, int y)
{
	printf("x�� �� : %d\n", x);
	printf("y�� �� : %d\n", y);
}

void Color(char red, int green, float blue)
{
	printf("red�� �� : %c\n", red);
	printf("green�� �� : %d\n", green);
	printf("blue�� �� : %f\n", blue);
}

void Swap(int left, int right)
{
	int temporary = left;

	left = right;
	right = temporary;

	printf("left�� �� : %d\n", left);
	printf("right�� �� : %d\n", right);

	printf("left�� �ּ� : %p\n", &left);
	printf("right�� �ּ� : %p\n\n", &right);
}

void main()
{
#pragma region [����]���� ������
	// ������ ������ ������.
#pragma endregion

#pragma region �Լ�
	// �ϳ��� Ư���� ������ �۾��� �����ϱ� ����
	// ���������� ����� �ڵ��� �����Դϴ�.

	// Process();
	// Process();
#pragma endregion

#pragma region ��ȯ��
	// �Լ��� ������ ������ �����ִ� ����� �ڷ����Դϴ�.

	// printf("Damage �Լ��� �� : %d\n", Damage());
	// printf("Character �Լ��� �� : %c\n", Character());

	// �Լ��� ���, �ڷ����� ��ȯ�ϴ� ���� ���°� ��ġ���� ������
	// ���ϴ� ���� ���� �� �����ϴ�.
#pragma endregion

#pragma region �Ű� ����
	// �Լ��� ���ǿ��� ���޹��� �μ��� �Լ� ���η� �����ϱ� ���� ����ϴ� �����Դϴ�.

	// int x = 10;
	// int y = 20;
	// 
	// Position(x, y);

	// �Ű� ������ �Լ� ���ο����� ������ �̷������,
	// �Լ��� ����Ǹ� �޸𸮿��� �����˴ϴ�.

	// Color('A', 1, 0.5f);

	// �ϳ��� �Լ��� ���� �ٸ� �ڷ����� �Ű� ������ �Բ� ������ �� ������,
	// ���� ���� �Ű� ������ ������ �� �ֽ��ϴ�.
#pragma endregion

#pragma region �μ�
	// �Լ��� ȣ��� ��, �Ű� ������ ������ ���޵Ǵ� ���Դϴ�.

	// int first = 10;
	// int second = 20;
	// 
	// int temporary = first;
	// 
	// first = second;
	// second = temporary;
	// 
	// printf("first�� �� : %d\n", first);
	// printf("second�� �� : %d\n", second);

	// �μ��� ���, �Լ��� �ִ� �Ű� ������ ���� ���� ������ �� �ִ� �μ��� ���� �����Ǹ�,
	// ���� �����ϴ� �μ��� ���� ���޹޴� �Ű� ������ �ڷ����� ���� ��ġ�ؾ� �մϴ�.

	int first = 10;
	int second = 20;

	Swap(first, second);

	printf("�ٱ��� first�� �� : %d\n", first);
	printf("�ٱ��� second�� �� : %d\n", second);

	printf("first�� �ּ� : %p\n", &first);
	printf("second�� �ּ� : %p\n\n", &second);
#pragma endregion

#pragma region [����] Call By Value, Call By Reference(������ ���� ����)�� ���� �˾ƺ���

#pragma endregion

}

