#include <stdio.h>

void main()
{
#pragma region 배열
	// 같은 자료형의 변수들로 이루어진 유한 집합입니다.

	// int list[5];
	// 
	// // 배열의 경우, 첫 번째 원소는 0부터 시작합니다.
	// 
	// for (int i = 0; i < 5; i++)
	// {
	// 	list[i] = 10 * (i + 1);
	// }
	// 
	// for (int i = 0; i < 5; i++)
	// {
	// 	printf("list[%d] : %d\n", i, list[i]);
	// }

	// 배열의 메모리 공간은
	// 프로그램이 실행되는 동안 변경할 수 없습니다.

	// int array[ ] = { 1, 2, 3, 4, 5 };
	// 
	// int size = sizeof(array) / sizeof(int);
	// 
	// int * pointer = &array;
	// // &(앤퍼센트)를 넣어도 되고 안 넣어도 됨
	// 
	// for (int i = 0; i < size; i++)
	// {
	// 	printf("array[%d]의 값 : %d\n", i, array[i]);
	// }
	// 
	// // 배열의 크기는 생략할 수 있으며,
	// // 초기화 목록에서 설정한 요소에 따라 배열의 크기가 결정됩니다.
	// // 초기화 목록을 통해 컴파일러가 알아서 배열의 크기를 알 수 있다.
	// 
	// printf("배열의 시작 주소 : %p\n\n", array);
	// 
	// printf("원래 array[1]의 값 : %d\n", array[1]);
	// 
	// pointer = pointer + 1;
	// 
	// * pointer = 22;
	// 
	// printf("포인터로 수정한 array[1]의 값 : %d\n", array[1]);
	// printf("pointer 변수의 값 : %p\n", pointer);

	// 배열은 연속적인 메모리 공간을 가지며,
	// 배열의 이름은 배열의 시작 주소를 가리킵니다.
#pragma endregion

#pragma region 문자열
	// 연속적인 메모리 공간에 저장된 문자 변수의 집합입니다.

	// 문자열의 경우, 포인터를 이용하여 문자열 상수를 가리키도록 할 수 있으며,
	// 문자열 상수는 데이터 영역의 읽기 전용 공간에 저장되기 때문에
	// 문자열의 값을 변경할 수 없습니다.	

	// const char * character = "Game";
	// 
	// char word [ ] = { 'S', 'l', 'e', 'e', 'p', '\0'};
	// 
	// char message [ ] = "Sleep\0";
	// 
	// message[0] = 'C';
	// 
	// printf("message의 값 : %s\n", message);
	// 
	// printf("word[0] : %c\n", word[0]);
	// printf("word의 값 : %s\n", word);
	// 
	// // %s로 읽기 때문에 \0이 있어야 문자열의 끝을 안다. 따라서 \0을 적어주어야 한다.
	// 
	// // character[0] = 'C';
	// // const(상수)로 만들어서 애초에 수정할 수 없게 만들어 주어야 한다.
	// 
	// printf("Game의 시작 주소 값 : %p\n", character);
	// 
	// printf("character가 가리키는 문자열 : %s\n", character);
	// 
	// character = "Exercise";
	// printf("character가 가리키는 문자열 : %s\n", character);
	// // 출력할 때는 %s를 써주면 된다.
	// 
	// // 문자열은 공백도 함께 메모리 공간에 포함하여 크기가 결정되며,
	// // 마지막에 문자열의 끝을 알려주는 제어 문자가 추가됩니다.
	// 
	// character = "Show\0er";
	// printf("character가 가리키는 문자열 : %s\n", character);

	// 문자열의 경우, 서로 연속적인 메모리 공간으로 연결되어 있지만
	// 문자 배열 사이에 무효의 문자를 넣게 되면, 무효의 문자까지만 문자열을 출력합니다.
#pragma endregion

#pragma region (2)차원 배열
	// 배열의 요소로 또 다른 배열을 가지는 배열입니다.

// int array2D[3][3] = {
// 	{1, 2, 3},
// 	{4, 5, 6},
// 	{7, 8, 9}
// };
// 
// for (int i = 0; i < 3; i++)
// {
// 	for (int j = 0; j < 3; j++)
// 	{
// 		printf("%d", array2D[i][j]);
// 	}
// 	printf("\n");
// }

// 2차원 배열은 행과 열로 구분되며,
// 앞에 있는 배열은 열을 의미하고, 뒤에 있는 배열은 행을 의미합니다.
#pragma endregion
}