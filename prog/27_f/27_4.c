#include <stdio.h>
#include <stdlib.h>




int main(int argc, char *argv[])
{
	int proiz = 1;
	int count=0;

		for(int i = 0; i<argc; i++){
			if(atoi(argv[i])%3 == 0 && atoi(argv[i])%5 != 0){	
				proiz *= atoi(argv[i]);
				count++;
			}
		}
	if(count==0)
			printf("Net znach\n");
		else
			printf("result is = %d\n", proiz);
	return 0;
}