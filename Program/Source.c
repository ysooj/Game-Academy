#include <stdio.h>
#include "audio.h"
// ���� ���� ���� ��� ������ ���� �ִ� ��� ���ϰ� �����ϱ� ���� <>(�ޱ� �����)�� �ƴ�, ""(�ֵ���ǥ)�� �����´�.

// ����ü�� �Լ� �ۿ� �����ؾ� �Ѵ�.
// object�� '��ü'��� ��.
struct Object
{
	char character;
	int integer;
	float decimal;
};

int main()
{
#pragma region ����ü
	// ���� ���� ������ �ϳ��� �������� ����ȭ�� ����
	// �ϳ��� ��ü�� �����ϴ� ���Դϴ�.

	// struct Object object = { 'B', 10, 6.25f };
	// 
	// printf("object�� charater : %c\n", object.character);
	// printf("object�� integer : %d\n", object.integer);
	// printf("object�� decimal : %f\n\n", object.decimal);
	// 
	// // ����ü�� �� ����� ����ü ���𿡼� ��Ÿ���� ������� �ʱ�ȭ�˴ϴ�.
	// // �� ������ �ʱ�ȭ ����� ������ ���ʿ��� ���������� �����Ǵ� ����Դϴ�.
	// 
	// object.character = 'A';
	// object.integer = 100;
	// object.decimal = 36.5f;
	// 
	// printf("object�� charater : %c\n", object.character);
	// printf("object�� integer : %d\n", object.integer);
	// printf("object�� decimal : %f\n", object.decimal);

	// ����ü�� �����ϱ� ����, ����ü�� �޸� ������ �������� �����Ƿ�
	// ����ü ���ο� �ִ� �����͸� �ʱ�ȭ�� �� �����ϴ�.
    
#pragma endregion

#pragma region ��� ����
	// volume = 3.25f;
	// // ��� ���Ͽ����� ������ ���⼭ ��� ����.
	// 
	// Listener();
	// // ��� ���Ͽ����� �Լ��� ���⼭ ��� ����.
#pragma endregion

#pragma region [����] �����ڵ忡 ���� �˾ƺ���.
	// �ƽ�Ű�ڵ忡 ���ؼ��� �������.
#pragma endregion

	return 0;
}