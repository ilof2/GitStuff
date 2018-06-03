#include <stdio.h>

void show_arr(double arr[], int n){
	for (int i = 0; i < n; i++)
	{
		printf("b[i] = %lf\n", arr[i]);
	}
}
//-------------------------------

int findMin(double arr[], int n)
{
	int min=arr[0];
	
	for (int i = 0; i < n; i++){
		if(arr[i]<min)
			min = arr[i];
	}
	return min;
}

// ------------------------------

int main()
{
	const int n = 5;
	int i, min;
	double b[n], a[n];
	for(i=0; i<n; i++){
		printf("a[%d] = ", i);scanf("%lf", &a[i]);
	}
	printf("\n\n");
	min = findMin(a, n);
	for(i=0; i<n; i++){
		b[i]= a[i]/min;
	}

	show_arr(b, n);
	return 0;
}