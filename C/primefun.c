#include<stdio.h>
myfun(int a){
	int i,c=0;
//			printf("\nEnter number :");
//			scanf("%d",&a);
			
			for(i=1;i<=a;i++)
			{
				if(a%i==0){
					c++;
				}
			}
			if(c==2){
				printf("\nnumber is prime");
			}
			else{
				printf("\nnumber is not prime");
			}
}

main(){
	
	
	
	int a;
	printf("Enter number 1 :" );
	scanf("%d",&a);
	myfun(a);
//	int n,a=0,i;
//			printf("\nEnter number :");
//			scanf("%d",&n);
//			
//			for(i=1;i<=n;i++){
//				if(n%i==0){
//					a++;
//				}
//			}
//			if(a==2){
//				printf("\nnumber is prime");
//			}
//			else{
//				printf("\nnumber is not prime");
//			}
}
