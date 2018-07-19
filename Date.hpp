
//  MyEvents
//
//  Created by JOHANN on 18/07/2018.
//  Copyright © 2018 JOHANN. All rights reserved.
//

#include <iostream>
#include <stdio.h>

using namespace std;
class Date {
public:
    Date(string theday,string fulldate, string t): day(theday),date(fulldate), time(t) {}
   
    string getDay(){
        return day;
    }
    string getTime(){
        return time;
    }
    
    friend ostream& operator<<(ostream& os,const Date& other){
        os << other.day <<" "<< other.date <<" à "<< other.time;
        return os;
    }
private:
    string day,date,time;
};
