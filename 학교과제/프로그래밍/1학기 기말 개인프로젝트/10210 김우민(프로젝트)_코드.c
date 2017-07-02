/* 10210 김우민 17년도 1학기 기말 개인프로젝트 <베스킨라빈스 31> */

#include <stdio.h>//입출력
#include <windows.h>
#include <stdlib.h>//rand사용을 위해서
#include <time.h>//srand사용을 위해서

int i;
int mod;//모드 선택 1.플레이어끼리 2.컴퓨터와 대결

void player();//1번 모드일때 >>플레이어끼리
void AI();//2번 모드일때 >>컴퓨터와

int main(void) 
{
	
	printf("                <-- ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);//글자색변경
	printf("Baskin Rabins 31");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);//원상태로
	printf("-->\n");//시작화면
	printf("\n");
	printf("======================!게임방법!======================\n");
	printf("(1) 1부터 시작해서 31까지 번갈아가면서 숫자를 부릅니다.\n");
	printf("(2) 한번에 최대 3번까지 연속된 숫자를 부를 수 있습니다.\n");
	printf("(3) 31을 말하는 사용자가 게임에서 패배합니다.\n");
	printf("* Made by 김우민\n");
	printf("======================================================\n");
	printf("\n");

	while (1) 
	{
		printf("원하시는 모드를 선택해주세요\n1. Player\n2. AI\n입력 >>");
		scanf("%d", &mod);//모드선택

		if (mod == 1)
			player();//플레이어끼리
		else if (mod == 2)
			AI();//컴퓨터와
		else
		{
			printf("잘못 입력하셨습니다.\n다시 입력해주세요.\n");
			continue;//예외 처리
		}
		break;
	}

	return 0;
}

void player() //1번 모드
{
	int cnt = 1;//플레이어1 플레이어2 구분
	int P;
	int temp = 1;

	while (1)
	{
		if (temp == 32)//승리 출력
		{
			printf("\nP%d의 승리!!!\n\n", cnt);
			break;
		}

		printf("\n------------------------------\n");
		printf("P%d의 차례\n", cnt);
		while (1) 
		{
			printf("몇개의 숫자를 부르시겠습니까? : ");
			scanf("%d", &P);//받은 P값으로 숫자를 몇번 출력할지 정합니다.

			if (P < 1 || P > 3)
			{
				printf("잘못 입력하셨습니다.\n다시 입력해주세요.\n");
				continue;//예외 처리
			}
			break;
		}
		printf("P%d : ", cnt);

		for (i = 0; i < P; i++)
		{//숫자 출력 부분
			if (temp == 32)//32가 되면 32를 출력하지말고 break
				break;
			printf("%d ", temp++);
		}
		printf("\n");

		//플레이어1 플레이어2 차례 설정
		cnt++;
		if (cnt == 3)
			cnt = 1;
	}
}

void AI() //2번 모드
{
	int cnt;//플레이어 컴퓨터 구분
	int P;
	int temp = 1; 
	char name[2][10] = { "Player","AI" };

	srand(time(NULL));//랜덤값 사용
	cnt = rand() % 2;

	printf("\n%s 선공\n", name[cnt]);//선공 랜덤으로 정하기

	while (1)
	{
		if (temp == 32)
		{
			printf("\n%s 승리!!!\n\n", name[cnt]);
			break;
		}
		if (cnt == 0) // player부분과 동일
		{
			printf("\n------------------------------\n");
			printf("당신의 차례\n");
			while (1) 
			{
				printf("몇개의 숫자를 부르시겠습니까? : ");
				scanf("%d", &P);

				if (P < 1 || P > 3)
				{
					printf("잘못 입력하셨습니다.\n다시 입력해주세요.\n");
					continue;//예외 처리
				}
				break;
			}
			printf("당신 : ");
			for (i = 0; i < P; i++)
			{
				if (temp == 32)
					break;
				printf("%d ", temp++);
			}
			printf("\n");
		}
		else //컴퓨터 부분
		{//컴퓨터는 입력받는 값이 필요없으므로 출력만 간단히 했습니다.
			printf("컴퓨터 : ");
			for (i = 0; i < rand() % 3 + 1; i++)//숫자를 랜덤하게 1~3번 출력
			{
				if (temp == 32)
					break;
				printf("%d ", temp++);
			}
			printf("\n");
		}

		//플레이어 컴퓨터 차례대로 순서설정
		cnt++;
		if (cnt == 2)
			cnt = 0;
	}
}