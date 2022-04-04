// Price List - Variable Form
 // priceList.c

#include <stdio.h>
#define PRICELIST 3

int main(void)
{
    //double price1 = 10.60, price2 = 23.45, price3 = 5.89;
    double price[PRICELIST] = { 10.60,23.45,5.89 };
    double sum = 0;
    
    printf(" Item     Price\n");
    for (int i = 0; i < PRICELIST; i++) { //for i=0 , 0<3 ? TRUE enter loop
        printf("    %d%10.2lf\n", i+1,price[i]);  //display 1 10.60
        sum = sum + price[i]; // 0+price[0]=0+10.60 // sum=10.60 
                               // sum=10.60+price[1]=10.60+23.45=34.05
                               // sum = 34.05+price[2]=34.05+5.89=39.94
        ////for i=1 , 1<3 ? TRUE enter loop
        ////display 2 23.45
        //sum=10.60+price[1]=10.60+23.45=34.05
        // control goes back to line # 14
        //////increment i for i=2 , 2<3 ? TRUE enter loop
        ////display 3 5.89
         // sum = 34.05+price[2]=34.05+5.89=39.94
         //   // control goes back to line # 14
        ////increment i for i=3 , 3<3 ? FALSE exit loop
    }
    
      printf("Total%10.2lf\n",sum); // display Total 39.94

    return 0;
}
