#include <stdio.h>
#include <math.h>
#include "../Program/audio.h"
// 내가 직접 만든 헤더 파일은 원래 있던 헤더 파일과 구분하기 위해 <>(앵글 브라켓)이 아닌, ""(쌍따옴표)로 가져온다.

// 구조체는 함수 밖에 선언해야 한다.
// object는 '객체'라는 뜻.
struct Object
{
    char character;
    int integer;
    float decimal;
};

struct Stat
{
    char grade;
    int health;
    float attack;
};

struct Vector3
{
    int x;
    int y;
    double z;
};

struct Point2D
{
    int x;
    int y;
};

struct Node
{
    int data;
    struct Node* next;
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
    // 유니코드(Unicode)
    // 전 세계 모든 문자를 컴퓨터에서 표현할 수 있도록 만든 국제 표준

    // 예전에 영어만 쓰는 컴퓨터에서는 아스키코드(ASCII)만 사용했음.
    // 예를 들어, A는 65, B는 66 이런 식으로 숫자 하나당 문자 하나를 표현함.

    // 그러나 한국어, 일본어, 중국어처럼 다양한 문자가 필요한 언어는 ASCII로 표현할 수 없음.
    // 그래서 나라마다 자기만의 문자 코드(예: 한국은 EUC - KR, 일본은 Shift - JIS)를 만들었는데,
    // 컴퓨터가 서로 다른 언어를 동시에 다룰 때 문자가 깨지거나 충돌하는 문제가 생김.

    // 이를 해결하기 위해서 등장한 것이 유니코드
    // 유니코드는 전 세계 모든 문자(한글, 한자, 이모지 등 포함)를 고유한 숫자(코드 포인트)로 지정해서
    // 어떤 언어든, 어떤 나라든, 컴퓨터에서 통일되게 처리할 수 있게 해줌.

    // 예) 'A' - U+0041 (유니코드 16진수) | 65 (유니코드 십진수)
    //     '가' - U+AC00 (유니코드 16진수) | 44032 (유니코드 십진수)
    //     '??' - U+1F603 (유니코드 16진수) | 128515 (유니코드 십진수)

    // U+는 유니코드라는 표시.
    // 예를 들어 "가"라는 글자는 유니코드로 U + AC00. 다른 나라 컴퓨터에서도 "가"로 인식됨.

    // C언어에서도 문자 처리할 때 유니코드가 필요한 경우가 있고,
    // 특히 다국어 프로그램을 만들거나 UTF-8 인코딩을 다룰 때 알아두면 좋음.

    // C에서는 유니코드 문자열을 나타낼 때 wchar_t 타입과 접두사 L을 함께 써야 함.

    // #include <wchar.h>  // wide character 함수들
    // 
    //     wchar_t greeting[] = L"안녕하세요"; // L이 유니코드 문자열이라는 뜻
    // 
    //     wprintf(L"%ls\n", greeting); // wide character 출력. printf 대신 써야 함.

    // Visual Studio는 기본 설정이 ANSI 문자열(ASCII)일 수도 있어서, 유니코드를 사용하려면 프로젝트 설정을 바꿔줘야 함.
    // Windows 콘솔에서 한글이나 유니코드가 깨질 수 있는데, 아래 설정을 추가하면 해결됨

    // #include <windows.h>
    // 
    //     int main() {
    //         SetConsoleOutputCP(CP_UTF8); // 콘솔 출력 인코딩을 UTF-8로 변경
    //         // 이제 printf도 유니코드(UTF-8) 출력 가능!
    //         printf("안녕하세요\n");
    //         return 0;
    //     }
#pragma endregion

#pragma region 바이트 패딩
    // 멤버 변수를 메모리에서 CPU로 읽을 때한 번에 읽을 수 있도록 컴파일러가 레지스터의 블록에 맞추어 바이트를 패딩해주는
    // 최적화 작업입니다.

    // struct Stat stat;
    // 
    // printf("Stat 구조체의 크기 : %d byte\n", sizeof(stat));

    // 구조체의 크기는 구조체를 구성하는 멤버 중에서
    // 크기가 가장 큰 자료형의 배수가 되도록 정렬합니다.

    // struct Vector3 vector3;
    // 
    // printf("Vector3 구조체의 크기 : %d byte\n", sizeof(vector3));

    // 구조체 크기의 경우, 멤버 변수의 순서에 따라 메모리의 크기가 다르게 설정될 수 있으며,
    // 구조체 크기를 결정하는 형태는 기본 자료형으로만 구성됩니다.

    // 변수를 선언할 때, 자료형의 크기가 큰 변수를 맨 마지막에 선언해주는 것이
    // 메모리를 절약하는 데 도움이 된다.

