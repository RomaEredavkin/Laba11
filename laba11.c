#include <stdio.h> 
#include <Windows.h> 


void Task1() {
	printf("Task1 START\ n"); 
	
	
	int mi;
	int ni;
	printf("������� ���������� �����\n"); 
	scanf_s("%d", &ni); 
	printf("������� ���������� �����\n"); 
	scanf_s("%d", &mi);
	int i, j;
	i = 1;
	do {
		j = 1;
		do {
			
			printf("%d ", j * 10 + i);
			j++;
		} while (j <= mi);

		printf("\n");
		i++;
	} while (i <= ni);
	printf("Task1 FINISH \n"); 

} 
void Task2() {
	printf("TASK2() START \n");
	int mi = 10;
	int ni = 1;
	int i, j;
	i = 1;
	do {
		j = 1;
		do {

			printf("%3d ", j * i);
			j++;
		} while (j <= mi);
		
		printf("\n");
		i++;
	} while (i <= mi);
	printf("TASK2() FINISH \n");
} 
void Task3() {
	printf("TASK3() START \n");
	printf("TASK3() FINISH \n");
} 
void main() {
	SetConsoleCP(1251); 
	SetConsoleOutputCP(1251); 
	int n; 
	do {
		printf("\n");
		printf("\n");
		printf("�������� ������ ��� ������: \n");
		printf("1: ������ 1 (i * 10 + j )\n");
		printf("2: ������ 2 (������� ��������)\n");
		printf("3: ������ 3 (������� �� ��������)\n");
		printf("0: ����� �� ������ \n");
		scanf_s("%d", &n);
		switch (n) {
		case 1:
			Task1();
			break;
		case 2:
			Task2();
			break;
		case 3:
			Task3();
			break;


		}

	} while (n != 0);
}