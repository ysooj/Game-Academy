#include <stdio.h>

void main()
{
#pragma region 변수
	// 데이터를 저장할 수 있는 메모리 공간을 생성하는 것입니다.

	// 변수 이름은 주로 '명사'로 지어준다. (함수 이름은 주로 '동사'로 지어준다.)
	// 동사 Attack
	// 명사 attack

#pragma region 자료형
	// 데이터를 저장하기 위해 데이터의 형태를 정해주는 것입니다.
	// 
	// 자료형은 각각의 자료형마다 크기가 정해져 있고, 자료형의 크기는 바이트 단위로 이루어져 있으며,
	// 자료형의 경우 자료형에 따라 저장할 수 있는 값의 종류와 범위가 결정됩니다.
#pragma endregion

#pragma region 대입 연산자
	// 변수에 값을 저장할 수 있는 연산자입니다.

	// 대입 연산자를 기준으로 왼쪽에 있는 변수는 식별자를 가지고 있기 때문에 다른 값을 복사 받을 수 있습니다.
#pragma endregion

#pragma region 변수의 이름 규칙
	// 1. 변수의 이름은 대소문자를 구분합니다.
	// ex) int health;
	// ex) int HEALTH;

	// 2. 변수의 이름으로 예약어를 사용할 수 없습니다.
	// 컴퓨터가 이미 사용하고 있는 언어
	// ex) int int;

	// 3. 변수의 이름에는 공백이 포함될 수 없습니다.
	// ex) int time Delta;

	// 4. 변수의 이름으로 특수 문자는 "_"와 "$"만 사용할 수 있습니다.
	// ex) int under_Score;
	// ex) int currentRoom$;
	// ex) int sweet!home; => 안 됨

	// 5. 변수의 이름은 숫자로 시작할 수 없습니다.
	// ex) int error2022;
	// ex) int 5error; => 안 됨
#pragma endregion

#pragma region 서식 지정자
	// 변수의 값을 출력하기 위한 자료형의 정보를 명시적으로 지정해주는 것입니다.

	// 서식 지정자의 경우 하나의 표준 출력 함수에 여러 개의 서식을 넣을 수 있으며,
	// 서식 지정자의 순서는 왼쪽에서부터 시작합니다.

	// 서식 지정자는 각각의 서식에 따라 원하는 데이터를 출력할 수 있으며,
	// 서식과 변수의 형태가 일치하지 않으면 원하는 값이 출력되지 않습니다.
#pragma endregion

	// char character = 'A';
	// 
	// int integer = 10;
	// 
	// float decimal = 5.5f;
	// float에 값을 넣을 때 접미사 f를 써주는 게 좋다. (나중에 더블? 이라는 것과 구분하기 위해)

	// printf("%c %d %f\n", character, integer, decimal);
	// printf("character : %c \ninteger : %d \ndecimal : %f \n", character, integer, decimal);
	// 
	// printf("\n");

	// 변수는 프로그램이 실행되는 동안 값을 바꿀 수 있으며,
	// 원래 저장되어 있는 값은 새로 저장되는 값에 의해 지워집니다.
	// character = 'B';
	// integer = 25;
	// decimal = 7.25f;

	// printf("character : %c\n", character);
	// printf("integer : %d\n", integer);
	// printf("decimal : %f\n", decimal);

	// 변수의 메모리 공간은 프로그램이 실행될 때마다 바뀌며,
	// 여러 개의 변수가 있을 때 서로 고유의 메모리 공간을 가지고 있습니다.
#pragma endregion

#pragma region 상수
	// 프로그램이 실행되는 동안 더 이상 변경할 수 없는 메모리 공간입니다.

	const float pi = 3.141592f;

	// 상수의 경우, 메모리 공간을 가지고 있지 않은 산수를 '리터럴 상수'라고 하며
	// 메모리 공간을 가지고 있는 상수를 '심볼릭 상수'라고 합니다.

	// ex) 위의 경우 'pi'는 '심볼릭 상수'이고, '3.141592f;'는 '리터럴 상수'에 해당한다.

	// ex) pi = 6.125f; => pi 값을 바꾸려고 하면 컴파일 에러가 난다.

	printf("상수의 값 : %f\n", pi);

	// 상수는 메모리 공간을 생성하는 동시에 초기화해야 하며,
	// 한 번 저장된 값은 더 이상 변경할 수 없습니다.
#pragma endregion
}

