#include <iostream>
#include <sstream>
using namespace std;


struct Date{
    int day;
    int month;
    int year;
};

string dateString(Date d) {
    stringstream sstream;
    //sstream << d.month << "/";
    switch(d.month) {
        case 1: sstream << "January" << " ";
        break;
        case 2: sstream << "Febuary" << " ";
        break;
        case 3: sstream << "March" << " ";
        break;
        case 4: sstream << "April" << " ";
        break;
        case 5: sstream << "May" << " ";
        break;
        case 6: sstream << "June" << " ";
        break;
        case 7: sstream << "July" << " ";
        break;
        case 8: sstream << "August" << " ";
        break;
        case 9: sstream << "September" << " ";
        break;
        case 10: sstream << "October" << " ";
        break;
        case 11: sstream << "November" << " ";
        break;
        case 12: sstream << "December" << " ";
        break;
    }/* Hello there!*/
    sstream << d.day << ", ";
    sstream << d.year;			


    return sstream.str();
}


int main() {
    Date mlk_day = {20, 1, 2025};
    enum Month {JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};

    cout << dateString(mlk_day) << endl;


    return 0;
}



