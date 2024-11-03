#include <stdio.h>
int main () {
	int a=1, b= 0, c;
	scanf("%d", &c);
	d:
	if(a % 2== 0) {
		b = b + a;
	}
	else{}
	a++;
	if (a > c) {
		printf("juft sonlar yigindisi: %d", b); 
		return 0;
	}else {
		goto d;
	}
	
	return 0;
	
}
