#include <stdio.h>
#include <math.h>
#include "../Program/audio.h"
// ���� ���� ���� ��� ������ ���� �ִ� ��� ���ϰ� �����ϱ� ���� <>(�ޱ� �����)�� �ƴ�, ""(�ֵ���ǥ)�� �����´�.

// ����ü�� �Լ� �ۿ� �����ؾ� �Ѵ�.
// object�� '��ü'��� ��.
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
#pragma region ����ü
    // ���� ���� ������ �ϳ��� �������� ����ȭ�� ����
    // �ϳ��� ��ü�� �����ϴ� ���Դϴ�.

    // struct Object object = { 'B', 10, 6.25f };
    // 
    // printf("object�� charater : %c\n", object.character);
    // printf("object�� integer : %d\n", object.integer);
    // printf("object�� decimal : %f\n\n", object.decimal);
    // 
    // // ����ü�� �� ����� ����ü ���𿡼� ��Ÿ���� ������� �ʱ�ȭ�˴ϴ�.
    // // �� ������ �ʱ�ȭ ����� ������ ���ʿ��� ���������� �����Ǵ� ����Դϴ�.
    // 
    // object.character = 'A';
    // object.integer = 100;
    // object.decimal = 36.5f;
    // 
    // printf("object�� charater : %c\n", object.character);
    // printf("object�� integer : %d\n", object.integer);
    // printf("object�� decimal : %f\n", object.decimal);

    // ����ü�� �����ϱ� ����, ����ü�� �޸� ������ �������� �����Ƿ�
    // ����ü ���ο� �ִ� �����͸� �ʱ�ȭ�� �� �����ϴ�.

#pragma endregion

#pragma region ��� ����
    // volume = 3.25f;
    // // ��� ���Ͽ����� ������ ���⼭ ��� ����.
    // 
    // Listener();
    // // ��� ���Ͽ����� �Լ��� ���⼭ ��� ����.
#pragma endregion

#pragma region [����] �����ڵ忡 ���� �˾ƺ���.
    // �����ڵ�(Unicode)
    // �� ���� ��� ���ڸ� ��ǻ�Ϳ��� ǥ���� �� �ֵ��� ���� ���� ǥ��

    // ������ ��� ���� ��ǻ�Ϳ����� �ƽ�Ű�ڵ�(ASCII)�� �������.
    // ���� ���, A�� 65, B�� 66 �̷� ������ ���� �ϳ��� ���� �ϳ��� ǥ����.

    // �׷��� �ѱ���, �Ϻ���, �߱���ó�� �پ��� ���ڰ� �ʿ��� ���� ASCII�� ǥ���� �� ����.
    // �׷��� ���󸶴� �ڱ⸸�� ���� �ڵ�(��: �ѱ��� EUC - KR, �Ϻ��� Shift - JIS)�� ������µ�,
    // ��ǻ�Ͱ� ���� �ٸ� �� ���ÿ� �ٷ� �� ���ڰ� �����ų� �浹�ϴ� ������ ����.

    // �̸� �ذ��ϱ� ���ؼ� ������ ���� �����ڵ�
    // �����ڵ�� �� ���� ��� ����(�ѱ�, ����, �̸��� �� ����)�� ������ ����(�ڵ� ����Ʈ)�� �����ؼ�
    // � ����, � �����, ��ǻ�Ϳ��� ���ϵǰ� ó���� �� �ְ� ����.

    // ��) 'A' - U+0041 (�����ڵ� 16����) | 65 (�����ڵ� ������)
    //     '��' - U+AC00 (�����ڵ� 16����) | 44032 (�����ڵ� ������)
    //     '??' - U+1F603 (�����ڵ� 16����) | 128515 (�����ڵ� ������)

    // U+�� �����ڵ��� ǥ��.
    // ���� ��� "��"��� ���ڴ� �����ڵ�� U + AC00. �ٸ� ���� ��ǻ�Ϳ����� "��"�� �νĵ�.

    // C������ ���� ó���� �� �����ڵ尡 �ʿ��� ��찡 �ְ�,
    // Ư�� �ٱ��� ���α׷��� ����ų� UTF-8 ���ڵ��� �ٷ� �� �˾Ƶθ� ����.

    // C������ �����ڵ� ���ڿ��� ��Ÿ�� �� wchar_t Ÿ�԰� ���λ� L�� �Բ� ��� ��.

    // #include <wchar.h>  // wide character �Լ���
    // 
    //     wchar_t greeting[] = L"�ȳ��ϼ���"; // L�� �����ڵ� ���ڿ��̶�� ��
    // 
    //     wprintf(L"%ls\n", greeting); // wide character ���. printf ��� ��� ��.

    // Visual Studio�� �⺻ ������ ANSI ���ڿ�(ASCII)�� ���� �־, �����ڵ带 ����Ϸ��� ������Ʈ ������ �ٲ���� ��.
    // Windows �ֿܼ��� �ѱ��̳� �����ڵ尡 ���� �� �ִµ�, �Ʒ� ������ �߰��ϸ� �ذ��

    // #include <windows.h>
    // 
    //     int main() {
    //         SetConsoleOutputCP(CP_UTF8); // �ܼ� ��� ���ڵ��� UTF-8�� ����
    //         // ���� printf�� �����ڵ�(UTF-8) ��� ����!
    //         printf("�ȳ��ϼ���\n");
    //         return 0;
    //     }
#pragma endregion

