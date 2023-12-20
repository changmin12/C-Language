#include <stdio.h>

void main()
{
#pragma region 배열
	// 같은 자료형의 변수들로 이루어진 유한 집합입니다.

	//int array[5];

	//// 배열의 경우 첫 번째 원소는 0부터 시작합니다.

	//for (int i = 0; i < 5; i++)
	//{
	//	array[i] = (i + 1) * 100;

	//	printf("array[%d]의 값 : %d\n", i, array[i]);
	//}

	//// 배열른 원하는 원소에 원하는 값을 저장할 수 있으며,
	//// 배열의 크기는 컴파일이 되는 시점부터 고정된 메모리
	//// 공간을 가지게 됩니다.

	//int list[] = { 10,20,30,45};  

	//int size = sizeof(list) / sizeof(int);

	//printf("배열의 사이즈 : %d\n", size);

	// 배열의 크기는 생략할 수 있으며, 초기화 목록에서
	// 설정한 요소에 따라 배열의 크기가 결정됩니다.

	//int * ptr = NULL;

	//int intlist[ ] = { 1,2,3,4,5 };

	//ptr = intlist;

	//printf("ptr 변수의 값 : %p\n", ptr);

	//printf("intlist 배열의 시작 주소 : %p\n", intlist);

	//ptr = ptr + 1;

	//*ptr = 99;

	//printf("ptr 변수 값 : %p\n", ptr);
	//printf("ptr 변수가 가리키는 값 : %d\n", ptr);
	//printf("intlist 배열[1]의 주소 : %p\n", &intlist[1]);

	// 배열은 연속적인 메모리 공간을 가지며, 배열의 이름은 배열의
	// 시작 주소를 의미합니다.
#pragma endregion

#pragma region 문자열
	// 연속적인 메모리 공간에 저장된 문자
	// 변수의 집합입니다.

	//const char* string = "Computer";

	//// *string[0] = 'A'; (ERRPR)

	//// %s : 문자열을 출력하는 서식 지정자
	//printf("string 변수의 값 : %s\n", string);

	//// 문자열의 경우 포인터를 이용하여 문자열 상수를
	//// 가리키도록 할 수 있으며, 문자열 상수는 데이터 영역
	//// 의 읽기 전용 공간에 저장되기 때문에 문자열의
	//// 값을 변경할 수 없습니다.

	//string = "Hello";

	//printf("string 변수의 값 : %s\n", string);

	// 문자열은 공백도 함께 메모리 공간에 포함하여
	// 크기가 결정되며, 마지막에 문자열의 끝을 알려주는 
	// 제어 문자가 추가됩니다.

	//// [A][l][i][s][t][a][r][\0][][]
	//char name[10] = { "Alistar" };

	//printf("name 변수의 값 : %s\n", name);

	//name[4] = '\0';

	//// 문자열을 저장하게 되면 맨 마지막에 무효의
	//// 문자까지 메모리 공간에 저장됩니다.
	//printf("name 변수의 값 : %s\n", name);

	// 문자열의 경우 서로 연속적인 메모리 공간으로
	// 연결되어 있지만, 문자 배열 사이에 무효의 문자를
	// 넣게 되면 무효의 문자까지만 문자열을 출력합니다.
#pragma endregion

#pragma region 최댓값과 최솟값


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
	//printf("z의 최대값 : %d\n", max);
 

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
printf("z의 최소값 : %d\n", min);

//int a[] = { 55, 77, 2, 66, 99, 88, 5, 92, 33, 44 };
//int max, min, i;
//max = 0; // 최대값: 범위 내에서 가장 작은 값으로 초기화
//min = 100; // min=2147483649, 최소값: 범위 내에서 가장 큰 값으로 초기화
//
//for (i = 0; i < 10; i++)
//{
//	if (a[i] > max) max = a[i]; // 더 큰값을 최대값으로 한다.
//	if (a[i] < min) min = a[i]; // 더 작은 값을 최소값으로 한다.
//}
//
//printf("최대값: %d\n", max);
//printf("최소값: %d\n", min);
//
//return 0;



#pragma endregion

}