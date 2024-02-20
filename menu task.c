#include <stdio.h>
int main() {
    char item;
    int  Qty=0,price, total;

    printf("Enter your order ");
    scanf("%c", &item);
    
    

    switch (item) {
        case 1:
			printf("pizza ");
			printf("500");
		    ans = 500*Qty;
		    printf("total payment : %d",ans);
            break;
        case '2':
			printf("burger");
			printf("250");
	    	price=price*Qty;
            break;
        case '3':
			printf("sandwich");
			printf("100");
		    price=price*Qty;

            break;
        case '4':
			printf("coffee");
			printf("150");
			price=price*Qty;

    		break;
	    default:
            printf("Invalid order \n");
    }

    // Output
    printf("\t payment:  %d\n", total);

  
}
