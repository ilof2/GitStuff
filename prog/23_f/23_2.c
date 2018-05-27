#include <stdio.h>

int count = 0;
int counter(int Number){
	if(Number == 0)
		return count;
	else{
		count++;
		return counter(Number/10);
	}
}

int main()
{
	int Num, result;
	printf("Enter a Number: ");
	scanf("%d", &Num);
	result = counter(Num);
	printf("%d\n", result);
	return 0;
}