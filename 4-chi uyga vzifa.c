#include <stdio.h>
int main (){
	int a, b;
	char c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf(" %c", &c);
	switch(c){
		case '+':
			printf("%d+%d=%d\n", a, b, a+b); break;
		case '-':
			printf("%d-%d=%d\n", a, b, a-b); break;
		case '*':
			printf("%d*%d=%d\n", a, b, a*b); break;
		case '/':
			printf("%d/%d=%d\n", a, b, a/b); break;
		
	}
	return 0;
}
