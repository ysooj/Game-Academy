#include <stdio.h>
#include <stdarg.h>

// std : standard (기본)
// stdio : standard input output (입출력)
// stdarg : standard argument (인수)

void Process()
{
	printf("Process...\n");
	printf("----------\n");
}

int Damage()
{
	return 10;
}

char Character()
{
	return 36.5f;
}

void Position(int x, int y)
{
	printf("x의 값 : %d\n", x);
	printf("y의 값 : %d\n", y);
}

void Color(char red, int green, float blue)
{
	printf("red의 값 : %c\n", red);
	printf("green의 값 : %d\n", green);
	printf("blue의 값 : %f\n", blue);
}

void Swap(int* left, int* right)
{
	int temporary = *left;

	*left = *right;
	*right = temporary;

	// printf("left의 값 : %d\n", left);
	// printf("right의 값 : %d\n", right);

	printf("left의 주소 : %p\n", left);
	printf("right의 주소 : %p\n\n", right);
}

void Recursion(int count)
{
	if (count <= 0)
	{
		return;
	}

	Recursion(count - 1);

	printf("Recursion\n");
	printf("count의 값 : %d\n", count);
}

inline void Calculator()
{
	printf("Calculator...\n");
}

void Average(int count, ...)
{
	// va_list : 가변 인수의 메모리 주소를 저장하는 포인터 변수입니다.
	va_list pointer;

	// va_start : 가변 인수를 가져올 수 있도록 포인터를 설정하는 함수입니다.
	va_start(pointer, count);

	int sum = 0;

	// va_arg : 가변 인수 포인터에서 특정 자료형의 크기만큼 값을 가져오는 함수입니다.
	for (int i = 0; i < count; i++)
	{
		sum += va_arg(pointer, int);
	}

	double average = (double)sum / count;

	printf("average : %1f\n", average);

	// va_end : 가변 인수가 끝났을 때 포인터를 NULL로 초기화하는 함수입니다.
	va_end(pointer);
}

int Add(int x, int y)
{
	return x + y;
}

int Subtract(int x, int y)
{
	return x - y;
}

int Multiply(int x, int y)
{
	return x * y;
}

int Devide(int x, int y)
{
	return x / y;
}

void Provide()
{
	printf("Provide\n");
}

