#include <stdio.h>
int i = 0;

void add{
	printf("�Է��Ͻ� ������ �Է��� �ּ���");
printf("�̸� : ");
scanf_s(" %s", name[i]);
printf("��ȭ��ȣ(��ȣ��) : ");
scanf_s("%d", phone[i]);
printf("�Ҽ� : ");
scanf(" %s", school[i]);
i++;
}

void del{

}

void check{
	int tmp;
if (i > 0) {
	for (j = 0; j < i; j++) {
		printf("------------------------------");
		printf("%d.", j);
		printf("�̸� : %s ||", name[j])
			printf("��ȭ��ȣ; : %d ||", phone[j]);
		printf("�Ҽ� : %s", school[j]);
	}
}
}
int main() {
	char name[100][100]; //�̸�����
	int phone[100]; //��ȭ��ȣ ����
	char school[100][100]; //�ҼӺ���
	int num;
	printf("����Ͻ� ����� �����ϼ���. \n 1.���, 2.����, 3.��ȸ")
		scanf_s("%d", num);
	switch (num) {
	case 1: //���
		add();
		break;
	case 2: //����

		break;
	case 3: //��ȸ

		break;
	}
	return 0;
}