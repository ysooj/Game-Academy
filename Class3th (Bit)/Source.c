#include <stdio.h>

void main()
{
#pragma region ��� ������
	// 1. ���� = ���� + ����
	// 2. ���� = ���� - ���ͷ� ���
	// 3. ���� = ���� * �ɺ��� ���
	// 4. ���� = ���ͷ� ��� / ���ͷ� ���
	// 5. ���� = �ɺ��� ��� % ���ͷ� ���

	// * ���� �� �� *
	// int number1 = 10;
	// int number2 = 5;
	// 
	// int plus = number1 + number2;
	// int minus = number1 - 5;
	// int multiple = number1 * number2;
	// int divide = 10 / 5;
	// int moduler = number1 % 5;

	// printf("plus : %d", plus);
	// printf("\n");
	// printf("minus : %d", minus);
	// printf("\n");
	// printf("multiple : %d", multiple);
	// printf("\n");
	// printf("divide : %d", divide);
	// printf("\n");
	// printf("moduler : %d", moduler);

	// * ������ ���� *
	// int storage1 = 0;
	// int storage2 = 0;
	// int storage3 = 0;
	// int storage4 = 0;
	// int storage5 = 0;
	// 
	// int x = 10;
	// int y = 5;
	// int z = 1;
	// int w = 10;
	// 
	// // �ɺ��� ���
	// const int constant = 5;
	// 
	// // 1. ���� = ���� + ����
	// storage1 = x + y;
	// // 2. ���� = ���� - ���ͷ� ���
	// storage2 = z - 1;
	// // 3. ���� = ���� * �ɺ��� ���
	// storage3 = w * constant;
	// // 4. ���� = ���ͷ� ��� / ���ͷ� ���
	// storage4 = 20 / 5;
	// // 5. ���� = �ɺ��� ��� % ���ͷ� ���
	// storage5 = constant % 5;
	// 
	// printf("storage1�� �� : %d\n", storage1);
	// printf("storage2�� �� : %d\n", storage2);
	// printf("storage3�� �� : %d\n", storage3);
	// printf("storage4�� �� : %d\n", storage4);
	// printf("storage5�� �� : %d\n", storage5);
#pragma endregion

#pragma region ��Ʈ
	// �����͸� ��Ÿ���� �ּ��� �����̸�, 0 �Ǵ� 1�� �������� �� ����� �ϴ� �����Դϴ�.

#pragma region (10)������ (2)������ ��ȯ�ϴ� ����
	// 10������ 1�� �� ������ ��� 2�� ������ �� ����
	// ���� ��ġ�� ������ ���� �Ʒ����� ���� ������� �����մϴ�.

	// ��) 10 => 10�� 2�� ������ => �� 5, ������ 0
	//			 5�� 2�� ������ => �� 2, ������ 1
	//			 2�� 2�� ������ => �� 1, ������ 0
	// 0000 1010(2) => �� �غ��� �����ָ� �Ǵµ�, ������ ����� ������� ������ ��
	//					���ڵ� �׸��� ��������.

	// ex) 23 -> 10111
#pragma endregion

#pragma region (2)������ (10)������ ��ȯ�ϴ� ����
	// 1 byte�� 2������ ����� ���� 2�� �������� ��Ÿ���ϴ�.

	// ������ ��Ʈ�� 1�� �ִٸ�
	// 1�� 2�� ������ ��ġ�� ����� ����, ������ ��Ʈ�� ��� ���Ͽ� 10������ ��Ÿ���ϴ�.
#pragma endregion

#pragma region ��Ʈ ������
	// ��Ʈ ������ �� ������ �����ϱ� ���� ����ϴ� �������Դϴ�.
#pragma region AND ������
	// �� ���� �ǿ����ڰ� ��� 1�̸� 1�� ��ȯ�ϴ� �������Դϴ�.
	// �� �߿� �ϳ��� 1�� �ƴϰų�, �� �� 0�� ��쿡�� 0�� ��ȯ��.

	char storage1 = 10;
	// 0000 1010
	char storage2 = 6;
	// 0000 0110

	printf("storage1 & storage2 : %d\n", storage1 & storage2);
#pragma endregion

#pragma region OR ������
	// �� ���� �ǿ����� �߿� �ϳ��� 1�� �ִٸ� 1�� ��ȯ�ϴ� �������Դϴ�.

	char storage3 = 8;
	// 0000 1000
	char storage4 = 12;
	// 0000 1100

	printf("storage3 | storage4 : %d\n", storage3 | storage4);
#pragma endregion

#pragma region XOR ������
	// �� ���� �ǿ����ڰ� ���� ������ 0��, ���� �ٸ��� 1�� ��ȯ�ϴ� �������Դϴ�.

	int storage5 = 6;	// 0000 0110
	int storage6 = 15;	// 0000 1111
	// ----------
	// 0000 1001

	printf("storage5 ^ storage6 : %d\n", storage5 ^ storage6);
#pragma endregion

#pragma region NOT ������
	// �ϳ��� ��Ʈ�� ������Ű�� �������Դϴ�. (�ݴ�� ������ ��)

	char storage7 = 13;	// 0000 1101
	// ---------
	// 1111 0010
// => �̷��� �ż� 200���� ū ���� ���;� �ϴµ�, �Ʒ�ó�� ����غ��� -14�� ���´�.
	printf("~storage7 : %d\n", ~storage7);	// => -14

	// ù ��° ��Ʈ�� ��ȣ�� ��Ÿ����, ù ��° ��Ʈ�� 1�� �ִٸ� ���� ������ �˴ϴ�. (��ȣ ��Ʈ)
	// ���� ���� ����� -128 + 64 + 32 + 16 + 2 = -14
#pragma endregion

#pragma region ����Ʈ ������
	// ��Ʈ�� Ư���� ��ġ�� ������ ����ŭ �̵���Ű�� �������Դϴ�.
	// �������� �̵���Ű�� ���� ���� <<, ���������� �̵���Ű�� ���� ���� >>�� ����,
	// �̵���Ű�� ���� ��ŭ�� ���ڸ� ���� ��.

	int data = 5;	// 0000 0101
	int shift = data << 2;

	printf("shift�� �� : %d\n", shift);

	shift = shift >> 1;	// 0000 1010 => 10

	printf("shift�� �� : %d\n", shift);
#pragma endregion

	// �޸𸮴� ��Ʈ ������ �����͸� ������ �� ������,
	// 1���� ��Ʈ���� 0 �Ǵ� 1�� ���� ������ �� �ֽ��ϴ�.

	// 1 Byte <= bit �� 8�� ���̸�
#pragma endregion

#pragma endregion

}