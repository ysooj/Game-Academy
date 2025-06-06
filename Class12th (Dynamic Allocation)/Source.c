#include <stdio.h>
#include <stdlib.h>

int main()
{
#pragma region 동적 할당
    // 프로그램을 실행하는 중에 필요한 만큼 메모리를 할당하는 작업입니다.
    
    int* pointer = malloc(sizeof(int));
    printf("pointer : %p\n", pointer);
    
    * pointer = 10;
    printf("pointer 변수가 가리키는 값 : %d\n", pointer);
    
    // 동적 할당은 실행 시간에 가변적으로 메모리의 크기를 변경시킬 수 있으며,
    // 동적으로 메모리의 크기를 할당할 때, 바이트 단위로 지정합니다.
    
    free(pointer);
    
    // 동적으로 할당한 메모리는 힙 영역에 보관되어 있으므로,
    // 사용이 끝나면 직접 해제를 해주어야 합니다.
    
    pointer = malloc(sizeof(int) * 3);
    
    for (int i = 0; i < 3; i++)
    {
    
        * (pointer + i) = (i + 1) * 10;
        // 배열과 포인터는 상관관계이므로 위와 같이 역참조로 해도 되고, 아래와 같이 배열로 접근해도 된다.
        // pointer[i] = (i + 1) * 10;
    
        printf("pointer[%d] = %d\n", i, pointer[i]);
    }
    
    free(pointer);
    
    // [과제] 위의 코드 출력해오기
    
    // 메모리를 동적으로 할당한 상태에서 해제하지 않으면, 메모리 누수 현상이 일어나므로
    // 메모리 누수가 일어나게 되면 더 이상 메모리를 할당할 수 없습니다.

#pragma endregion

    return 0;
}