#include <stdio.h>

void Function()
{
	printf("Function");
}

int Add(int x, int y)
{
	return x + y;
}

int Minus(int x, int y)
{
	return x - y;
}

int Multiple(int x, int y)
{
	return x * y;
}

int Divide(int x, int y)
{
	return x / y;
}

void Swap(int a, int b)
{
	int temp = b;
	b = a;
	a = temp;

	//  �Լ��� ȣ���Ҷ� ������ ���� �μ��� �����ϰ� �Ǹ�
	// �Լ��� �Ű� ������ ������ ����� ���� ���޵Ǳ� ������
	// ������ ���� �ʽ��ϴ�.
}

void main()
{
#pragma region �Լ�
	// �ϳ��� Ư���� ������ �۾��� �����ϱ�
	// ���� ���������� ����� �ڵ��� �����Դϴ�.

	//Function();


	// �Լ��� ȣ��� �� �Լ��� ȣ��Ǵ� ���� ��������
	// �Ѿ�� �˴ϴ�.
#pragma region �Ű� ����
	// �Լ��� ���ǿ��� ���޹��� �μ��� �Լ� ���η� �����ϱ�
	// ���� ����ϴ� ���� �Դϴ�.

	//printf("Add�Լ��� ��� : %d\n", Add(10, 20));
	//printf("Minus�Լ��� ��� : %d\n", Minus(10, 20));


	//// �Ű� ������ �Լ� ���ο����� ������ �̷������, �Լ���
	//// ����Ǹ� �޸𸮿��� ������� Ư¡�� ������ �ֽ��ϴ�.
	//	printf("Multiple�Լ��� ��� : %d\n", Multiple(5.75f, 7.65f));
	//// �Լ��� ��� �ڷ����� ��ȯ�ϴ� ���� ���°� ��ġ���� ������
	// ���ϴ� ���� ���� �� �����ϴ�.
#pragma endregion

#pragma region �μ�
		// �Լ��� ȣ��ɶ�  �Ű������� ������ ���޵Ǵ� ���Դϴ�.

	// A(10) <-> B(20)

	//int temp, A = 10, B = 20;

	//temp = A;
	//A = B;
	//B = temp;

	//printf("������ �� : A = %d, B = %d\n", A, B);
	int a = 10, b = 40;
	
	Swap(a, b);

		// �μ��� ��� �Լ��� �ִ� �Ű������� ���� ���� ������ �� �ִ�
		// �μ��� ���� �����Ǹ�. ���� �����ϴ� �μ��� ���� ���޹޴�
		// �Ű������� �ڷ����� ���� ��ġ�ؾ� �մϴ�.

#pragma endregion


#pragma endregion

}