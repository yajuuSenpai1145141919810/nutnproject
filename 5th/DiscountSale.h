#ifndef DISCOUNTSALE_H
#define DISCOUNTSALE_H
#include "Sale.h"
#include <string>
using namespace std;

class DiscountSale : public Sale{
public:
	DiscountSale();                                                      //�w�]�غc��
	DiscountSale(string theItem, double thePrice, double theDiscount);   //�غc��
	void setDiscount(double newDiscount);                                //set function								
	double getDiscount() const;                                          //get function
	virtual double bill() const;                                         //�D�حn�D���禡......
	virtual void PrintInfo();
private:
	double discount;
};

#endif