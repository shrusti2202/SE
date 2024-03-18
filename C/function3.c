#include<stdio.h>
myadd()
{
	int i,n,fac=1;
	
	printf("Enter number :" );
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fac = fac*i;
	}
	return fac;
}

main()
{
	int result = myadd();
	printf("\nFactorial number is : %d",result);
}
