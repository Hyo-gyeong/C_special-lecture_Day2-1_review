//#include <stdio.h>
////#define TRUE 1
////#define FALSE 0
////int isPrime = TRUE; �̷� ����� ����!
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
//			if (start == i) { //1. �켱 �Ҽ��Ǻ��ϰ� 
//				count++;
//				if(count % 10 == 0) // 2. ���Ŀ� 10���� ������ ����
//					printf("%4d\n", i);
//				else
//					printf("%4d", i);
//				break;
//			}
//			else if (start % i == 0) //�Ҽ��� �ƴϸ� for�� ������
//				break;
//		}
//		start++;//for(num = 2; num > 0; num++)�̷��� �������� ���ѷ����� ���� �ۿ� ����....!!! num++IDEA!!!
//	}
//}


//����
#include <stdio.h>

int main(void) 
{
	int start;
	int count = 0;
	int increaseNum = 2;

	printf("50���� �Ҽ� ����\n");

	while (count < 50) {
		for (start = 2; start <= increaseNum; start++){
			if (start == increaseNum) { //�Ҽ���
				count++;
				if (count % 10 == 0) { // �Ҽ� 10���� ��� �����ϱ�
					printf("%4d\n", increaseNum);
				}
				else {
					printf("%4d", increaseNum);
				}
			}
			else if (increaseNum % start == 0) { //�Ҽ��� �ƴϸ� �ݺ��� ���������� //������ ����..! �ݴ�� ������ ����ϴ� ��
				break; 
			}
		}
		increaseNum++;
	}
}