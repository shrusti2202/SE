#include<stdio.h>
main (){
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
