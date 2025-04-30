#include <stdio.h>

// std : standard (기본)
// stdio : standard input output (입출력)
// stdarg : standard argument (인수)

int stage = 1;

// static int score = 0;

void Information()
{
	const char* name = "Mellow Bunny Run";

	printf("stage : %d\n", stage);

	printf("name : %s\n", name);
}

void Increase()
{
	static int score = 0;

	score = score + 1;

	printf("score 변수의 값 : %d\n", score);
}

int main()
{
#pragma region 메모리 영역

#pragma region Code 영역
	// 프로그램을 실행하기 위해 필요한 코드가 저장되는 영역으로
	// 함수의 주소와 상수가 저장되는 메모리 영역입니다.
#pragma endregion

#pragma region Data 영역
	// 프로그램의 시작과 함께 메모리에 저장되며,
	// 프로그램이 종료될 때 메모리가 해제되고,
	// 초기화가 이루어진 전역 변수와 정적 변수가 저장되는 메모리 영역입니다.
#pragma endregion

#pragma region BSS 영역
	// 프로그램이 실행될 때 초기화가 이루어지지 않은 전역 변수와 정적 변수가 저장되는 메모리 영역입니다.
#pragma endregion

#pragma region Stack 영역
	// 프로그램이 자동으로 사용하는 임시 메모리 영역으로
	// 함수 호출 시 생성되는 지역 변수와 매개 변수가 저장되는 메모리 영역입니다.
#pragma endregion

#pragma region Heap 영역
	// 사용자가 직접 메모리 공간을 할당해주는 메모리 영역이며,
	// 사용하지 않는 경우, 사용자가 직접 메모리를 해제해야 되는 메모리 영역입니다.
#pragma endregion

#pragma endregion

#pragma region 변수의 종류

#pragma region 지역 변수
	// 함수 내부에서 선언된 변수로, 함수 내부에서만 접근할 수 있으며
	// 함수가 종료되었을 때 메모리에서 사라지는 특징을 가지고 있는 변수입니다.

	// 아래와 같이 코드블럭으로 구분하면, 같은 이름의 변수를 만들 수 있다.

	// int x = 10;
	// 
	// {
	// 	int x = 20;
	// 	printf("안에 있는 x 변수의 값 : %d\n", x);
	// }
	// 
	// printf("바깥에 있는 x 변수의 값 : %d\n", x);

	// 프로그램 범위 규칙 : 가장 가까이에 있는 변수를 쓴다.
	// 블레이스는 {} 인 듯. {}가 끝나면, 안에 있는 변수는 소멸되니까
	// 밖에 있는 prinf문은 x 값이 10으로 출력되는 것.
#pragma endregion

#pragma region 전역 변수
	// 함수 외부에서 선언된 변수로, 프로그램이 실행될 때 메모리에 올라가게 되며,
	// 프로그램이 종료되면 메모리에서 해제되는 변수입니다.

	// Information();
	// 
	// printf("전역 변수의 주소 : %p\n", &stage);
#pragma endregion

#pragma region 정적 변수
	// 지역 변수의 특성을 가지면서, 전역 변수의 특성을 가지고 있는 변수로
	// 단 한 번만 초기화가 이루어지며, 프로그램이 실행될 때 메모리에서 생성되고,
	// 프로그램이 종료되면 메모리에서 해제되는 변수입니다.

	// Increase();
	// Increase();
	// Increase();
	// score 변수는 지역 변수이기 때문에 함수가 종료되면 사라지므로
	// 1, 2, 3으로 증가한 값이 출력되는 것이 아니라 1만 3번 출력된다.

	// 이를 앞에 static을 붙여서 정적 변수로 만들어주면
	// 지역 변수처럼 다른 데서 그 변수를 함부로 쓰지 못하지만(데이터를 보호하는 것), 전역 변수처럼 데이터가 남아있으므로
	// 값이 점점 증가하여 1, 2, 3으로 출력되게 된다.
	// cf) 전역 변수는 아무 데서나 변수를 사용할 수 있다는 것.
#pragma endregion

#pragma endregion

#pragma region [과제] 프레임 워크에 대해 알아보자.
	// 라이브러리

	// <stdarg.h> 에 있는 함수들
	// va_list : 가변 인수 목록을 저장하는 포인터
	// va_start : 가변 인수 처리를 시작하기 위해 포인터를 초기화
	// va_arg : 현재 인수를 가져오고, 다음 인수로 이동하는 기능(매크로)
	// va_end : 가변 인수 처리를 종료하는 기능
#pragma endregion

	return 0;
}