#include <stdio.h>
int main(){
	int son;
	printf("son: ");
	scanf("%d", &son);
	
	switch(son){
		case 1:
			printf("dushanba\n"); break;
		case 2:
			printf("seshanba\n"); break;
		case 3:
			printf("chorshanba\n"); break;
		case 4:
			printf("payshanba\n"); break;
		case 5:
			printf("juma\n"); break;
		case 6:
			printf("shanba\n"); break;
		case 7:
			printf("yakshanba\n"); break;
			
		default:
			printf("Bunaqa hafta kuni mavjud emas"); break;
			
	}
	
}
