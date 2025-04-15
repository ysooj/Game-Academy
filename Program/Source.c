#include <stdio.h>

void main()
{
#pragma region 오버플로우
	// 특정한 자료형이 표현할 수 있는 최댓값의 범위를 넘어서 연산을 수행하는 과정입니다.

	// char storage = 127 + 1;	// => 0111 1111
	// printf("storage의 값 : %d\n", storage);
	
	// 오버플로우는 부호 없는 자료형에서도 똑같이 발생하며,
	// 실수일 때 오버플로우가 발생하면 infinity라는 값으로 출력합니다.
#pragma endregion

#pragma region 언더플로우
	// 특정한 자료형이 표현할 수 있는 최솟값의 범위를 넘어서 연산을 수행하는 과정입니다.

	char data = -128 - 1;	// = 127
	// => 1000 0000 - 1111 1111 = 0111 1111
	// 1이 1111 1111인 이유는 -1이라고 생각하면 된다. -128 + (-1)인 것이다.
	printf("data 변수의 값 : %d\n", data);

	// 언더플로우는 부호 없는 자료형에서도 똑같이 발생하며,
	// 실수일 때 언더플로우가 발생하면 0이라는 값으로 출력합니다.
#pragma endregion

#pragma region 부호 없는 자료형
	
	unsigned char count = 256;	// => 최댓값인 255를 넘었기 때문에 0이 나온다. 오버플로우

	printf("count 변수의 값 : %d\n", count);

	unsigned int intcount = 4294967295;

	printf("signed intcount 변수의 값 : %d\n", intcount);

	printf("unsigned intcount 변수의 값 : %u\n", intcount);

	//unsigned로 사용하려면 출력할 때 %d가 아닌, %u로 사용해야 한다.
#pragma endregion

#pragma region 실수를 표현하는 방법
	
	float decimal = 7.25f;
	// 정수형 리터럴 상수는 저장하는 값의 범위가 크지 않으면 int 자료형으로 저장되며,
	// 실수형 리터럴 상수는 double 이라는 자료형으로 저장됩니다.
	// 마지막에 f를 적지 않으면 double 자료형으로 바뀌게 되므로,
	// float 자료형으로 하기 위해서, 또 자료형이 바뀌는 걸 막기 위해서는 f를 꼭 적어주자!

	printf("decimal 변수의 값 : %f\n", decimal);
	// .2f라고 적으면 소수점 이하 2자리 수까지, .5f라고 적으면 소수점 이하 5자리 수까지 출력된다.

	// 표준 출력 함수로 소수를 출력할 때
	// 4 byte 크기의 실수형 자료형은 소수점 이하 6자리까지만 표기하며,
	// 8 byte 크기의 실수형 자료형은 소수점 이하 15자리까지만 표기합니다.

	// 각각의 자리수를 넘어가게 되면 깨져서 나오게 되는데 그 이유는? (6자리, 15자리를 넘어가게 되면 깨진다.)
	// 아래에서 그 이유를 알아보자.
#pragma endregion

#pragma region 실수 형태의 (10)진수를 (2)진수로 변환하는 과정
	// 10진수 실수 부분을 1.0이 될 때까지 계속 2로 곱한 다음
	// 곱한 결과의 정수 부분을 위에서 아래로 순서대로 정렬합니다.
#pragma endregion

#pragma region 복합대입연산자
	// 연산과 할당을 합친 것

	int a = 10;

	printf("a += 10 의 값 : %d\n", a += 10);
	// a += 10 은 a = a + 10 과 같다. 따라서 20이 나오는 것.
	printf("a -= 10 의 값 : %d\n", a -= 10);
#pragma endregion



}