
//  MyEvents
//
//  Created by JOHANN on 18/07/2018.
//  Copyright © 2018 JOHANN. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include "Date.hpp"
#include "JokePriceException.hpp"

using namespace std ;

typedef struct Address Address;

struct Address{
    string city, PlaceName;
};

class AbstractEvent {
    
public:
    
   
     AbstractEvent(string name,Date d,string type,int guests,int pr): Name(name),date(d),typeOfEvent(type),numOfGuests(guests),price(pr) {
         if(pr < 600){
             throw JokePriceException(pr);
         }
     } ;
    
    void AddNote(string notes[10]){
        for (int i = 0; i<10; i++) {
            note[i] = notes[i];
        }
    }
    void setAddress(Address addr){
        address = addr ;
    }
    void setPhone(int phone){
        Phone = phone ;
    }
   // virtual void Display()=0 ;
    
//private:
    string Name, typeOfEvent;
    string note[10] ;
    Date date;
    Address address ;
    int Phone, numOfGuests, price ;
};
