#include <iostream>
#include "DiscountSale.h"
#include <string>
using namespace std;

DiscountSale::DiscountSale() : Sale(), discount(0){}                              //�w�]�غc��
DiscountSale::DiscountSale(string theItem, double thePrice, double theDiscount)   //�غc��
	: Sale(theItem, thePrice), discount(theDiscount){}

void DiscountSale::setDiscount(double newDiscount){                               //�]�wdiscount
	discount = newDiscount;
}

double DiscountSale::getDiscount() const{                                         //���odiscount��
	return discount;
}

double DiscountSale::bill() const{                                                //���obill(�b��)
	double f = discount / 100;
	return (1-f)*getPrice();
}

void DiscountSale::PrintInfo(){                                                   //��X��T
	cout << "item : " << getItem() << endl;
	cout << "price : $" << getPrice() << endl;
	cout << "discount : " << getDiscount() << "%" << endl;
	cout << "price after discount : $" << bill() << endl;
	cout << "----------------------------------" << endl;
}