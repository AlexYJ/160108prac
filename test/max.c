#include <stdio.h>

int main(void) {

	int arr[50];
	int number = 0;
	int i = 0;
	int max=0;

	printf("�Է��� ������ ������ �Է��ϼ��� \n");
	scanf("%d", &number);

	for(i=0; i<number; i++) {
		scanf("%d", &arr[i]);
	}
	for(i=0; i<number; i++) {
		if(max < arr[i]) {
			max = arr[i];
		}
	}

	printf("���� ū ���� %d \n", max);
	return 0;
}