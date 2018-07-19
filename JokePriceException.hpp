
#include <iostream>
#include <stdio.h>
using namespace std ;

class JokePriceException : public exception {
public:
    JokePriceException(int p){
        price = p;
    }
    void thePrice() const {
        cerr << price << " nis is a joke ! stay at home and cook sushis for your family ! " << endl ;
    }
    
private:
    int price;
};
