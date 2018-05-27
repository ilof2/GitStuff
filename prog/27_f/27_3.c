#include <stdio.h>
#include <stdlib.h>




int main(int argc, char *argv[])
{
	float sum = 0, result = 0.0;
	float count=0;

	for(int i = 0; i<argc; i++){
		if(atoi(argv[i])%2!=0){
			sum += atof(argv[i]);
			count++;
		}	
	}
	result = sum/count;
	if(count==0)
			printf("Net znach\n");
		else
			printf("result is = %f\n", result);
	return 0;
}