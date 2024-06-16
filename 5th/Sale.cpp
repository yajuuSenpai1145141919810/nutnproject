#include <iostream>
#include "Sale.h"
#include <string>
using namespace std;

Sale::Sale() : price(0){                                  //�w�]�غc��
	item = "";
}
Sale::Sale(string theItem, double thePrice){              //�غc��
	item = theItem;
	if (thePrice >= 0)
		price = thePrice;
	else{
		cout << "Error: Cannot have a negative price!\n";
		exit(1);
	}
}

void Sale::setItem(string newItem){                        //�]�witem
	item = newItem;
}

string Sale::getItem() const{                              //���oitem��
	return item;
}

void Sale::setPrice(double newPrice){                      //�]�wprice
	if (newPrice >= 0)
		price = newPrice;
	else{
		cout << "Error: Cannot have a negative price!\n";
		exit(1);
	}
}

double Sale::getPrice() const{                              //���oprice��
	return price;
}

double Sale::bill() const{                                  //���obill(�b��)
	return price;
}

double Sale::savings(const Sale& other) const{              //���osaving(�x�s����)
	return (bill() - other.bill());
}

void Sale::PrintInfo(){                                     //��X��T
	cout << "item : " << getItem() << endl;
	cout << "price : $" << getPrice() << endl;
	cout << "----------------------------------" << endl;
}

bool operator < (const Sale& first, const Sale& second){     //���bill
	return (first.bill() < second.bill());
}