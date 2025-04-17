#include <stdio.h>

void main()
{
#pragma region 반복문
	// 프로그램 내에서 특정한 작업을 반복적으로 수행하는 명령문입니다.

#pragma region 증감연산자
	// 피연산자를 하나씩 증가시키거나 감소시킬 때 사용하는 연산자입니다.

	//	[전위 증감 예시]
	//	int code = 0;
	//	int packet = ++code;
	//	// ++은 값을 1 씩 증가시킨다.
	//	
	//	printf("packet 변수의 값 : %d\n", packet);
	//	printf("code 변수를 전위 증가한 값 : %d\n", code);
	//	
	//	packet = --code;
	//	
	//	printf("packet 변수의 값 : %d\n", packet);
	//	printf("code 변수를 전위 감소한 값 : %d\n", code);

	// 전위 증감 연산자는 변수의 값을 증감시킨 후에 연산을 수행합니다.
	// 즉 값을 증감시킨 후, 변수에 값을 저장합니다.
	
	// 후위 증감 연산자는 연산을 수행한 다음 변수의 값을 증감시킵니다.
	// 즉 변수에 값을 전달하고, 변수의 값을 증감합니다.

	//	[후위 증감 예시]
	//	int data = 0;
	//	
	//	int storage = data++;
	//	
	//	printf("storage 변수의 값 : %d\n", storage);
	//	printf("data 변수를 후위 증가한 값 : %d\n", data);
	//	
	//	storage = data--;
	//	
	//	printf("storage 변수의 값 : %d\n", storage);
	//	printf("data 변수를 후위 감소한 값 : %d\n", data);
#pragma endregion

#pragma region for문
	// 초기식을 연산하여 조건식의 결과에 따라 특정한 횟수만큼 반복하는 반복문입니다.

	// for (int i = 0; i < 5; i++)
	// {
	// 	printf("Update\n");
	// }
#pragma endregion


#pragma endregion

}