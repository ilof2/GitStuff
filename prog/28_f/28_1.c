#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 256
typedef struct
{
	char brend[SIZE];
	char color[SIZE];
	int number;
	char name[SIZE];
	char address[SIZE];
}options;

int first;
int Fnum(int num)
{
	first = num % 10;
	if(num/10 == 0)
		return first;
	else{
		return Fnum(num/10);
	}
}



int main()
{
	int i = 0, N=2, k, count=0;
	options automobile[N];
	while(i!=N)
	{
	for(i=0; i<N; i++)
		{
			printf("Enter a brend : ");fgets(automobile[i].brend, 20, stdin);
			printf("Enter a color : ");fgets(automobile[i].color,  15, stdin);
			printf("Enter a name : ");fgets(automobile[i].name,  15, stdin);
			printf("Enter a number : ");scanf("%d", &automobile[i].number);
			printf("Enter a address : ");fgets(automobile[i].address,  30, stdin);
		}
	}
	printf("Enter a first digit of number: ");scanf("%d", &k);
	for(i=0; i<N; i++){
		if(Fnum(automobile[i].number) == k){
			printf("Numbers with first %d : %d\n", k, automobile[i].number);
			count++;
		}
	}
	if(count==0)
			printf("Can`t find numbers with %d first\n", k);
}