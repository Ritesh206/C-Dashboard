#include <stdio.h>

int max(int a,int b){
	return (a>b)?a:b;
}
int kadane(int arr[], int n)
{
	int i;
	int max_so_far = arr[0];
	int current_max = arr[0];
	
	for( i = 1;i<n;i++){
	
	current_max = max(arr[i],current_max +arr[i]);
	max_so_far = max(max_so_far,current_max);
	
	}
	return max_so_far;
	
}
int main(){
	int a[]= {-2,-3,44,-1,-22,1,58,-3};
	int n = sizeof(a)/sizeof(a[0]);
	
	int max_sum = kadane(a,n);
	printf("Maximum contiguous sum is %d",max_sum);
}
