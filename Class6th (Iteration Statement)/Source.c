#include <stdio.h>

void main()
{
#pragma region �ݺ���
	// ���α׷� ������ Ư���� �۾��� �ݺ������� �����ϴ� ��ɹ��Դϴ�.

#pragma region ����������
	// �ǿ����ڸ� �ϳ��� ������Ű�ų� ���ҽ�ų �� ����ϴ� �������Դϴ�.

	//	[���� ���� ����]
	//	int code = 0;
	//	int packet = ++code;
	//	// ++�� ���� 1 �� ������Ų��.
	//	
	//	printf("packet ������ �� : %d\n", packet);
	//	printf("code ������ ���� ������ �� : %d\n", code);
	//	
	//	packet = --code;
	//	
	//	printf("packet ������ �� : %d\n", packet);
	//	printf("code ������ ���� ������ �� : %d\n", code);

	// ���� ���� �����ڴ� ������ ���� ������Ų �Ŀ� ������ �����մϴ�.
	// �� ���� ������Ų ��, ������ ���� �����մϴ�.

	// ���� ���� �����ڴ� ������ ������ ���� ������ ���� ������ŵ�ϴ�.
	// �� ������ ���� �����ϰ�, ������ ���� �����մϴ�.

	//	[���� ���� ����]
	//	int data = 0;
	//	
	//	int storage = data++;
	//	
	//	printf("storage ������ �� : %d\n", storage);
	//	printf("data ������ ���� ������ �� : %d\n", data);
	//	
	//	storage = data--;
	//	
	//	printf("storage ������ �� : %d\n", storage);
	//	printf("data ������ ���� ������ �� : %d\n", data);
#pragma endregion

#pragma region for��
	// �ʱ���� �����Ͽ� ���ǽ��� ����� ���� Ư���� Ƚ����ŭ �ݺ��ϴ� �ݺ����Դϴ�.

	// for (int i = 0; i < 5; i++)
	// {
	// 	printf("Update\n");
	// }
#pragma endregion

#pragma region while��
// Ư�� ������ ������ ������ ����ؼ� �־��� ��ɹ��� �����ϴ� �ݺ����Դϴ�.

// while���� ��� ������ �Ʒ��� ����Ǹ�,
// �Ʒ��� �ִ� ��ɹ��� ������ �� ������ �ٽ� ���� �ִ� ��ɹ����� ���ư��� �ݺ��ϴ� �����Դϴ�.

	// int count = 5;
	// 
	// while (count > 0)
	// {
	// 	printf("count : %d\n", count);
	// 	count--;
	// }
#pragma endregion

#pragma region do-while��
	// ���ǰ� ������� �� ���� �۾��� ������ ����
	// ���ǿ� ���� ��ɹ��� �����ϴ� �ݺ����Դϴ�.

	// int life = 0;
	// 
	// do
	// {
	// 	printf("Alive...");
	// } while (life > 0);
	// 
	// ���⼭ while�� ���ǹ��� life == 0 ���� �ϸ� ���� ����(���� �ݺ�) �ȴ�.
#pragma endregion

#pragma region continue��
	// �ش� ���ǹ��� �������� �ʰ�,
	// �ݺ����� �̾ �����ϴ� ����Դϴ�.

	// break�� �б⸦ Ż���ϴ� ��.
	// continue�� Ư���� ���ǿ� �ش��ϴ� �͸� �ǳʶٰ�(�����ϰ�) �ݺ����� ��� �����ϴ� ��.

	// for (int i = 1; i <= 5; i++)
	// {
	// 	if (i == 3)
	// 	{
	// 		continue;
	// 	}
	// 	printf("%d\n", i);
	// }
#pragma endregion

#pragma region ��ø �ݺ���
	// �ݺ��� �ȿ� ���ο� �ݺ����� ��� �ִ� ������ �ݺ����Դϴ�.

	// // [���� 1]
	// for (int a = 0; a < 3; a++)
	// {
	// 	printf("�ٱ��� �ִ� for��\n");
	// 	printf("\n");
	// 
	// 	for (int b = 0; b < 3; b++)
	// 	{
	// 		printf("���ʿ� �ִ� for��\n");
	// 	}
	// 
	// 	printf("\n");
	// }

	// [����2 (������)]
	for (int i = 1; i < 10; i++)
	{
		printf("������ %d��\n\n", i);
		for (int j = 1; j < 10; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
#pragma endregion

#pragma endregion
}