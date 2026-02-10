#include <stdio.h>>
#define MAX 12

void main()
{
	int x[] = {1,2,1,0,0,1,2,2,0,0,1,2};
	int i,c0 = 0 , c1 = 0;
	int n = MAX;
	
	for(i=0;i<n;i++)
	{
		if(x[i] == 0)
		c0++;
		else if(x[i] ==1)
		c1++;
	}
	for(i=0;i<n;i++)
	{
		if(i<c0)
		x[i]=0;
		else if(i<c0+c1)
		x[i]=1;
		else
		x[i]=2;
	}
	for(i=0;i<n;i++){
		printf("%d\t",x[i]);
	}
}
