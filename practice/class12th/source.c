#include <stdio.h>
#include <math.h>

struct player
{
    // ����ü ũ���� ��� �ɹ� ������ ������ ���� �޸��� ũ�Ⱑ �ٸ���
    // ������ �� �ֽ��ϴ�.
    char blood;     // 1 byte
    int health;     // 4 byte
    float attack;   // 4 byte
    double defense; // 8 byte

    // ����ü�� �����ϱ� ���� ����ü�� �޸� ������
    // �������� �����Ƿ�, ����ü ���ο� �ִ� �����͸�
    // �ʱ�ȭ�� �� �����ϴ�.
};

struct Character
{
    int x;
    int y;
};

struct Enemy
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

    //struct player player = { 'B', 75, 5.5f };

    //player.attack = 10.5f;
    //player.blood = 'A';
    //player.health = 100;

    //printf("player.attack�� �� : %f\n", player.attack);
    //printf("player.blood�� �� : %c\n", player.blood);
    //printf("player.health�� �� : %d\n", player.health);

#pragma region ����Ʈ �е�
    // �ɹ� ������ �޸𸮿��� cpu�� ���� �� �� ���� ���� ��
    // �ֵ��� , �����Ϸ��� ���������� ��Ͽ� ���߾� ����Ʈ��
    // �е����ִ� ����ȭ �۾��Դϴ�.

    //printf("player ����ü�� ũ�� : %d\n", sizeof(struct Plater));

    // ����ü�� ũ��� ����ü�� �����ϴ� �ɹ� �߿��� ũ�Ⱑ ���� ū
    // �ڷ����� ����� �ǵ��� �����մϴ�.
#pragma endregion

#pragma endregion

#pragma region �� �� ������ �Ÿ�

    //struct Character character = { 0,0 };
    //struct Enemy enemy = { 2, 2 };
    ////printf("Root 25 : %lf\n", sqrt(25));
    ////printf("pow 2�� 3�� : %lf\n", pow(2, 3));

    //double resultX = character.x - enemy.x;
    //double resultY = character.y - enemy.y;

    //double distance = sqrt(pow(resultX, 2) + pow(resultY, 2));

    //if (distance <= 5.0f)
    //{
    //    printf("���� �����Դϴ�.");
    //}
    //else
    //{
    //    printf("���� ������ �ƴմϴ�.");
    //}

#pragma endregion

#pragma region �ڱ� ���� ����ü

    //struct Node* currentNode = NULL;

    //struct Node node1 = { 10, NULL};
    //struct Node node2 = { 10, NULL };
    //struct Node node3 = { 10, NULL };

    //node1.next = &node2;

    //node2.next = &node3;

    //node3.next = NULL;

    //currentNode = &node1;

    //while (currentNode != NULL)
    //{
    //    PRINTF("currentNode.data = %d\n", currentNode->data);
    //    currentNode = currentNode->next;
    //}


    //printf("node1.data = %d\n", node1.data);
#pragma endregion

    return 0;
}
