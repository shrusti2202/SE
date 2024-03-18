#include<stdio.h>
main(){
	int n;
	
	while(1)
	{
		printf("\npress 1 for Acending number");
		printf("\npress 2 for Decending number");
		printf("\npress 3 for Addition ");
		printf("\npress 4 for Exit");
		
		printf("\nEnter choice :");
		scanf("%d",&n);
		
		
//		1


		if(n==1){
				int a[4],i,j,temp;
	
	for(i=0;i<=3;i++){
		printf("\nEnter number :");
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<=3;i++){
		for (j=i+1;j<=3;j++){
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<=3;i++){
		printf("\nNumber is : %d",a[i]);
	}
		}
		
//		2


		else if(n==2){
				int a[4],i,j,temp;
	
	for(i=0;i<=3;i++){
		printf("\nEnter number :");
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<=3;i++){
		for (j=i+1;j<=3;j++){
			if(a[i]<a[j])
			{
				temp = a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<=3;i++){
		printf("\nNumber is : %d",a[i]);
	}
		}
		
//		3


		else if(n==3)
		{
			int a[2][3],i,j,sum,b[2][3];
			
			
//	         1 array


			for(i=0;i<=1;i++)
			{
				for(j=0;j<=2;j++)
				{
					printf("Enter Number for 1st array : ");
					scanf("%d",&a[i][j]);
				}
			}
			for(i=0;i<=1;i++)
			{
				for(j=0;j<=2;j++)
				{
					printf("Number are [%d] [%d] : %d\t ",i,j,a[i][j]);
				}
					printf("\n");
			}
			
//			2 array


			for(i=0;i<=1;i++)
			{
				for(j=0;j<=2;j++)
				{
					printf("Enter Number for 2nd array : ");
					scanf("%d",&b[i][j]);
				}
			}
			for(i=0;i<=1;i++)
			{
				for(j=0;j<=2;j++)
				{
					printf("Number are [%d] [%d] : %d\t ",i,j,b[i][j]);
				}
					printf("\n");
			}
			
			for(i=0;i<=1;i++)
			{
				for(j=0;j<=2;j++)
				{
					printf("\nAddition is :  %d",a[i][j]+b[i][j]);
				}
				
			}
		}
		
//		4

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
