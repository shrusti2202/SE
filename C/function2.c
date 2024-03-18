#include<stdio.h>
myfun(a,b)
{
	printf("A : %d",a);
	printf("B : %d",b);
	printf("\n Addition :%d",a+b);
}


main(){
	int a,b;
	printf("Enter number 1 :");
	scanf("%d",&a);
	printf("\nEnter number 2 :");
	scanf("%d",&b);
	myfun1(a,b);
}
