#include <stdio.h>
#include <stdlib.h>




int main(int argc, char *argv[])
{
	int proiz = 1;
	int count=0, A, B;

	printf("vvedite A: ");scanf("%d", &A);
	printf("vvedite B: ");scanf("%d", &B);
		for(int i = 0; i<argc; i++){
			if(A <= atoi(argv[i]) && B>= atoi(argv[i])){	
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