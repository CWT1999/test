#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {
	////���ڿ��� ������
	//char str[] = "happy"; //\0 �������� ���� 6byte
	//// str = "angry"; //str�� ��� ����Ұ�
	//char* p = str;
	//printf("%s\n", p);

	//p = "python";
	//puts(p);//���ڿ������Լ�

	//�ǽ�) �̸��� �Է¹ް� ������ ���
	char name[20];
	char* p = name;
	while(1) {
		printf("�̸���?");
		gets_s(name, sizeof(name));
		if (name[0] == 'q') break;
		/*puts(p);*/
		printf("%s�� ȯ���մϴ�\n\n", p);
		

	}
	

















	return 0;
}