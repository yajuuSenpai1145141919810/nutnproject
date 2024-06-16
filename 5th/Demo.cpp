#include <iostream>
#include "Sale.h"
#include "Discountsale.h"
#include <string>
using namespace std;

int main(){
	Sale sale("Sport Shoes", 10.0);                               
	DiscountSale discount("Sport Shoes", 12.0, 15);
	DiscountSale discount2("Sport Shoes", 15.0, 35);

	if(sale < discount && sale < discount2){                              //��X�̫K�y��item
		cout << "Sale item is the cheapest.\n";
		cout << "----------------------------------" << endl;
	}
	else if(discount < sale && discount < discount2){
		cout << "Discounted item 1 is the cheapest.\n";
		cout << "----------------------------------" << endl;
	}
	else{
		cout << "Discounted item 2 is the cheapest.\n";
		cout << "----------------------------------" << endl;
	}
	cout << "information about sale :" << endl;
	sale.PrintInfo();
	if(discount < sale){                                                    //���sale item�Mdiscount item1
		cout << "Discounted item 1 is cheaper than Sale item.\n";
		cout << "Savings is $" << sale.savings(discount) << endl << endl;
	}
	else{
		cout << "Discounted item 1 is not cheaper than Sale item.\n";
		discount.PrintInfo();	
	}

	if(discount2 < sale){                                                   //���sale item�Mdiscount item2
		cout << "Discounted item 2 is cheaper than Sale item.\n";
		cout << "Savings is $" << sale.savings(discount2) << endl << endl;
	}
	else{
		cout << "Discounted item 2 is not cheaper than Sale item.\n";
		discount2.PrintInfo();	
	}

	system("PAUSE");
	return 0;
}