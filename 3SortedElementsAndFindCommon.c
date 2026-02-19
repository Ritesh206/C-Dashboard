#include <stdio.h>
#define MAX 5
int main()
{
	int n1=5,n2=5,n3=5;
	int Arr1[MAX]={1,3,5,7,10};
	int Arr2[MAX]={2,7,8,10,12};
	int Arr3[MAX]={7,8,9,10,16};
	
	int i=0,j=0,k=0,curr=0;
	while(i<n1 && j<n2 && k<n3)
	{
		if(Arr1[i]==Arr2[j] && Arr2[j]==Arr3[k])
		{
			printf("%d ",curr=Arr1[i]);
		
			i++,j++,k++;
			int p;
			for(p=i;p<n1;p++){
				{
					if(Arr1[p]==curr)
					i++;
				}
			}
			
		}
		else{
			if(Arr1[i]<Arr2[j] && Arr1[i]<Arr3[k])
			i++;
			else if(Arr2[j]<Arr3[k])
			j++;
			else
			k++;
		}
	}
	
	
}