#pragma region ����Ʈ �е�
    // ��� ������ �޸𸮿��� CPU�� ���� ���� ���� ���� �� �ֵ��� �����Ϸ��� ���������� ��Ͽ� ���߾� ����Ʈ�� �е����ִ�
    // ����ȭ �۾��Դϴ�.

    // struct Stat stat;
    // 
    // printf("Stat ����ü�� ũ�� : %d byte\n", sizeof(stat));

    // ����ü�� ũ��� ����ü�� �����ϴ� ��� �߿���
    // ũ�Ⱑ ���� ū �ڷ����� ����� �ǵ��� �����մϴ�.

    // struct Vector3 vector3;
    // 
    // printf("Vector3 ����ü�� ũ�� : %d byte\n", sizeof(vector3));

    // ����ü ũ���� ���, ��� ������ ������ ���� �޸��� ũ�Ⱑ �ٸ��� ������ �� ������,
    // ����ü ũ�⸦ �����ϴ� ���´� �⺻ �ڷ������θ� �����˴ϴ�.

    // ������ ������ ��, �ڷ����� ũ�Ⱑ ū ������ �� �������� �������ִ� ����
    // �޸𸮸� �����ϴ� �� ������ �ȴ�.

    // �̿� �����ؼ� ��Ģ���� ���� �� �˾ƺ��� ������ ����ü alignment ��� �ļ� �� �˾ƺ���.
#pragma endregion

#pragma region �� �� ������ �Ÿ�

    // // ��Ʈ �Լ�
    // printf("%lf\n", sqrt(100));
    // 
    // // ���� �Լ�
    // printf("%lf\n", pow(10, 2));

#pragma endregion

#pragma region [����] 
    // ��Ÿ����� ������ �̿��Ͽ� ������ ���̸� ���ؼ�
    // �� ���̰� 5 �̻��̸� '��ȭ ����'
    // �� ���̰� 5 �����̸� '���� ����'

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
    //     // ��� ����
    // }
    // else
    // {
    //     printf("Attack State\n");
    //     // ���� ����
    // }
#pragma endregion

#pragma region �ڱ� ���� ����ü
    // �ڱ� �ڽŰ� ���� Ÿ���� �����͸� ����� �����ϰ� �ִ� ����ü�Դϴ�.

    struct Node node1;
    struct Node node2;
    struct Node node3;

    node1.data = 10;
    node1.next = &node2;

    node2.data = 20;
    node2.next = &node3;

    node3.data = 30;
    node3.next = NULL;
    // �������� �Ǻ��ϱ� ���� NULL ���� �־��ִ� ��.
    // �Ʒ����� �ݺ������� ��ȸ�� �� NULL���� �̿��� ���̴�.

    // ��ȸ�� ������
    // struct Node * currentNode = &node1;
    // printf("node1�� �ּ� : %p\n", currentNode);

    // while (currentNode != NULL)
    // {
    //     // printf("%d\n", (*currentNode).data);
    //     // ()��ȣ�� �־��� ���� : �켱������ �ֱ� ���ؼ�. ��ȣ�� ���� ������ currentNode.data�� �νĵȴٰ� �Ѵ�.
    //     // �Ʒ�ó�� '->'�� ���� �ڵ����� ����ȯ�� �ȴ�.
    //     printf("%d\n", currentNode->data);
    // 
    //     printf("�ּ� : %p\n\n", currentNode);
    //     
    //     currentNode = currentNode->next;
    // }

#pragma endregion

#pragma region [����] typedef �� ���� �˾ƺ���.
// type define�� ���ڷ�, ����� Ŭ���� ������ �� �ϳ�.
// C���� �ڷ����� ������ �ٿ��ִ� Ű����.
// ����ü(struct)�� �Բ� ���� �� �����ϰ� ����ϰ� ����ü�� �� �� ����.
// struct�� ������ �������ִ� ���̰�, typedef�� ������ �������ִ� ��.

// typedef�� ����ϸ� �ڷ����� �ѱ۷� �������� �� �ִٰ�...??

// ����
// typedef unsigned int MyType;    // �ڷ��� ������ ; typedef ��������_�ڷ��� �����ǵ�_�̸�
// MyType mytype;                  // �����ǵ� �ڷ��� ���

// �ڷ����� �������ϰ�, ������ �ڷ���ó�� ����ϸ� ��.

// typedef�� �ߺ��� ��. ��, �������� �ڷ����� �������� �� ����.

// [typedef�� �ڷ����� �ѱ۷� ���� ����غ���]

// �ڷ����� �ѱ۷� �������ϱ�
    typedef char ����;
    typedef int ����;
    typedef float �Ǽ�;
    typedef double ����;

    ���� a = 'a';
    ���� num = 5;
    �Ǽ� number = 10.0f;
    ���� numnumber = 15.05f;

    printf("a : %c\n", a);
    printf("num : %d\n", num);
    printf("number : %f\n", number);
    printf("numnumber : %lf\n", numnumber);

    //----------------------------------------------------------------------------------------------------

    // [����ü typedef]
    // �Ʒ��� ���� ����ü�� typedef ���� ����ϸ�, ������ ������ ������ struct Student��� ��� ��� ��.
    // struct Student {
    //     int id;
    //     char name[20];
    // };
    // 
    // int main() {
    //     struct Student s1;
    // }

    // typedef�� ����ü ��Ī(alias)�� �ִ� ���
    // typedef struct Student {
    //     int id;
    //     char name[20];
    // } Student;

    // �Ǵ� �Ʒ��� ���� �̸� ���� �� ���� ����.
    // typedef struct {
    //     int id;
    //     char name[20];
    // } Student;

    // ���⼭ Student�� ���� struct Student ��� ����� �� �ִ� ���ο� Ÿ�� �̸�.
    // ���� �Ʒ��� ���� �����ϰ� ����� �� ����.
    // Student s1;     // struct Student s1; �� ����

    // ����꿡 �ø� �� ������
    // (2025.5.8) ����Ʈ �е�

#pragma endregion


    return 0;
}