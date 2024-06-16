#ifndef SALE_H
#define SALE_H
#include <string>
using namespace std;

class Sale{
public:
	Sale();                                     //�w�]�غc��
	Sale(string theItem, double thePrice);      //�غc��
	void setItem(string newItem);               //set�Mget function......
	string getItem() const;
	void setPrice(double newPrice);
	double getPrice() const;	
	virtual double bill() const;                //�D�حn�D���禡......
	double savings(const Sale& other) const;
	virtual void PrintInfo();
private:
	string item;
	double price;
};

bool operator < (const Sale& first, const Sale& second);  

#endif