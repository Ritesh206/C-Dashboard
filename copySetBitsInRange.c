#include <stdio.h>
int copySetBits(int,int,int,int);
int main()
{
	int a,b,left,right;
	printf("Enter x:");
	scanf("%d",&a);
	
	printf("Enter y:");
	scanf("%d",&b);
	
    printf("Enter left and right range:");
    scanf("%d %d",&left,&right);

     int res= copySetBits(a,b,left,right);
     printf("result = %d\n",res);

return 0;	
}
int copySetBits(int x,int y,int l,int r){
	if(l < 1 || r > 32)
	return x;
	
	for(int i=1;i<=r;i++)
	{
		int mask = 1 << (i-1);
		if(y & mask)
		x |= mask;
	}
	return x;
}
