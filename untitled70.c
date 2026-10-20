// Дано вещественное число — цена 1 кг конфет. Вывести стоимость 1, 2, . . . , 10 кг конфет
#include <stdio.h>
int main (){
	int summ = 0;
	for (int i = 1; i <= 10; i = i + 1) {
		printf("%d ",i);
		summ = summ + i;
	}
	
	printf("\n",summ);
	return 0;
}
