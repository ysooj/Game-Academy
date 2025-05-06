#include <stdio.h>
#include <stdlib.h>

int main()
{
#pragma region ���� �Ҵ�
    // ���α׷��� �����ϴ� �߿� �ʿ��� ��ŭ �޸𸮸� �Ҵ��ϴ� �۾��Դϴ�.
    
    int* pointer = malloc(sizeof(int));
    printf("pointer : %p\n", pointer);
    
    * pointer = 10;
    printf("pointer ������ ����Ű�� �� : %d\n", pointer);
    
    // ���� �Ҵ��� ���� �ð��� ���������� �޸��� ũ�⸦ �����ų �� ������,
    // �������� �޸��� ũ�⸦ �Ҵ��� ��, ����Ʈ ������ �����մϴ�.
    
    free(pointer);
    
    // �������� �Ҵ��� �޸𸮴� �� ������ �����Ǿ� �����Ƿ�,
    // ����� ������ ���� ������ ���־�� �մϴ�.
    
    pointer = malloc(sizeof(int) * 3);
    
    for (int i = 0; i < 3; i++)
    {
    
        * (pointer + i) = (i + 1) * 10;
        // �迭�� �����ʹ� ��������̹Ƿ� ���� ���� �������� �ص� �ǰ�, �Ʒ��� ���� �迭�� �����ص� �ȴ�.
        // pointer[i] = (i + 1) * 10;
    
        printf("pointer[%d] = %d\n", i, pointer[i]);
    }
    
    free(pointer);
    
    // [����] ���� �ڵ� ����ؿ���
    
    // �޸𸮸� �������� �Ҵ��� ���¿��� �������� ������, �޸� ���� ������ �Ͼ�Ƿ�
    // �޸� ������ �Ͼ�� �Ǹ� �� �̻� �޸𸮸� �Ҵ��� �� �����ϴ�.

#pragma endregion

    return 0;
}