//#include <stdio.h>
//#define HowMany 2
//int main(void)
//{
//	int input, origin;
//	int i;
//	int rest = 0;
//	int reverse;
//
//	for (i = 0; i < HowMany; i ++) { //�� �� ��������
//		reverse = 0;//�ʱ�ȭ �Ű澲��!
//		printf("Enter a number: ");
//		scanf("%d", &input);
//
//		origin = input; //�ڿ��� input�� �����Ҳ��ϱ� origin�� ���� �Է°� ����!
//		
//		//�Է°��� ����� ������ �Է°��̶� ���ϰڴٴ� ��!
//		while (input != 0) {//input�� 0�� �ƴѶ�.!���� �� �����ؾ���..! input <= 0 �ƴϾ�!!//���� 0���� �����°� ���� ���� --> 0���� �����ϴ� �� ���.
//			rest = input % 10;
//			reverse = reverse * 10 + rest; //0���� � ���� ���ص� 0�̶�� ����~
//			input = input / 10;//rest������ �ʾƵ� 10���� ���� �� �����ϱ� ���� ���� �ʿ� ����! //������ ��� ���ָ� �ᱹ 0�� �Ǳ⶧���� while�� ������ != 0 �ΰ���!
//		}
//		if (reverse == origin) 
//			printf("%d is a palindrome\n", origin);
//		else 
//			printf("%d is not a palindrome\n", origin);
//		//reverse����� ���·� �������⶧���� for���ȿ��� while�� �������� reverse�ʱ�ȭ �ؾ���.
//	}	
//}


//����
#include <stdio.h>
#define HowMany 10

int main(void)
{
	int input;
	int i;
	int rest, reverse, origin;

	for (i = 0; i < HowMany; i++) {
		printf("ȸ�����θ� �˰���� ���� �Է��ϼ��� : ");
		scanf("%d", &input);

		reverse = 0;
		origin = input;

		while(input != 0) {
			rest = input % 10;
			reverse = reverse * 10 + rest;
			input = input / 10;
		}

		if (origin == reverse)
			printf("\nȸ���Դϴ�.\n\n");
		else 
			printf("\nȸ���� �ƴϳ׿�.\n\n");
	}

}