    // 이에 관련해서 규칙같은 것을 더 알아보고 싶으면 구조체 alignment 라고 쳐서 더 알아보자.
#pragma endregion

#pragma region 두 점 사이의 거리

    // // 루트 함수
    // printf("%lf\n", sqrt(100));
    // 
    // // 제곱 함수
    // printf("%lf\n", pow(10, 2));

#pragma endregion

#pragma region [과제] 
    // 피타고라스의 정리를 이용하여 빗변의 길이를 구해서
    // 그 길이가 5 이상이면 '평화 상태'
    // 그 길이가 5 이하이면 '전투 상태'

    // struct Point2D rogue = { 0, 0 };
    // struct Point2D slime = { 5, 5 };
    // 
    // double x = rogue.x - slime.x;
    // double y = rogue.y - slime.y;
    // 
    // double distance = sqrt(pow(x, 2) + pow(y, 2));
    // 
    // if (distance >= 5.0f)
    // {
    //     printf("Idle State\n");
    //     // 대기 상태
    // }
    // else
    // {
    //     printf("Attack State\n");
    //     // 전투 상태
    // }
#pragma endregion

#pragma region 자기 참조 구조체
    // 자기 자신과 같은 타입의 포인터를 멤버로 포함하고 있는 구조체입니다.

    struct Node node1;
    struct Node node2;
    struct Node node3;

    node1.data = 10;
    node1.next = &node2;

    node2.data = 20;
    node2.next = &node3;

    node3.data = 30;
    node3.next = NULL;
    // 끝났는지 판별하기 위해 NULL 값을 넣어주는 것.
    // 아래에서 반복문으로 순회할 때 NULL값을 이용할 것이다.

    // 순회용 포인터
    // struct Node * currentNode = &node1;
    // printf("node1의 주소 : %p\n", currentNode);

    // while (currentNode != NULL)
    // {
    //     // printf("%d\n", (*currentNode).data);
    //     // ()괄호를 넣어준 이유 : 우선순위를 주기 위해서. 괄호를 넣지 않으면 currentNode.data로 인식된다고 한다.
    //     // 아래처럼 '->'를 쓰면 자동으로 형변환이 된다.
    //     printf("%d\n", currentNode->data);
    // 
    //     printf("주소 : %p\n\n", currentNode);
    //     
    //     currentNode = currentNode->next;
    // }

#pragma endregion

#pragma region [과제] typedef 에 대해 알아보기.
// type define의 약자로, 저장소 클래스 지정자 중 하나.
// C언어에서 자료형에 별명을 붙여주는 키워드.
// 구조체(struct)와 함께 쓰면 더 간단하고 깔끔하게 구조체를 쓸 수 있음.
// struct는 형식을 지정해주는 것이고, typedef는 형식을 정의해주는 것.

// typedef를 사용하면 자료형을 한글로 재정의할 수 있다고...??

// 사용법
// typedef unsigned int MyType;    // 자료형 재정의 ; typedef 재정의할_자료형 재정의된_이름
// MyType mytype;                  // 재정의된 자료형 사용

// 자료형을 재정의하고, 기존의 자료형처럼 사용하면 됨.

// typedef는 중복이 됨. 즉, 재정의한 자료형을 재정의할 수 있음.

// [typedef로 자료형을 한글로 만들어서 사용해보기]

// 자료형을 한글로 재정의하기
    typedef char 문자;
    typedef int 정수;
    typedef float 실수;
    typedef double 더블;

    문자 a = 'a';
    정수 num = 5;
    실수 number = 10.0f;
    더블 numnumber = 15.05f;

    printf("a : %c\n", a);
    printf("num : %d\n", num);
    printf("number : %f\n", number);
    printf("numnumber : %lf\n", numnumber);

    //----------------------------------------------------------------------------------------------------

    // [구조체 typedef]
    // 아래와 같이 구조체를 typedef 없이 사용하면, 변수를 선언할 때마다 struct Student라고 길게 써야 함.
    // struct Student {
    //     int id;
    //     char name[20];
    // };
    // 
    // int main() {
    //     struct Student s1;
    // }

    // typedef로 구조체 별칭(alias)을 주는 방법
    // typedef struct Student {
    //     int id;
    //     char name[20];
    // } Student;

    // 또는 아래와 같이 이름 없이 쓸 수도 있음.
    // typedef struct {
    //     int id;
    //     char name[20];
    // } Student;

    // 여기서 Student는 이제 struct Student 대신 사용할 수 있는 새로운 타입 이름.
    // 따라서 아래와 같이 간단하게 사용할 수 있음.
    // Student s1;     // struct Student s1; 과 같음

    // 깃허브에 올릴 때 제목은
    // (2025.5.8) 바이트 패딩

#pragma endregion


    return 0;
}