#include <stdio.h>

int i = 1;//index��ȣ
int tmp[100] = { 0 }; //����������밡���� �ӽú���
char name[100][100]; //�̸�����
int phone[100]; //��ȭ��ȣ ����
char school[100][100]; //�ҼӺ���

void add() {
	printf("�Է��Ͻ� ������ �Է��� �ּ���\n");
	printf("�̸� : ");
	scanf_s("%s", name[i]);
	printf("��ȭ��ȣ(��ȣ��) : ");
	scanf_s("%d", &phone[i]);
	printf("�Ҽ� : ");
	scanf_s("%s", school[i]);
	i++;
}

void del(){
	int delnum;
	printf("���° �ּҷ��� �����Ͻðڽ��ϱ�\n");
	scanf_s("%d", &delnum);
	tmp[delnum] = 1;

}

void check(){
	int j;
	if (i > 1) {
		for (j = 1; j < i; j++) {
			if (tmp[j] == 0) {
				printf("%d��° �ּҷ�\n", j);
				printf("+--------------------------------------+\n");
				printf("|�̸�		: %15s      |\n", name[j]);
				printf("|��ȭ��ȣ	: %15d      |\n", phone[j]);
				printf("|�Ҽ�		: %15s      |\n", school[j]);
				printf("+--------------------------------------+\n");
			}
			else {
				printf("\n\n%d��° �ּҷ��� �����Ǿ����ϴ�\n\n\n", j);
			}
		}
	}
	else {
		printf("�ּҷ��� �������� �ʽ��ϴ�");
	}
}
int main() {
	int num;
	while (1) {
		printf("����Ͻ� ����� �����ϼ���. \n 1.���, 2.����, 3.��ȸ 4.������\n�Է� : ");
		scanf_s(" %d", &num);
		switch (num) {
		case 1: //���
			add();
			break;
		case 2: //����
			del();
			break;
		case 3: //��ȸ
			check();
			break;
		case 4 : 
			return 0;
		}
	}
	return 0;
}