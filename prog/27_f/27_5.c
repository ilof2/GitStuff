#include <stdio.h>
#include <stdlib.h>




int main(int argc, char *argv[])
{
	int proiz = 1;
	int count=0;

		for(int i = 0; i<argc; i++){
			if(atoi(argv[i])%7 == 2 || atoi(argv[i])%7 == 5){	
				printf("%d\n", atoi(argv[i]));
				count++;
			}
		}
	if(count==0) printf("Net znach\n");
	return 0;
}