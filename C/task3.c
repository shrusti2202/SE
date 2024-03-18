#include<stdio.h>
main(){
	int n;
	
	while(1)
	{
		printf("\npress 1 for Factorial number");
		printf("\npress 2 for Filbonnaci series");
		printf("\npress 3 for Prime number");
		printf("\npress 4 for Exit");
		
		printf("\nEnter choice :");
		scanf("%d",&n);
		
		if(n==1){
			int i,n,fac=1;
			printf("\nEnter number :");
			scanf("%d",&n);
			for(i=1;i<=n;i++){
				fac = fac*1;
			}
			printf("\nFactorial number : %d",fac);
		}
		else if(n==2){
			int n,n1=0,n2=1,i,n3;
			printf("\nEnter term :");
			scanf("%d",&n);
			printf("\n%d",n1);
			printf("\n%d",n2);
			
			for(i=3;i<=n;i++){
				printf("\n%d",n3);
				n1 = n2;
				n2 = n3;
				n3 = n1+n2;
			}
		}
		else if(n==3){
			int n,c=0,i;
			printf("\nEnter number :");
			scanf("%d",&n);
			
			for(i=1;i<=n;i++){
				if(n%i==0){
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
		else if (n==4){
			printf("\nThank you for using this!!");
			break;
		}
		else{
			printf("\nInvalid choice!!");
			break;
		}
	}
}
