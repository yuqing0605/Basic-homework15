//3A713221
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int minute,hour;
	printf("�п�J�{�b�X�I\n");
	scanf("%d",&hour);
	printf("�п�J�{�b�X��\n");
	scanf("%d",&minute);
	
    if((minute>60)||(hour>24))
    printf("�п�J���T�ɶ�\n");
	else if((hour>7&&hour<17&&minute<=60)||(hour==7&&minute>=30))
	printf("�W�Ǯɶ�\n");
	else
	printf("��Ǯɶ�\n");
    
	system("pause");
	return 0;
}
