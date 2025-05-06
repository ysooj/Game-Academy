#include <stdio.h>
#include "audio.h"
// 내가 직접 만든 헤더 파일은 원래 있던 헤더 파일과 구분하기 위해 <>(앵글 브라켓)이 아닌, ""(쌍따옴표)로 가져온다.

// 구조체는 함수 밖에 선언해야 한다.
// object는 '객체'라는 뜻.
struct Object
{
	char character;
	int integer;
	float decimal;
};

int main()
{
#pragma region 구조체
	// 여러 개의 변수를 하나의 집합으로 구조화한 다음
	// 하나의 객체를 생성하는 것입니다.

	// struct Object object = { 'B', 10, 6.25f };
	// 
	// printf("object의 charater : %c\n", object.character);
	// printf("object의 integer : %d\n", object.integer);
	// printf("object의 decimal : %f\n\n", object.decimal);
	// 
	// // 구조체의 각 멤버는 구조체 선언에서 나타나는 순서대로 초기화됩니다.
	// // 이 순서는 초기화 목록의 값들이 왼쪽에서 오른쪽으로 대응되는 방식입니다.
	// 
	// object.character = 'A';
	// object.integer = 100;
	// object.decimal = 36.5f;
	// 
	// printf("object의 charater : %c\n", object.character);
	// printf("object의 integer : %d\n", object.integer);
	// printf("object의 decimal : %f\n", object.decimal);

	// 구조체를 선언하기 전에, 구조체는 메모리 공간이 생성되지 않으므로
	// 구조체 내부에 있는 데이터를 초기화할 수 없습니다.
    
#pragma endregion

#pragma region 헤더 파일
	// volume = 3.25f;
	// // 헤더 파일에서의 변수를 여기서 사용 가능.
	// 
	// Listener();
	// // 헤더 파일에서의 함수를 여기서 사용 가능.
#pragma endregion

#pragma region [과제] 유니코드에 대해 알아보자.
	// 아스키코드에 대해서는 배웠었다.
#pragma endregion

	return 0;
}