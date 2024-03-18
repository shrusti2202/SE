#include<stdio.h>
int main(){
	int num,i,fact;
	printf("enter the sum");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		fact=fact*i;
	}
	printf("fact of %d is %d",num,fact);
}
