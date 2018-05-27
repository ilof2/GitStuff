#include<stdio.h>

int Num_new = 0;
int reverse(int Num){
	
	if(Num == 0)
		return Num_new;
	else
		Num_new = Num_new*10 + Num%10;
		return reverse(Num/10);

}



int main()
{
	int Number, result;

	printf("Enter a Number: \n");
	scanf("%d", &Number);
	if(Number != 0)
		result = reverse(Number);
	printf("%d\n", result);
}