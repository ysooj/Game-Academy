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

#pragma region [과제] 네이밍 컨벤션에 대해 찾아보기
	// 강의에서는 마이크로소프트에서 지정해준 네이밍 컨벤션에 따라 쓸 것이다.
	// 카멜, 파스칼, 스네이크, 헝가리안 등
	// #define 뒤에는 대문자.
#pragma endregion

}