#include<stdio.h>
main()
{
	int n;
	printf("enter a number=");
	scanf("%d",&n);
	deci_bina(n);
}
int deci_bina(int n)
{
	int m,no=0,a=1,rem;
	m=n;
	while(n!=0)
	{
		rem=n%2;
		no=no+rem*a;
		n=n/2;
		a=a*10;
	}
	printf("%d",no);
}
