#include <stdio.h>

int main(void) {

	int arr[50];
	int number = 0;
	int i = 0;
	int max=0;

	printf("입력할 숫자의 갯수를 입력하세요 \n");
	scanf("%d", &number);

	for(i=0; i<number; i++) {
		scanf("%d", &arr[i]);
	}
	for(i=0; i<number; i++) {
		if(max < arr[i]) {
			max = arr[i];
		}
	}

	printf("가장 큰 수는 %d \n", max);
	return 0;
}