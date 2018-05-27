#include <stdio.h>

void show_arr(double arr[], int n){
	for (int i = 0; i < n; i++)
	{
		printf("b[i] = %lf\n", arr[i]);
	}
}
//-------------------------------

int findMax(double arr[], int n)
{
	int max=0.0;
	
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
	int i, max;
	double b[n], a[n];
	for(i=0; i<n; i++){
		printf("a[%d] = ", i);scanf("%lf", &a[i]);
	}
	printf("\n\n");
	max = findMax(a, n);
	for(i=0; i<n; i++){
		b[i]= a[i]/max;
	}

	show_arr(b, n);
	return 0;
}