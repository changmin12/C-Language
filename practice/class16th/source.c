#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
# define BUFFER_SIZE 1000

int main()
{
#pragma region ���� ����

    // data.txt ������ �����ϰ� w(����) ���� �����մϴ�.
    //FILE* file = fopen("data.txt", "w");

    //fputs("level 10 1000", file);

    //// ������ �ݾ��ݴϴ�.
    //fclose(file); 




#pragma endregion

#pragma region ���� �̾��
     // data.txt ������ �����ϰ� a(�̾��) ���� �����մϴ�.
     //FILE* file = fopen("data.txt", "a");

     //fputs("\nHP 100", file);

     //// ������ �ݾ��ݴϴ�.
     //fclose(file); 
#pragma endregion

#pragma region ���� �б�
   // data.txt ������ �����ְ�  r(�б�) ���� �����մϴ�.
    FILE* file = fopen("data.txt", "r");

    char buffer[BUFFER_SIZE] = { 0, };

    fread(buffer, 1, BUFFER_SIZE, file); // ��ü ������ �о��ִ� �Լ�

    printf("%s", buffer);

    fclose(file);

#pragma endregion



    return 0;
}
