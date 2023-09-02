#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count;
    printf("Welcome to the supermarket\n");
    printf("the items we have eggs,milk,cheese,chicken,meat and oil\n if you need eggs enter 1\n if you need milk enter 2\n if you need cheese enter 3\n if you need chicken enter 4\n if you need meat enter 5\n if you need oil enter 6\n if you need sugar enter 7\n if you need cola enter 8\n if you need rice enter 9\n");
    printf(" Enter total number of products you need to buy :");
    scanf("%d", &count);
    int product,price,shipping,total;
    int allprice;
    int allshipping;
    int i = 1;
     if(count>=2)
    {
      while(i<=count)
      {
        printf("Enter product %d you want: ",i);
        scanf("%d", &product );
        switch(product)
        {

         case 1:
           printf("product is one egg\n");
           price=3;
           shipping=2;
           break;
         case 2:
           printf("product is kilo of milk\n");
           price=30;
           shipping=3;
           break;
         case 3:
           printf("product is one kilo of cheese\n");
           price=60;
           shipping=3;
           break;
         case 4:
           printf("product is one chick\n");
           price=200;
           shipping=3;
           break;
         case 5:
           printf("product is one kilo of meat\n");
           price=350;
           shipping=5;
           break;
         case 6:
           printf("product is one oil bottle\n");
           price=250;
           shipping=3;
           break;
        case 7:
           printf("product is one kilo of sugar\n");
           price=30;
           shipping=3;
           break;
        case 8:
           printf("product is one can of Pepsi\n");
           price=10;
           shipping=3;
           break;
        case 9:
           printf("product is one kilo of rice\n");
           price=29;
           shipping=3;
           break;
     /* default:
           printf("please enter number from 1 to 9\n");*/
        }
        allshipping+=shipping;
        allprice+=price;
        total+= price+shipping;
        i++;
      }

      if (count>5)
       {
         /*  discount = (20*total)/100;*/
         /*  price_after_discount=total-discount;*/

          printf("the total price is %d\n", total);
          printf("the  discount  is %d\n",total*20/100 );
          printf("the price after discount is %d",total-(total*20/100));
          printf("thank you for shopping from our market\n");
       }
      else
       {
          printf("the  discount is 0%\n");
          printf("the all shipping is %d\n",allshipping);
          printf("the total price is %d\n",total);
          printf("thank you for shopping from our market\n");
       }

     }
     else
    {
        printf("sorry you need to buy at least two products\n");
    }
    return 0;
}




























