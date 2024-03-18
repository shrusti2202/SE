#include<stdio.h>
main(){
	int a[2][3],i,j;
	
	for(i=0;i<=1;i++){
		for(j=0;j<=2;j++){
			printf("\nEnter number");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<=1;i++){
		for(j=0;j<=2;j++){
			printf("number are[%d][%d] : %d",i,j,a[i][j]);
		}
		printf("\n");
	}
}
