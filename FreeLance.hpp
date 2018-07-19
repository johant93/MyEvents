
//  MyEvents
//
//  Created by JOHANN on 18/07/2018.
//  Copyright © 2018 JOHANN. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "AbstractEvent.hpp"

//string Name, typeOfEvent;
//string note[10] ;
//Date date;
//Address address ;
//int Phone, numOfGuests, price ;

using namespace std;


class FreeLance : public AbstractEvent {
    
public:
    
    FreeLance(string name,Date d,string type,int guests,int pr): AbstractEvent(name,d,type,guests,pr) {} ;
    
    void setTypeofPresta(string TOpresta){
        TypePresta = TOpresta ;
    }
    
    friend ostream& operator<<(ostream& os,const FreeLance& other){
        os << "Freelance for "<< other.Name <<" "<< other.date << endl ;
        os <<"Type:"<< other.typeOfEvent <<" Job:"<< other.TypePresta << endl ;
        os <<"Location:"<<other.address.city <<", "<< other.address.PlaceName << endl ;
        os <<"Number of Guests:"<< other.numOfGuests << endl ;
        os << "Total:" << other.price << "nis" << endl ;
        return os;
    }
    
    
private:
    string TypePresta;
};
