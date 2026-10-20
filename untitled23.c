//произведение нечетных чисел
#include <stdio.h>
int main (){
	int n;
	int proiz = 1;
	scanf("%d",&n);
	
	for(int i = 1; i <= n; i = i + 1){
		if(i % 2 != 0){
			proiz = proiz * i;
		}
	}
	
	printf("%d",proiz);
	return 0;
}
