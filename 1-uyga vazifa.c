#include <stdio.h>
int main(){
	int son;
	printf("Faslni kiriting: \n\n");
	scanf("%d", & son);
	switch(son){
		case 1:
			printf("1.Dekabr yanvar fevral\n");
			printf("Qish faslida jami 90 kun bor"); break;
		case 2:
			printf("1.Mart aprel may\n");
			printf("Bahor faslida jami 92 kun bor\n");break;			
		case 3:
			printf("1.Iyun iyul avgust\n");
			printf("Yoz faslida jami 92 kun bor\n");break;
		case 4:
			printf("1.Sentabr oktabr noyabr\n");
			printf("Kuz faslida jami 91 kun bor\n");break;
		
	}
		return 0;
}
