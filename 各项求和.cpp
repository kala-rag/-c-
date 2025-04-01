#include<stdio.h> 
int main(void)
{
	int n,d0,d1,d2;
	scanf("%d",&n);
	d0=n%10;
	d1=(n/10)%10;
	d2=n/100;
	printf("%d\n",d0+d1+d2);
	return 0;
	
}
