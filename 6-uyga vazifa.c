#include <stdio.h>
int main(){
	int son;
	printf("\t\tilni tanlang: \n");
	printf("1.Uzbek\n");
	printf("2.ingiliz\n");
	scanf("%d", &son);
	switch(son){
		case 1:
			printf("1.dushanba\n"); 
			printf("2.seshanba\n"); 
			printf("3.chorshanba\n");
			printf("4.payshanba\n"); 
			printf("5.juma\n"); 
			printf("6.shanba\n"); 
			printf("7.yakshanba\n"); break;
		case 2:
			printf("1.Monday\n"); 
			printf("2.Tuesday\n"); 
			printf("3.Wednesday\n");
			printf("4.Thursday\n"); 
			printf("5.Friday\n"); 
			printf("6.Saturday\n"); 
			printf("7.Sunday\n"); break;
	}
	
	return 0;
}
