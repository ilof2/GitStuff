#include <stdio.h>


int main(){
	const int m = 3, n = 3;
	int a[m][n], i, j, b[10], k = 0;
	int proizv = 1, sum = 0;
	int key = 0;

	for (int i = 0; i < n; i++){
		printf("Vvedite stolbec %d: ", i);
		for (int j = 0; j < m; j++){
			scanf("%d", &a[j][i]);
		}
	}

	for (int i = 0; i < n; i++){

		for (int j = 0; j < m; j++){
			sum = i + j;
			if(sum != 0){
				if( a[j][i]%sum == 0 ){
					proizv *= a[j][i];
					key = 1;
					sum = 0;
				}
				sum = 0;
			}
		}
		if(key == 1){
		b[k] = proizv;
		k++;
		proizv = 1;
		key = 0;
		}
	}
		for(i=0; i<k; i++)
			printf("%d : %d\n", i, b[i]);
}