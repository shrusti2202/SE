#include<stdio.h>
int main(){
	int i,num,odd=0,even=0,sumodd=0,sumeven=0;
	for(i=0;i<10;i++){
	printf("Enter one num");
	scanf("%d",&num);
	if(num %2 ==0){
		even=even+1;
		sumeven=sumeven+num;
	}
	else{
		odd=sumodd+1;
		sumodd=sumodd+num;
    	}
	}
	printf("total enven num%d\n",even);
	printf("total odd num%d\n",odd);
	printf("total sum of even num%d\n",sumeven);
	printf("total sum of odd num%d\n",sumodd);
	
}
