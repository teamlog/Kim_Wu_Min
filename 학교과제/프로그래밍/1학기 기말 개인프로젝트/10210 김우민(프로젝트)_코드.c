/* 10210 ���� 17�⵵ 1�б� �⸻ ����������Ʈ <����Ų��� 31> */

#include <stdio.h>//�����
#include <windows.h>
#include <stdlib.h>//rand����� ���ؼ�
#include <time.h>//srand����� ���ؼ�

int i;
int mod;//��� ���� 1.�÷��̾�� 2.��ǻ�Ϳ� ���

void player();//1�� ����϶� >>�÷��̾��
void AI();//2�� ����϶� >>��ǻ�Ϳ�

int main(void) 
{
	
	printf("                <-- ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);//���ڻ�����
	printf("Baskin Rabins 31");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);//�����·�
	printf("-->\n");//����ȭ��
	printf("\n");
	printf("======================!���ӹ��!======================\n");
	printf("(1) 1���� �����ؼ� 31���� �����ư��鼭 ���ڸ� �θ��ϴ�.\n");
	printf("(2) �ѹ��� �ִ� 3������ ���ӵ� ���ڸ� �θ� �� �ֽ��ϴ�.\n");
	printf("(3) 31�� ���ϴ� ����ڰ� ���ӿ��� �й��մϴ�.\n");
	printf("* Made by ����\n");
	printf("======================================================\n");
	printf("\n");

	while (1) 
	{
		printf("���Ͻô� ��带 �������ּ���\n1. Player\n2. AI\n�Է� >>");
		scanf("%d", &mod);//��弱��

		if (mod == 1)
			player();//�÷��̾��
		else if (mod == 2)
			AI();//��ǻ�Ϳ�
		else
		{
			printf("�߸� �Է��ϼ̽��ϴ�.\n�ٽ� �Է����ּ���.\n");
			continue;//���� ó��
		}
		break;
	}

	return 0;
}

void player() //1�� ���
{
	int cnt = 1;//�÷��̾�1 �÷��̾�2 ����
	int P;
	int temp = 1;

	while (1)
	{
		if (temp == 32)//�¸� ���
		{
			printf("\nP%d�� �¸�!!!\n\n", cnt);
			break;
		}

		printf("\n------------------------------\n");
		printf("P%d�� ����\n", cnt);
		while (1) 
		{
			printf("��� ���ڸ� �θ��ðڽ��ϱ�? : ");
			scanf("%d", &P);//���� P������ ���ڸ� ��� ������� ���մϴ�.

			if (P < 1 || P > 3)
			{
				printf("�߸� �Է��ϼ̽��ϴ�.\n�ٽ� �Է����ּ���.\n");
				continue;//���� ó��
			}
			break;
		}
		printf("P%d : ", cnt);

		for (i = 0; i < P; i++)
		{//���� ��� �κ�
			if (temp == 32)//32�� �Ǹ� 32�� ����������� break
				break;
			printf("%d ", temp++);
		}
		printf("\n");

		//�÷��̾�1 �÷��̾�2 ���� ����
		cnt++;
		if (cnt == 3)
			cnt = 1;
	}
}

void AI() //2�� ���
{
	int cnt;//�÷��̾� ��ǻ�� ����
	int P;
	int temp = 1; 
	char name[2][10] = { "Player","AI" };

	srand(time(NULL));//������ ���
	cnt = rand() % 2;

	printf("\n%s ����\n", name[cnt]);//���� �������� ���ϱ�

	while (1)
	{
		if (temp == 32)
		{
			printf("\n%s �¸�!!!\n\n", name[cnt]);
			break;
		}
		if (cnt == 0) // player�κа� ����
		{
			printf("\n------------------------------\n");
			printf("����� ����\n");
			while (1) 
			{
				printf("��� ���ڸ� �θ��ðڽ��ϱ�? : ");
				scanf("%d", &P);

				if (P < 1 || P > 3)
				{
					printf("�߸� �Է��ϼ̽��ϴ�.\n�ٽ� �Է����ּ���.\n");
					continue;//���� ó��
				}
				break;
			}
			printf("��� : ");
			for (i = 0; i < P; i++)
			{
				if (temp == 32)
					break;
				printf("%d ", temp++);
			}
			printf("\n");
		}
		else //��ǻ�� �κ�
		{//��ǻ�ʹ� �Է¹޴� ���� �ʿ�����Ƿ� ��¸� ������ �߽��ϴ�.
			printf("��ǻ�� : ");
			for (i = 0; i < rand() % 3 + 1; i++)//���ڸ� �����ϰ� 1~3�� ���
			{
				if (temp == 32)
					break;
				printf("%d ", temp++);
			}
			printf("\n");
		}

		//�÷��̾� ��ǻ�� ���ʴ�� ��������
		cnt++;
		if (cnt == 2)
			cnt = 0;
	}
}