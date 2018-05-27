#include<stdio.h>

int r=9;

int min_Num(int Number)
{
	if(Number == 0)
		return r;
	else{
		if(Number%10 < r){
			r = Number%10;
			return min_Num(Number/10);
		}
		else
			return min_Num(Number/10);
	}
}

int main()
{
	int Num, result;
	printf("Enter a Number : ");
	scanf("%d", &Num);

	result = min_Num(Num);
	printf("Min = %d\n", result);
	return 0;
}