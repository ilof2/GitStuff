#include <stdio.h>
#include <string.h>

#define SIZE 256
typedef struct
{
	char Sname[SIZE];
	char Fname[SIZE];
	int Mounth;
	int day;
	int year;
}BDay;


int main()
{
	int i, N=1, count=0, Y_today = 2018, age;
	int mou;
	BDay friend[N];

	for(i=0; i<N; i++)
	{
		printf("Enter a Fname : ");fgets(friend[i].Fname,  20, stdin);
		printf("Enter a Sname : ");fgets(friend[i].Sname, 20, stdin);
		printf("Enter a Mounth : ");scanf("%d", &friend[i].Mounth);
		printf("Enter a day : ");scanf("%d",&friend[i].day);
		printf("Enter a year : ");scanf("%d", &friend[i].year);
		printf("\n");
	}
	printf("What is the mounth today? : ");scanf("%d", &mou);
	for(i=0; i<N; i++){
		if(friend[i].Mounth == mou){
			age = Y_today - friend[i].year;
			printf("%s have BD in this mounth\n He(she) is %d y.o. in this mounth", friend[i].Fname, age);
			count++;
		}
	}
	if(count==0)
			printf("this mounth without BD\n");
}