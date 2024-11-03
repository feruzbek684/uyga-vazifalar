#include <stdio.h>
int main (){
	int a=1, son;
	scanf("%d", &son);
	qayt:
	if (a<=son) {
		printf("%d", a * 2);
		a = a + 1 ;
		goto qayt;
	}
	return 0;
}
