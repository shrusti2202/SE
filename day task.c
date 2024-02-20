#include<stdio.h>
int main(){
	int day;
	printf("enter your day ");
	scanf("%d",& day);
	switch(day){
			    case 0:
			printf("sunday");
			break;
				case 1:
			printf("monday");
			break;
				case 2:
			printf("tuesday");
			break;
				case 3:
			printf("wednsday");
			break;
				case 4:
			printf("thrusday");
			break;	
			case 5:
			printf("friday");
			break;
				case 6:
			printf("saturday");
			break;
				 defult:
			printf("invalid");
			break;
	}
}
