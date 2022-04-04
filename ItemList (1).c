/*#include "Student.h"
#include <stdio.h>


int main(void) {
	struct item {
		int sku;
		double price;
	};

	struct Itemlist{
		int linenumber;
		struct item itemstore;
	};

	struct Itemlist itemlist[4] = { {1234,{14,15.9}},{1235,{2,3.5}},{1236,{3,1.2}} };
	printf("Enter linenumber");
	scanf_s("%d", &itemlist[3].linenumber);
	printf("Enter sku under item line number");
	scanf_s("%d", &itemlist[3].itemstore.sku);
	//itemlist[3].itemstore.sku = 1237;
	itemlist[3].itemstore.price = 6.78;
	int i;
	//for(i = 0; i < 4; i++) {
	printf("line Number is :%d\n ", itemlist[3].linenumber);
	printf("SKU Number is :%d\n ", itemlist[3].itemstore.sku);
	//}
	//printf(i);
}*/