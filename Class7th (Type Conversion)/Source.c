#include <stdio.h>
#define SIZE 5

void main()
{
#pragma region �ڷ��� ��ȯ
	// ���� �ٸ� �ڷ����� ������ �ִ� �������� ������ �̷���� ��
	// ������ �����ߴ� �ڷ����� �ٸ� �ڷ������� ��ȯ�ϴ� �����Դϴ�.

#pragma region �Ϲ��� �ڷ��� ��ȯ
	// ���� �ٸ� �ڷ������� ������ �̷���� ��
	// �ڷ����� ũ�Ⱑ �� ū �ڷ������� ��ȯ�Ǵ� �����Դϴ�.

	// int integer = 10;
	// float decimal = 5.5f;
	// 
	// float storage = integer + decimal;
	// 
	// printf("storage ������ �� : %f\n", storage);

	// ǥ�� ������ ���� �����Ϳ� ǥ�� ������ ū �����͸� �����ϰ� �Ǹ�
	// �Ϲ������� ������ �ս��� �߻��մϴ�.
#pragma endregion

#pragma region ����� �ڷ��� ��ȯ
	// ������ �̷������ ����
	// ����ڰ� ���� �ڷ����� ��ȯ�ϴ� �����Դϴ�.

	// int critical = 10;
	// 
	// int penetration = 3;
	// 
	// float attack = (float) critical / penetration;
	// 
	// printf("attack ������ �� : %f", attack);

	// ������ �������� ������ �����ϰ� �Ǹ� ������ ������� ���� �� �ֽ��ϴ�.
	// �� ���ð� �ٷ� ���� ����̴�.
#pragma endregion

#pragma region ���� �� ���
	// (short circuit)
	// ����� �����ϴ� ���߿� ����� �̹� Ȯ���� ���,
	// ������ ����� �����ϴ� �����Դϴ�.

	// �� ����
	// int y = 0;
	// 
	// if (y && y++)
	// {
	// 	printf("%d", y);
	// }
	// 
	// if (y || y++)
	// {
	// 	printf("%d", y);
	// }
	// 
	// printf("%d", y);

	// ������ ����
	// int x = 0;
	// int y = 0;
	// 
	// if (x != 0 && y++)
	// {
	// 	printf("Short Circuit\n");
	// }
	// 
	// if (x == 0 || y++)
	// {
	// 	printf("Second or Operator\n");
	// }
	// 
	// if (x != 0 || y++)
	// {
	// 	printf("Second or Operator\n");
	// }
#pragma endregion

#pragma region ��ũ��
	// ���α׷� ������ Ư���� �����Ͱ� ���ڿ��� ���ǵǰ� ó���Ǵ� �����Դϴ�.

	// ��ũ���� ���, �ڷ����� �������� �����Ƿ�
	// �޸� ������ ������ ���� �ʽ��ϴ�.

	printf("��ũ�� SIZE�� �� : %d\n", SIZE);

	// ex) SIZE = 100;

	// ��ũ���� ������ ������ ������ ����Ǹ�,
	// �� ��ũ�ΰ� ����� �� ��ũ���� ��ü ����� �־�� �ϹǷ�
	// ���α׷��� ũ�Ⱑ Ŀ���� �˴ϴ�.
#pragma endregion

#pragma endregion

}