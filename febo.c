#include<stdio.h>
int main(){
	int i,a=0,b=1,num;
	int c=a+b;
	printf("enter the value");
	scanf("%d,",num);
	printf("%d,%d,",a,b);
	for(i=3;i<=num;i++){
		c=a+b;
		a=b;
		b=c;
		printf("%d,",c);
	}
}
