#include <stdio.h>

void main()
{
#pragma region 산술 연산자
	// 1. 변수 = 변수 + 변수
	// 2. 변수 = 변수 - 리터럴 상수
	// 3. 변수 = 변수 * 심볼릭 상수
	// 4. 변수 = 리터럴 상수 / 리터럴 상수
	// 5. 변수 = 심볼릭 상수 % 리터럴 상수

	// * 내가 한 거 *
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

	// * 선생님 버전 *
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
	// // 심볼릭 상수
	// const int constant = 5;
	// 
	// // 1. 변수 = 변수 + 변수
	// storage1 = x + y;
	// // 2. 변수 = 변수 - 리터럴 상수
	// storage2 = z - 1;
	// // 3. 변수 = 변수 * 심볼릭 상수
	// storage3 = w * constant;
	// // 4. 변수 = 리터럴 상수 / 리터럴 상수
	// storage4 = 20 / 5;
	// // 5. 변수 = 심볼릭 상수 % 리터럴 상수
	// storage5 = constant % 5;
	// 
	// printf("storage1의 값 : %d\n", storage1);
	// printf("storage2의 값 : %d\n", storage2);
	// printf("storage3의 값 : %d\n", storage3);
	// printf("storage4의 값 : %d\n", storage4);
	// printf("storage5의 값 : %d\n", storage5);
#pragma endregion

#pragma region 비트
	// 데이터를 나타내는 최소의 단위이며, 0 또는 1의 조합으로 논리 계산을 하는 단위입니다.

#pragma region (10)진수를 (2)진수로 변환하는 과정
	// 10진수를 1이 될 때까지 계속 2로 나누어 준 다음
	// 나눈 위치의 나머지 값을 아래에서 위로 순서대로 정렬합니다.

	// 예) 10 => 10을 2로 나누면 => 몫 5, 나머지 0
	//			 5를 2로 나누면 => 몫 2, 나머지 1
	//			 2를 2로 나누면 => 몫 1, 나머지 0
	// 0000 1010(2) => 맨 밑부터 적어주면 되는데, 마지막 몫부터 순서대로 적으면 됨
	//					디스코드 그림을 참고하자.

	// ex) 23 -> 10111
#pragma endregion

#pragma region (2)진수를 (10)진수로 변환하는 과정
	// 1 byte에 2진수로 저장된 값을 2의 제곱으로 나타냅니다.

	// 각각의 비트에 1이 있다면
	// 1과 2의 제곱의 위치를 계산한 다음, 각각의 비트를 모두 더하여 10진수로 나타냅니다.
#pragma endregion

#pragma region 비트 연산자
	// 비트 단위로 논리 연산을 수행하기 위해 사용하는 연산자입니다.
#pragma region AND 연산자
	// 두 개의 피연산자가 모두 1이면 1을 반환하는 연산자입니다.
	// 둘 중에 하나라도 1이 아니거나, 둘 다 0일 경우에는 0을 반환함.

	char storage1 = 10;
	// 0000 1010
	char storage2 = 6;
	// 0000 0110

	printf("storage1 & storage2 : %d\n", storage1 & storage2);
#pragma endregion

#pragma region OR 연산자
	// 두 개의 피연산자 중에 하나라도 1이 있다면 1을 반환하는 연산자입니다.

	char storage3 = 8;
	// 0000 1000
	char storage4 = 12;
	// 0000 1100

	printf("storage3 | storage4 : %d\n", storage3 | storage4);
#pragma endregion

#pragma region XOR 연산자
	// 두 개의 피연산자가 서로 같으면 0을, 서로 다르면 1을 반환하는 연산자입니다.

	int storage5 = 6;	// 0000 0110
	int storage6 = 15;	// 0000 1111
	// ----------
	// 0000 1001

	printf("storage5 ^ storage6 : %d\n", storage5 ^ storage6);
#pragma endregion

#pragma region NOT 연산자
	// 하나의 비트를 반전시키는 연산자입니다. (반대로 뒤집는 거)

	char storage7 = 13;	// 0000 1101
	// ---------
	// 1111 0010
// => 이렇게 돼서 200보다 큰 수가 나와야 하는데, 아래처럼 출력해보면 -14가 나온다.
	printf("~storage7 : %d\n", ~storage7);	// => -14

	// 첫 번째 비트는 부호를 나타내며, 첫 번째 비트에 1이 있다면 값은 음수가 됩니다. (부호 비트)
	// 따라서 위의 계산은 -128 + 64 + 32 + 16 + 2 = -14
#pragma endregion

#pragma region 시프트 연산자
	// 비트를 특정한 위치로 정해진 수만큼 이동시키는 연산자입니다.
	// 왼쪽으로 이동시키고 싶을 때는 <<, 오른쪽으로 이동시키고 싶을 때는 >>를 쓰고,
	// 이동시키고 싶은 만큼의 숫자를 쓰면 됨.

	int data = 5;	// 0000 0101
	int shift = data << 2;

	printf("shift의 값 : %d\n", shift);

	shift = shift >> 1;	// 0000 1010 => 10

	printf("shift의 값 : %d\n", shift);
#pragma endregion

	// 메모리는 비트 단위로 데이터를 저장할 수 있으며,
	// 1개의 비트에는 0 또는 1의 값만 저장할 수 있습니다.

	// 1 Byte <= bit 가 8개 모이면
#pragma endregion

#pragma endregion

}