int main()
{
#pragma region [과제]삼항 연산자
	// 간단한 예제도 만들어보자.

	// 삼항 연산자는 변수나 조건식이 참이냐 거짓이냐에 따라 다른 값을 사용할 수 있게 한다.
	// if문보다 간단하게 쓸 수 있다.

	// int hunger = 9;
	// const char* state = hunger <= 100 && hunger >= 90 ? "매우 배고픈"
	// 	: hunger < 90 && hunger >= 50 ? "배고픈"
	// 	: hunger < 50 && hunger > 10 ? "배부른"
	// 	: "매우 배부른";
	// printf("지금 나는 %s 상태입니다.\n", state);

	// 변수/조건식 ? 값1 : 값2;
	// 참/거짓을 판단할 변수나 조건식 ? 참일 때 사용할 값 : 거짓일 때 사용할 값;

	// [if문으로 쓴다면 아래와 같이 코드가 길어진다.]
	// int hunger = 20;
	// 
	// if (hunger <= 100 && hunger >= 90)
	// {
	//     printf("매우 배가 고픈 상태입니다.");
	// }
	// else if (hunger < 90 && hunger >= 50)
	// {
	//     printf("배가 고픈 상태입니다.");
	// }
	// else if (hunger < 50 && hunger > 10)
	// {
	//     printf("배가 부른 상태입니다.");
	// }
	// else
	// {
	//     printf("매우 배가 부른 상태입니다.");
	// }
#pragma endregion

#pragma region 함수
	// 하나의 특별한 목적의 작업을 수행하기 위해
	// 독립적으로 설계된 코드의 집합입니다.

	// Process();
	// Process();
#pragma endregion

#pragma region 반환형
	// 함수가 실행을 끝내고 돌려주는 결과의 자료형입니다.

	// return은 값을 반환하기도 하면서 함수를 종료시키기도 한다.

	// printf("Damage 함수의 값 : %d\n", Damage());
	// printf("Character 함수의 값 : %c\n", Character());

	// 함수의 경우, 자료형과 반환하는 값의 형태가 일치하지 않으면
	// 원하는 값을 얻을 수 없습니다.
#pragma endregion

#pragma region 매개 변수
	// 함수의 정의에서 전달받은 인수를 함수 내부로 전달하기 위해 사용하는 변수입니다.

	// int x = 10;
	// int y = 20;
	// 
	// Position(x, y);

	// 매개 변수는 함수 내부에서만 연산이 이루어지며,
	// 함수가 종료되면 메모리에서 해제됩니다.

	// Color('A', 1, 0.5f);

	// 하나의 함수에 서로 다른 자료형의 매개 변수를 함께 정의할 수 있으며,
	// 여러 개의 매개 변수를 생성할 수 있습니다.

	// 매개 변수는 main 함수 밖에서 만든 함수를 main 함수 안에서 호출할 때 함수 안에 적는 값을 의미한다.
	// 예 : Color('A', 1, 0.5f); 에서의 'A', 1, 0.5f
#pragma endregion

#pragma region 인수
	// 함수가 호출될 때, 매개 변수에 실제로 전달되는 값입니다.

	// int first = 10;
	// int second = 20;
	// 
	// int temporary = first;
	// 
	// first = second;
	// second = temporary;
	// 
	// printf("first의 값 : %d\n", first);
	// printf("second의 값 : %d\n", second);

	// 인수의 경우, 함수에 있는 매개 변수의 수에 따라 전달할 수 있는 인수의 수가 결정되며,
	// 값을 전달하는 인수와 값을 전달받는 매개 변수의 자료형이 서로 일치해야 합니다.

	// int first = 10;
	// int second = 20;
	// 
	// Swap(& first, & second);
	// 
	// printf("바깥의 first의 값 : %d\n", first);
	// printf("바깥의 second의 값 : %d\n", second);

	// printf("first의 주소 : %p\n", &first);
	// printf("second의 주소 : %p\n\n", &second);
#pragma endregion

#pragma region [과제] Call By Value, Call By Reference(참조에 의한 전달)에 대해 알아보기
	// Call by Value (값에 의한 전달)

// 함수를 호출할 때 변수에 저장된 값을 복사해서 함수에 전달하는 방식
// 원래 변수와 다른 공간에 복사본이 만들어져 전달됨
// 함수 안에서 값을 바꿔도 원래 변수는 변하지 않음


	// Call by Reference (참조에 의한 전달)

// 변수를 함수에 전달할 때 변수의 주소(메모리 위치)를 전달하는 방식
// 함수 안에서 원래 변수에 접근할 수 있음
// 함수 안에서 값을 바꾸면 원래 변수도 함께 바뀜
#pragma endregion	

#pragma region 재귀 함수
	// 어떤 함수에서 자신을 다시 호출하여 작업을 수행하는 함수입니다.

	// 재귀 함수는 함수를 계속 호출하기 때문에 스택 영역에 메모리가 계속 쌓이게 되므로
	// 스택 오버플로우가 일어납니다.

// Recursion(5);

	// 함수의 흐름은 아래와 같다.
	// main() 호출 -> Recursion(5) -> Recursion(4) -> Recursion(3) -> Recursion(2) -> Recursion(1)
	// -> Recursion(0) → return -> count = 1 → print -> count = 2 → print -> count = 3 → print
	// -> count = 4 → print -> count = 5 → print
#pragma endregion

#pragma region 인라인 함수
	// 함수를 호출하는 대신, 함수가 호출되는 위치마다
	// 함수의 코드를 복사하여 전달하는 방식의 함수입니다.

	// 인라인 함수는 함수를 호출하는 과정이 없으므로 처리 속도가 빠르지만
	// 인라인 함수를 많이 사용하게 되면, 함수의 코드가 복사되기 때문에
	// 실행 파일의 크기가 커지게 됩니다.

	// Calculator();

	// 인라인 함수는 컴파일 시점에 확장되며, 컴파일 시 인라인 함수로 선언하더라도
	// 상황에 따라 일반 함수로 변환되기도 합니다.
#pragma endregion

#pragma region [과제] 오버 헤드에 대해 알아보기
	// 프로그램의 실행흐름에서 나타나는 현상중 하나로,
	// 프로그램이 어떤 작업을 수행하기 위해 추가적으로 시간(실행 시간), 메모리(공간), 또는 CPU 처리 능력 등이 소모되는 현상

	// 특정 기능을 수행하는데 드는 간접적인 시간, 메모리 등의 자원

	// 오버헤드는 일반적으로 시스템의 성능을 저하시키는 요소 중 하나이기 때문에,
	// 프로그래밍과 시스템 설계 시에는 가능한 작업을 효율적으로 수행하도록 최적화하는 것이 중요하다.

	// 빈번한 함수 호출은 오버헤드를 만드는데,
	// 오버헤드를 줄이기 위해서 매크로함수와 인라인함수를 사용하여 최적화할 수 있다.

	// [오버헤드가 발생하는 상황]
	// 
	// - 시스템 호출
	//   운영체제로부터 서비스를 받기 위해 프로세스가 시스템 호출 요청할 때 오버헤드가 발생한다.
	//   (시스템 호출이란 프로세스 간의 커뮤니케이션, 파일 입출력, 메모리 관리 등을 포함)
	// 
	// - 자원 할당, 해제
	//   새로운 프로세스나 스레드를 생성하거나 종료할 때 시스템은 이들에게 메모리, 자원, 스케줄링 등을 할당 또는 해제해야하는데
	//   이러한 작업들은 오버헤드를 초래할 수 있다.
	// 
	// - 컨텍스트 스위칭(Context Switching)
	//    : 멀티태스킹 환경에서 여러 프로세스나 스레드가 실행되는데, 실행 중인 작업을 일시 중지하고 다른 작업으로 전환하는 것을 말함
	//   컨텍스트 스위칭은 프로세스나 스레드 간의 상태 정보를 저장하고 복구하는 과정을 포함하며, 이는 오버헤드를 발생시킨다.
	// 
	// - 자원 공유와 동기화
	//   여러 프로세스나 스레드가 공유 자원에 접근하는 경우, 이들 사이의 동기화를 위해 락(lock)을 사용하는데,
	//   락을 획득하고 해제하는 과정에서 오버헤드가 발생할 수 있다.
	//   (동기화를 위한 기법들은 오버헤드를 줄이기 위해 최적화되어야 한다고 한다.)
	// 
	// - 프로토콜 및 알고리즘 오버헤드
	//   통신 프로토콜이나 암호화 알고리즘 등을 사용하는 경우, 추가적인 계산과 데이터 처리가 필요한데 이 경우에 오버헤드가 발생할 수 있다.

#pragma endregion

#pragma region 가변 인수 목록
	// 고정되어 있는 매개 변수 외에 개수가 정해지지 않은 인수를 추가로 받을 수 있는 인수입니다.

	// ex) printf();

	// Average(3, 10, 20, 30);
	// Average(5, 10, 20, 30, 40, 50);
#pragma endregion

#pragma region 함수 포인터
	// 함수의 주소 값을 저장하고 가리킬 수 있는
	// 포인터 변수입니다.

	// 함수 포인터는 함수의 반환형과 매개 변수의 타입이 일치해야 하며,
	// 함수 포인터를 사용하여 동적으로 메모리를 할당할 수 없습니다.

	void (*functionPointer)();
	// 이게 함수 포인터 선언.

	functionPointer = Provide;

	functionPointer();
#pragma endregion

#pragma region 과제
	// Add, Substract, Multiply, Devide 각가 주소 호출하기

	void (*operator)();

	operator = Add;
	printf("Add의 주소 : %p\n", operator);

	operator = Subtract;
	printf("Subtract의 주소 : %p\n", operator);

	operator = Multiply;
	printf("Multiply의 주소 : %p\n", operator);

	operator = Devide;
	printf("Devide의 주소 : %p\n", operator);

	// 함수 포인터를 호출해서 사용하는 게 과제!
#pragma endregion



	return 0;
}