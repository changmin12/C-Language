#include <stdio.h>

void main()
{
#pragma region �迭
	// ���� �ڷ����� ������� �̷���� ���� �����Դϴ�.

	//int array[5];

	//// �迭�� ��� ù ��° ���Ҵ� 0���� �����մϴ�.

	//for (int i = 0; i < 5; i++)
	//{
	//	array[i] = (i + 1) * 100;

	//	printf("array[%d]�� �� : %d\n", i, array[i]);
	//}

	//// �迭�� ���ϴ� ���ҿ� ���ϴ� ���� ������ �� ������,
	//// �迭�� ũ��� �������� �Ǵ� �������� ������ �޸�
	//// ������ ������ �˴ϴ�.

	//int list[] = { 10,20,30,45};  

	//int size = sizeof(list) / sizeof(int);

	//printf("�迭�� ������ : %d\n", size);

	// �迭�� ũ��� ������ �� ������, �ʱ�ȭ ��Ͽ���
	// ������ ��ҿ� ���� �迭�� ũ�Ⱑ �����˴ϴ�.

	//int * ptr = NULL;

	//int intlist[ ] = { 1,2,3,4,5 };

	//ptr = intlist;

	//printf("ptr ������ �� : %p\n", ptr);

	//printf("intlist �迭�� ���� �ּ� : %p\n", intlist);

	//ptr = ptr + 1;

	//*ptr = 99;

	//printf("ptr ���� �� : %p\n", ptr);
	//printf("ptr ������ ����Ű�� �� : %d\n", ptr);
	//printf("intlist �迭[1]�� �ּ� : %p\n", &intlist[1]);

	// �迭�� �������� �޸� ������ ������, �迭�� �̸��� �迭��
	// ���� �ּҸ� �ǹ��մϴ�.
#pragma endregion

#pragma region ���ڿ�
	// �������� �޸� ������ ����� ����
	// ������ �����Դϴ�.

	//const char* string = "Computer";

	//// *string[0] = 'A'; (ERRPR)

	//// %s : ���ڿ��� ����ϴ� ���� ������
	//printf("string ������ �� : %s\n", string);

	//// ���ڿ��� ��� �����͸� �̿��Ͽ� ���ڿ� �����
	//// ����Ű���� �� �� ������, ���ڿ� ����� ������ ����
	//// �� �б� ���� ������ ����Ǳ� ������ ���ڿ���
	//// ���� ������ �� �����ϴ�.

	//string = "Hello";

	//printf("string ������ �� : %s\n", string);

	// ���ڿ��� ���鵵 �Բ� �޸� ������ �����Ͽ�
	// ũ�Ⱑ �����Ǹ�, �������� ���ڿ��� ���� �˷��ִ� 
	// ���� ���ڰ� �߰��˴ϴ�.

	//// [A][l][i][s][t][a][r][\0][][]
	//char name[10] = { "Alistar" };

	//printf("name ������ �� : %s\n", name);

	//name[4] = '\0';

	//// ���ڿ��� �����ϰ� �Ǹ� �� �������� ��ȿ��
	//// ���ڱ��� �޸� ������ ����˴ϴ�.
	//printf("name ������ �� : %s\n", name);

	// ���ڿ��� ��� ���� �������� �޸� ��������
	// ����Ǿ� ������, ���� �迭 ���̿� ��ȿ�� ���ڸ�
	// �ְ� �Ǹ� ��ȿ�� ���ڱ����� ���ڿ��� ����մϴ�.
#pragma endregion

#pragma region �ִ񰪰� �ּڰ�


	//int z[5] = {10,22,35,2,5};

	//int max = 0;

	//int arraysize = sizeof(z) / sizeof(int);

	//max = z[0];

	//for (int i = 0; i < arraysize; i++)
	//{
	//	if (max < z[i])
	//	{
	//		max = z[i];
	//	}
	//}
	//printf("z�� �ִ밪 : %d\n", max);
 

 int z[5] = { 10,22,35,2,5 };

 int min = 35;

 int arraysize = sizeof(z) / sizeof(int);

 min = z[0];

 for (int i = 0; i <  arraysize; i++)
 {
	if (min > z[i])
	 {
		min = z[i];
	 }
 }
printf("z�� �ּҰ� : %d\n", min);

//int a[] = { 55, 77, 2, 66, 99, 88, 5, 92, 33, 44 };
//int max, min, i;
//max = 0; // �ִ밪: ���� ������ ���� ���� ������ �ʱ�ȭ
//min = 100; // min=2147483649, �ּҰ�: ���� ������ ���� ū ������ �ʱ�ȭ
//
//for (i = 0; i < 10; i++)
//{
//	if (a[i] > max) max = a[i]; // �� ū���� �ִ밪���� �Ѵ�.
//	if (a[i] < min) min = a[i]; // �� ���� ���� �ּҰ����� �Ѵ�.
//}
//
//printf("�ִ밪: %d\n", max);
//printf("�ּҰ�: %d\n", min);
//
//return 0;



#pragma endregion

}