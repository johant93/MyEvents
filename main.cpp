
//
//  main.cpp
//  MyEvents
//
//  Created by JOHANN on 18/07/2018.
//  Copyright © 2018 JOHANN. All rights reserved.
//

#include <iostream>

#include "FreeLance.hpp"


using namespace std;
int main(int argc, const char * argv[]) {

    string name, type, day,date,time , city , placename ;
    string note[10];
    Address adr;
    int guests, pr;
    cout << "Input the date:(example: mar 30.07.08 18:00)" << endl;
    cin >> day >> date >> time ;
    cout << "name ?" << endl;
    cin >> name ;
    cout << "type of event and number of guests ?" << endl ;
    cin >> type >> guests;
    cout << "place and city ?(baitalayam tlv)" << endl ;
    cin >> adr.PlaceName >> adr.city;
    cout << "Price ?" << endl ;
    cin >> pr ;
    cout << "note (10 words max or enter \"next\"):" << endl ;
    int i = 0;
    string line="";
    while(getline(cin, line) && i < 10 && line !="next"){
        //cin >>
        note[i++] = line;
    }
   // ): Name(name),date(d),typeOfEvent(type),numOfGuests(guests),price(pr) {} ;
   Date d(day,date,time);
    
    try
    {
    FreeLance fr1(name,d,type,guests,pr);
        std::cout << fr1 << endl ;
    }
    catch(JokePriceException const& e){
        cerr << "Error:" << endl ;
        e.thePrice() ;
        }
    return 0;
}
