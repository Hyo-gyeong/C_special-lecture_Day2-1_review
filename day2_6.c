//#include <stdio.h>
//#define HowMany 2
//int main(void)
//{
//	int input, origin;
//	int i;
//	int rest = 0;
//	int reverse;
//
//	for (i = 0; i < HowMany; i ++) { //몇 번 돌릴껀지
//		reverse = 0;//초기화 신경쓰자!
//		printf("Enter a number: ");
//		scanf("%d", &input);
//
//		origin = input; //뒤에서 input을 수정할꺼니까 origin에 원래 입력값 저장!
//		
//		//입력값을 뒤집어서 원래의 입력값이랑 비교하겠다는 논리!
//		while (input != 0) {//input이 0이 아닌때.!조건 잘 생각해야함..! input <= 0 아니야!!//끝이 0으로 끝나는건 걱정 ㄴㄴ --> 0으로 시작하는 수 없어서.
//			rest = input % 10;
//			reverse = reverse * 10 + rest; //0에는 어떤 수를 곱해도 0이라는 생각~
//			input = input / 10;//rest빼주지 않아도 10으로 나눈 몫만 나오니까 따로 빼줄 필요 없음! //끝까지 계산 해주면 결국 0이 되기때문에 while문 조건이 != 0 인것임!
//		}
//		if (reverse == origin) 
//			printf("%d is a palindrome\n", origin);
//		else 
//			printf("%d is not a palindrome\n", origin);
//		//reverse저장된 상태로 내려오기때문에 for문안에서 while문 돌기전에 reverse초기화 해야함.
//	}	
//}


//복습
#include <stdio.h>
#define HowMany 10

int main(void)
{
	int input;
	int i;
	int rest, reverse, origin;

	for (i = 0; i < HowMany; i++) {
		printf("회문여부를 알고싶은 수를 입력하세요 : ");
		scanf("%d", &input);

		reverse = 0;
		origin = input;

		while(input != 0) {
			rest = input % 10;
			reverse = reverse * 10 + rest;
			input = input / 10;
		}

		if (origin == reverse)
			printf("\n회문입니다.\n\n");
		else 
			printf("\n회문이 아니네요.\n\n");
	}

}