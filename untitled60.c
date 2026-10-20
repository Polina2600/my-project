#include <stdio.h>
int main (){
	int a,b;
	int i;
	int n;
	scanf("%d",&a);
	scanf("%d",&b);
	
	for (i = b; i >= a; i = i - 1) {
		printf("%d ",i);
		n = n + 1;
	}
	
	printf("\n",n);
	return 0;
}
