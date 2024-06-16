#ifndef SALE_H
#define SALE_H

#include<string>
using namespace std;

class sale {
public:
	sale();
	sale(string theitem,double theprice);

	void setitem(string newitem);
	string getitem() const;

	void setprice(double newprice);
	double getprice() const;

	virtual double bill() const;
	double savings(const sale& other) const;
	virtual void printinfo();


private:
	string item;
	double price;
};
bool operator < (const sale& first,const sale& second);

#endif // !SALE_H

