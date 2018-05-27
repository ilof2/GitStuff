#include <stdio.h>
#include <math.h>


void show_arr(int arr[], int n){
	for (int i = 0; i < n; i++)
	{
		printf("b[i] = %d\n", arr[i]);
	}
}
//-------------------------------

int findMax(int arr[], int n)
{
	int max=0;
	
	for (int i = 0; i < n; i++){
		if(arr[i]>max)
			max = arr[i];
	}
	return max;
}

// ------------------------------

int main()
{
	const int n = 5;
	int i, a[n], b[n], max;
	for(i=0; i<n; i++){
		printf("a[%d] = ", i);scanf("%d", &a[i]);
	}
	printf("\n\n");
	max = findMax(a, n);
	for(i=0; i<n; i++){
		b[i]= max - a[i];
	}

	show_arr(b, n);
	return 0;
}