#include <stdio.h>

void main()
{
#pragma region �ּ� ������
	// ������ �ּ� ���� ��ȯ�ϴ� �������Դϴ�.

	// int data = 10;
	// 
	// printf("data ������ �ּ� : %p\n", &data);

	// �������� �ּҴ� �ش� �����Ͱ� ����� �޸��� ���� �ּҸ� �ǹ��ϸ�,
	// �޸��� ������ 1 byte�� ũ��� ������ ǥ���մϴ�.

	// �޸𸮴� RAM�� �ö󰡰� �ȴ�.
#pragma endregion

#pragma region scanf �Լ�
	// ǥ�� �Է� �Լ���, ���� ������ �����͸� �پ��� ���Ŀ� ���߾� �Է����ִ� �Լ��Դϴ�.

	// int x = 0;
	// 
	// printf("x ������ ���� �Է��ϼ���. : ");

	// ǥ�� �Է� �Լ��� �Է��� ������ ������
	// ���� �۾����� �Ѿ �� �����ϴ�.

	// scanf_s("%d", &x);

	// ���۴� �����Ͱ� �̵��� �� �ӽ÷� ����Ǵ� �����̸�,
	// ���� �����ڿ� ���� �Է��� �� �ִ� �������� ������ �����˴ϴ�.

	// {
	// �Է� �Լ��̱� ������, �Ʒ��� ���� �ڵ带 ���� �Ǹ�
	// �Է��� �� 'x������ �� : '���� ���� ���ϴ� ���� ����� �Ѵ�.
	// ���� �Է� �Լ����� ���� ���� �ƹ��͵� ���� �ʴ� �� ����.
	// scanf_s("x������ �� : %d", &x);
	// }

	// printf("x ������ �� : %d\n", x);

	// ǥ�� �Է� �Լ��� �����͸� �Է��ϰ� �Ǹ�
	// ���ۿ� �����͸� �����Ͽ��ٰ�, �Է��ϴ� ���� ���� ���� ������ ���α׷��� �����մϴ�.
#pragma endregion

#pragma region ������
	// �޸��� �ּ� ���� ������ �� �ִ� �����Դϴ�.

	// ������ ������ �ڽ��� �޸� ������ ������ ������,
	// ������ ������ ������ �ּҸ� �����ϰ� �Ǹ�
	// �ش� ������ ���� �ּҸ� ����Ű�� �˴ϴ�.

	// {
	// �������� �ڷ����� ���� ����Ű�����ϴ� ������ �ڷ������� �����ָ� �ȴ�.
	// }

	// int storage = 10;
	// int position = 20;
	// printf("ó�� position ������ �� : %d\n", position);
	// 
	// int * pointer = &storage;
	// 
	// // �����Ͱ� ����Ű�� �޸� ������ �ڷ����� �� �� �����Ƿ�,
	// // �����Ͱ� ����Ű�� �޸��� �ڷ����� �������־�� �մϴ�.
	// // {���� �Ʒ��� ���� �ٸ� �ڷ������� ������ ����� ��µ��� ���� �� �ִ�.}
	// // float * reference = &storage;
	// 
	// printf("storage�� �ּ� : %p\n", &storage);
	// printf("pointer�� �� : %p\n", pointer);
	// printf("pointer�� �ּ� : %p\n\n", &pointer);
	// 
	// // [������]
	// // {�����͸� ���� ���� Ȯ���ϰ� ������ �� �ִ�.}
	// *pointer = 99;
	// printf("storage ������ �� : %d\n", storage);
	// printf("pointer ������ ����Ű�� �� : %d\n", *pointer);
	// 
	// pointer = &position;
	// 
	// *pointer = 100;
	// printf("�������� ������ position ������ �� : %d\n", position);
	// printf("pointer ������ ����Ű�� �� : %d\n", *pointer);
	// printf("pointer�� �� : %p\n\n", pointer);
	// 
	// // ������ ������ ũ��� �߾� ó�� ��ġ�� �� ���� ó���� �� �ִ� ũ��� ��������,
	// // �� ���� ó���� �� �ִ� ũ��� �ü���� ���� ũ�Ⱑ �����˴ϴ�.
	// 
	// printf("int ũ�� : %u\n", sizeof(int));
	// printf("pointer ������ ũ�� : %u\n", sizeof(pointer));
#pragma endregion

#pragma region  ���� ������
	// �ڷ����� �������� ���� ���·� ��� �ڷ����� ������ �� �ִ� �������Դϴ�.

	// char character = 'A';
	// int integer = 20;
	// float decimal = 1.0f;
	// 
	// void * reference = &character;
	// 
	// printf("ó�� character ������ �� : %c\n", character);
	// printf("character�� �ּ� �� : %p\n", &character);
	// printf("reference�� �� : %p\n\n", reference);
	// 
	// // ���� �����ʹ� �޸� �ּҿ� �����ؼ� ���� ������ �� �����ϴ�.
	// // *reference = 'B';
	// // ���� ���� ������ �Ϸ��� �ϸ� ������ �߻�.
	// // ���� �����ͷ� ������ �޸𸮿� �����Ϸ���
	// // ���� �����Ͱ� ����Ű�� ������ �ڷ������� �� ��ȯ�� ���־�� �մϴ�.
	// 
	// *(char *)reference = 'B';
	// printf("�������� ������ character ������ �� : %c\n", character);
	// printf("character�� �ּ� �� : %p\n", &character);
	// printf("reference�� �� : %p\n\n", reference);
	// 
	// reference = &integer;
	// *(int *)reference = 20;
	// printf("�������� ������ integer ������ �� : %d\n", integer);
	// printf("integer ������ �ּ� �� : %p\n", &integer);
	// printf("reference�� �� : %p\n\n", reference);
	// 
	// reference = &decimal;
	// *(float *)reference = 5.0f;
	// printf("�������� ������ decimal ������ �� : %f\n", decimal);
	// printf("decimal ������ �ּ� �� : %p\n", &decimal);
	// printf("reference�� �� : %p\n\n", reference);
#pragma endregion

#pragma region ��� ���� ������
	// �����Ͱ� ����Ű�� �ּҿ� ����Ǿ� �ִ� ����
	// ������ �� ������ �����Ǿ� �ִ� �������Դϴ�.

// int y = 10;
// int z = 20;
// 
// const int * constPointer = &y;
// 
// // �������� �����͸� �ٲٴ� �� �� �ȴ�.
// // *constPointer = 99;
// 
// printf("y ������ �ּ� �� : %p\n", &y);
// printf("constPointer�� �� : %p\n\n", constPointer);
// 
// constPointer = &z;
// 
// printf("z ������ �ּ� �� : %p\n", &z);
// printf("constPointer�� �� : %p\n\n", constPointer); 
#pragma endregion

#pragma region ������ ���
// ������ ������ ����Ű�� �ִ� �ּ� ���� ������ �� ���� �������Դϴ�.

// int protein = 10;
// int fat = 5;
// 
// printf("protein ������ �� : %d\n", protein);
// 
// int* const constReference = &protein;
// 
// *constReference = 20;
// 
// printf("constReference�� ����Ű�� �� : %d\n", *constReference);
// printf("�������� ������ protein ������ �� : %d\n", protein);

// constReference = &fat;
// ���� ���� �� �ּ� ������ ������ �� ����.

// ����� ������ �����ʹ� �ش� ������ ���� ������ �� ������,
// �ٸ� ������ �ּҸ� ���� ������ ���� �����ϴ�.
#pragma endregion

}