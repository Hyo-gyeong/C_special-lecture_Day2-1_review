//#include <stdio.h>
////#define TRUE 1
////#define FALSE 0
////int isPrime = TRUE; 이런 방법도 있음!
//int main(void)
//{
//	int i, count = 0, start = 2;
//	int prime;
//
//	printf("The 50 prime numbers are\n");
//
//	while (count < 50) {
//		
//		for (i = 2; i <= start; i++) {
//			if (start == i) { //1. 우선 소수판별하고 
//				count++;
//				if(count % 10 == 0) // 2. 이후에 10개씩 나눠서 적기
//					printf("%4d\n", i);
//				else
//					printf("%4d", i);
//				break;
//			}
//			else if (start % i == 0) //소수가 아니면 for문 나가기
//				break;
//		}
//		start++;//for(num = 2; num > 0; num++)이렇게 가버리면 무한루프를 돌수 밖에 없음....!!! num++IDEA!!!
//	}
//}


//복습
#include <stdio.h>

int main(void) 
{
	int start;
	int count = 0;
	int increaseNum = 2;

	printf("50개의 소수 나열\n");

	while (count < 50) {
		for (start = 2; start <= increaseNum; start++){
			if (start == increaseNum) { //소수임
				count++;
				if (count % 10 == 0) { // 소수 10개씩 끊어서 나열하기
					printf("%4d\n", increaseNum);
				}
				else {
					printf("%4d", increaseNum);
				}
			}
			else if (increaseNum % start == 0) { //소수가 아니면 반복문 빠져나가기 //나눗셈 조심..! 반대로 나누면 어떻게하니 ㅠ
				break; 
			}
		}
		increaseNum++;
	}
}