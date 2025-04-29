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

void Swap(int* left, int* right)
{
	int temporary = *left;

	*left = *right;
	*right = temporary;

	// printf("left�� �� : %d\n", left);
	// printf("right�� �� : %d\n", right);

	printf("left�� �ּ� : %p\n", left);
	printf("right�� �ּ� : %p\n\n", right);
}

void Recursion(int count)
{
	if (count <= 0)
	{
		return;
	}

	Recursion(count - 1);

	printf("Recursion\n");
	printf("count�� �� : %d\n", count);
}

inline void Calculator()
{
	printf("Calculator...\n");
}

int main()
{
#pragma region [����]���� ������
	// ������ ������ ������.

	// ���� �����ڴ� ������ ���ǽ��� ���̳� �����̳Ŀ� ���� �ٸ� ���� ����� �� �ְ� �Ѵ�.
	// if������ �����ϰ� �� �� �ִ�.

	// int hunger = 9;
	// const char* state = hunger <= 100 && hunger >= 90 ? "�ſ� �����"
	// 	: hunger < 90 && hunger >= 50 ? "�����"
	// 	: hunger < 50 && hunger > 10 ? "��θ�"
	// 	: "�ſ� ��θ�";
	// printf("���� ���� %s �����Դϴ�.\n", state);

	// ����/���ǽ� ? ��1 : ��2;
	// ��/������ �Ǵ��� ������ ���ǽ� ? ���� �� ����� �� : ������ �� ����� ��;

	// [if������ ���ٸ� �Ʒ��� ���� �ڵ尡 �������.]
	// int hunger = 20;
	// 
	// if (hunger <= 100 && hunger >= 90)
	// {
	//     printf("�ſ� �谡 ���� �����Դϴ�.");
	// }
	// else if (hunger < 90 && hunger >= 50)
	// {
	//     printf("�谡 ���� �����Դϴ�.");
	// }
	// else if (hunger < 50 && hunger > 10)
	// {
	//     printf("�谡 �θ� �����Դϴ�.");
	// }
	// else
	// {
	//     printf("�ſ� �谡 �θ� �����Դϴ�.");
	// }
#pragma endregion

#pragma region �Լ�
	// �ϳ��� Ư���� ������ �۾��� �����ϱ� ����
	// ���������� ����� �ڵ��� �����Դϴ�.

	// Process();
	// Process();
#pragma endregion

#pragma region ��ȯ��
	// �Լ��� ������ ������ �����ִ� ����� �ڷ����Դϴ�.

	// return�� ���� ��ȯ�ϱ⵵ �ϸ鼭 �Լ��� �����Ű�⵵ �Ѵ�.

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

	// �Ű� ������ main �Լ� �ۿ��� ���� �Լ��� main �Լ� �ȿ��� ȣ���� �� �Լ� �ȿ� ���� ���� �ǹ��Ѵ�.
	// �� : Color('A', 1, 0.5f); ������ 'A', 1, 0.5f
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

	// int first = 10;
	// int second = 20;
	// 
	// Swap(& first, & second);
	// 
	// printf("�ٱ��� first�� �� : %d\n", first);
	// printf("�ٱ��� second�� �� : %d\n", second);

	// printf("first�� �ּ� : %p\n", &first);
	// printf("second�� �ּ� : %p\n\n", &second);
#pragma endregion

#pragma region [����] Call By Value, Call By Reference(������ ���� ����)�� ���� �˾ƺ���
	// Call by Value (���� ���� ����)

// �Լ��� ȣ���� �� ������ ����� ���� �����ؼ� �Լ��� �����ϴ� ���
// ���� ������ �ٸ� ������ ���纻�� ������� ���޵�
// �Լ� �ȿ��� ���� �ٲ㵵 ���� ������ ������ ����


	// Call by Reference (������ ���� ����)

// ������ �Լ��� ������ �� ������ �ּ�(�޸� ��ġ)�� �����ϴ� ���
// �Լ� �ȿ��� ���� ������ ������ �� ����
// �Լ� �ȿ��� ���� �ٲٸ� ���� ������ �Բ� �ٲ�
#pragma endregion	

#pragma region ��� �Լ�
	// � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ� �۾��� �����ϴ� �Լ��Դϴ�.

	// ��� �Լ��� �Լ��� ��� ȣ���ϱ� ������ ���� ������ �޸𸮰� ��� ���̰� �ǹǷ�
	// ���� �����÷ο찡 �Ͼ�ϴ�.

// Recursion(5);

	// �Լ��� �帧�� �Ʒ��� ����.
	// main() ȣ�� -> Recursion(5) -> Recursion(4) -> Recursion(3) -> Recursion(2) -> Recursion(1)
	// -> Recursion(0) �� return -> count = 1 �� print -> count = 2 �� print -> count = 3 �� print
	// -> count = 4 �� print -> count = 5 �� print
#pragma endregion

#pragma region �ζ��� �Լ�
	// �Լ��� ȣ���ϴ� ���, �Լ��� ȣ��Ǵ� ��ġ����
	// �Լ��� �ڵ带 �����Ͽ� �����ϴ� ����� �Լ��Դϴ�.

	// �ζ��� �Լ��� �Լ��� ȣ���ϴ� ������ �����Ƿ� ó�� �ӵ��� ��������
	// �ζ��� �Լ��� ���� ����ϰ� �Ǹ�, �Լ��� �ڵ尡 ����Ǳ� ������
	// ���� ������ ũ�Ⱑ Ŀ���� �˴ϴ�.

	Calculator();

	// �ζ��� �Լ��� ������ ������ Ȯ��Ǹ�, ������ �� �ζ��� �Լ��� �����ϴ���
	// ��Ȳ�� ���� �Ϲ� �Լ��� ��ȯ�Ǳ⵵ �մϴ�.
#pragma endregion

#pragma region [����] ���� ��忡 ���� �˾ƺ���
	// ���α׷��� � �۾��� �����ϱ� ���� �߰������� �Ҹ��ϴ� �ڿ�
	// �� �ڿ��� �ð�(���� �ð�), �޸�(����), �Ǵ� CPU ó�� �ɷ��� �� �ִ�.
#pragma endregion

	return 0;
}