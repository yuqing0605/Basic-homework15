//3A713221
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int minute,hour;
	printf("請輸入現在幾點\n");
	scanf("%d",&hour);
	printf("請輸入現在幾分\n");
	scanf("%d",&minute);
	
    if((minute>60)||(hour>24))
    printf("請輸入正確時間\n");
	else if((hour>7&&hour<17&&minute<=60)||(hour==7&&minute>=30))
	printf("上學時間\n");
	else
	printf("放學時間\n");
    
	system("pause");
	return 0;
}
