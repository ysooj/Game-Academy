#include <stdio.h>
#include <stdlib.h>

int main()
{
#pragma region ���� �Ҵ�
	// ���α׷��� �����ϴ� �߿� �ʿ��� ��ŭ �޸𸮸� �Ҵ��ϴ� �۾��Դϴ�.

	// int * pointer = malloc(sizeof(int));
	// printf("pointer : %p\n", pointer);
	// 
	// *pointer = 10;
	// printf("pointer ������ ����Ű�� �� : %d\n", *pointer);

	// ���� �Ҵ��� ���� �ð��� ���������� �޸��� ũ�⸦ �����ų �� ������,
	// �������� �޸��� ũ�⸦ �Ҵ��� ��, ����Ʈ ������ �����մϴ�.

	// free(pointer);

	// �������� �Ҵ��� �޸𸮴� �� ������ �����Ǿ� �����Ƿ�,
	// ����� ������ ���� ������ ���־�� �մϴ�.

	int array[] = {10, 20, 30};
	int* pointer = malloc(sizeof(array));

	// [����] ���� �ڵ� ����ؿ���

#pragma endregion

	return 0;
}