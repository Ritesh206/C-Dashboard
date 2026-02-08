#include <stdio.h>
int calcSquare(int n);

int calcSquare(int n)
{
	if(n < 0)
	n=-n;
	int res = 0;
	int base = n;
	
	while(n>0){
		if(n & 1)
			res += base;
		base <<= 1;
		
		n >>= 1;
	}
	return res;
}
 
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	printf("%d",calcSquare(num));
}
