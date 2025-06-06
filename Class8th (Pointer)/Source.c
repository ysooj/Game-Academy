#include <stdio.h>

void main()
{
#pragma region 주소 연산자
	// 변수의 주소 값을 반환하는 연산자입니다.

	// int data = 10;
	// 
	// printf("data 변수의 주소 : %p\n", &data);

	// 데이터의 주소는 해당 데이터가 저장된 메모리의 시작 주소를 의미하며,
	// 메모리의 공간은 1 byte의 크기로 나누어 표현합니다.

	// 메모리는 RAM에 올라가게 된다.
#pragma endregion

#pragma region scanf 함수
	// 표준 입력 함수로, 여러 종류의 데이터를 다양한 서식에 맞추어 입력해주는 함수입니다.

	// int x = 0;
	// 
	// printf("x 변수의 값을 입력하세요. : ");

	// 표준 입력 함수는 입력을 수행할 때까지
	// 다음 작업으로 넘어갈 수 없습니다.

	// scanf_s("%d", &x);

	// 버퍼는 데이터가 이동할 때 임시로 저장되는 공간이며,
	// 서식 지정자에 따라 입력할 수 있는 데이터의 범위도 결정됩니다.

	// {
	// 입력 함수이기 때문에, 아래와 같이 코드를 적게 되면
	// 입력할 때 'x변수의 값 : '까지 적고 원하는 값을 적어야 한다.
	// 따라서 입력 함수에는 위와 같이 아무것도 적지 않는 게 좋다.
	// scanf_s("x변수의 값 : %d", &x);
	// }

	// printf("x 변수의 값 : %d\n", x);

	// 표준 입력 함수로 데이터를 입력하게 되면
	// 버퍼에 데이터를 보관하였다가, 입력하는 순간 버퍼 안의 내용을 프로그램에 전송합니다.
#pragma endregion

#pragma region 포인터
	// 메모리의 주소 값을 저장할 수 있는 변수입니다.

	// 포인터는 8byte의 메모리를 가진다.

	// 포인터 변수도 자신의 메모리 공간을 가지고 있으며,
	// 포인터 변수에 변수의 주소를 저장하게 되면
	// 해당 변수의 시작 주소를 가리키게 됩니다.

	// {
	// 포인터의 자료형은 내가 가리키고자하는 변수의 자료형으로 적어주면 된다.
	// }

	// int storage = 10;
	// int position = 20;
	// printf("처음 position 변수의 값 : %d\n", position);
	// 
	// int * pointer = &storage;
	// 
	// // 포인터가 가리키는 메모리 공간의 자료형은 알 수 없으므로,
	// // 포인터가 가리키는 메모리의 자료형을 선언해주어야 합니다.
	// // {따라서 아래와 같이 다른 자료형으로 적으면 제대로 출력되지 않을 수 있다.}
	// // float * reference = &storage;
	// 
	// printf("storage의 주소 : %p\n", &storage);
	// printf("pointer의 값 : %p\n", pointer);
	// printf("pointer의 주소 : %p\n\n", &pointer);
	// 
	// // [역참조]
	// // {포인터를 통해 값을 확인하고 수정할 수 있다.}
	// *pointer = 99;
	// printf("storage 변수의 값 : %d\n", storage);
	// printf("pointer 변수가 가리키는 값 : %d\n", *pointer);
	// 
	// pointer = &position;
	// 
	// *pointer = 100;
	// printf("역참조로 수정된 position 변수의 값 : %d\n", position);
	// printf("pointer 변수가 가리키는 값 : %d\n", *pointer);
	// printf("pointer의 값 : %p\n\n", pointer);
	// 
	// // 포인터 변수의 크기는 중앙 처리 장치가 한 번에 처리할 수 있는 크기로 정해지며,
	// // 한 번에 처리할 수 있는 크기는 운영체제에 따라 크기가 결정됩니다.
	// 
	// printf("int 크기 : %u\n", sizeof(int));
	// printf("pointer 변수의 크기 : %u\n", sizeof(pointer));
#pragma endregion

#pragma region  범용 포인터
	// 자료형이 정해지지 않은 상태로 모든 자료형을 저장할 수 있는 포인터입니다.

	// char character = 'A';
	// int integer = 20;
	// float decimal = 1.0f;
	// 
	// void * reference = &character;
	// 
	// printf("처음 character 변수의 값 : %c\n", character);
	// printf("character의 주소 값 : %p\n", &character);
	// printf("reference의 값 : %p\n\n", reference);
	// 
	// // 범용 포인터는 메모리 주소에 접근해서 값을 변경할 수 없습니다.
	// // *reference = 'B';
	// // 위와 같이 역참조 하려고 하면 에러가 발생.
	// // 범용 포인터로 변수의 메모리에 접근하려면
	// // 범용 포인터가 가리키는 변수의 자료형으로 형 변환을 해주어야 합니다.
	// 
	// *(char *)reference = 'B';
	// printf("역참조로 수정된 character 변수의 값 : %c\n", character);
	// printf("character의 주소 값 : %p\n", &character);
	// printf("reference의 값 : %p\n\n", reference);
	// 
	// reference = &integer;
	// *(int *)reference = 20;
	// printf("역참조로 수정된 integer 변수의 값 : %d\n", integer);
	// printf("integer 변수의 주소 값 : %p\n", &integer);
	// printf("reference의 값 : %p\n\n", reference);
	// 
	// reference = &decimal;
	// *(float *)reference = 5.0f;
	// printf("역참조로 수정된 decimal 변수의 값 : %f\n", decimal);
	// printf("decimal 변수의 주소 값 : %p\n", &decimal);
	// printf("reference의 값 : %p\n\n", reference);
#pragma endregion

#pragma region 상수 지시 포인터
	// 포인터가 가리키는 주소에 저장되어 있는 값을
	// 변경할 수 없도록 지정되어 있는 포인터입니다.

// int y = 10;
// int z = 20;
// 
// const int * constPointer = &y;
// 
// // 역참조로 데이터를 바꾸는 게 안 된다.
// // *constPointer = 99;
// 
// printf("y 변수의 주소 값 : %p\n", &y);
// printf("constPointer의 값 : %p\n\n", constPointer);
// 
// constPointer = &z;
// 
// printf("z 변수의 주소 값 : %p\n", &z);
// printf("constPointer의 값 : %p\n\n", constPointer); 
#pragma endregion

#pragma region 포인터 상수
// 포인터 변수가 가리키고 있는 주소 값을 변경할 수 없는 포인터입니다.

// int protein = 10;
// int fat = 5;
// 
// printf("protein 변수의 값 : %d\n", protein);
// 
// int* const constReference = &protein;
// 
// *constReference = 20;
// 
// printf("constReference가 가리키는 값 : %d\n", *constReference);
// printf("역참조로 수정된 protein 변수의 값 : %d\n", protein);

// constReference = &fat;
// 위와 같이 새 주소 값으로 변경할 수 없다.

// 상수로 선언한 포인터는 해당 변수의 값을 변경할 수 있지만,
// 다른 변수의 주소를 새로 저장할 수는 없습니다.
#pragma endregion

#pragma region 허상 포인터
// // 이미 해제된 메모리 영역을 가리키는 포인터입니다.
// 
// 	int * address = NULL;
// 	// 
// 	// *address = 99;
// 	// 역참조로 주소 값이 NULL인 것의 값을 바꾸려고 하면 nullptr 오류가 발생!
// 	
// 	{
// 		int room = 10;
// 
// 		address = &room;
// 
// 		printf("address가 가리키고 있는 값 : %d\n", *address);
// 	}
// 
// 	*address = 30;
// 
// 	printf("address가 가리키고 있는 값 : %d\n", *address);
// 
// 	// 이미 해제된 메모리를 참조하는 것은 위험하다고 한다. 따라서 허상 포인터는 조심해야 한다.
// 	// 이를 해결하기 위해서는 해제된 후에 NULL로 값을 다시 바꿔주는 게 좋다.
// 	// C++에는 스마트 포인터라는 걸로 이를 해결할 수 있다.
#pragma endregion
}