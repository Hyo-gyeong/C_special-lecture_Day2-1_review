#include <stdio.h>
int main(void)
{
	int input;
	int i, j;

	printf("���� �Է�: ");
	scanf("%d", &input);

	for (i = 1; i <= input; i++){
		for (j = 0; j < i; j++){
			printf("%4d", input - j);
		}
	printf("\n");
	}
}