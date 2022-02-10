#ifndef VALIDATE_H_INCLUDED
#define VALIDATE_H_INCLUDED

#include <string>

using namespace std;
;
bool isHexa(string str) {
    int value,a;

    a=0;
    for(int i = 0; i < str.length(); i++) {
        value = (int)str[i];
        if( (value >= 48 && value <= 57) || (value >= 65 && value <= 70) )
            a++;
        }

    return a == str.length();
    }

bool isDigit(string num) {

    int value,a;

    a=0;
    for(int i = 0; i < num.length(); i++) {
        value = (int)num[i];
        if(value >= 48 && value <= 57)
            a++;

        }

    return a == num.length() && num.length() != 0;

    }

bool isBit(string bit){

    int value,a;

    a=0;
    for(int i = 0; i < bit.length(); i++) {
        if(bit[i] == '1' || bit[i] == '0')
            a++;
        }

    return a == bit.length();
    }



#endif // VALIDATE_H_INCLUDED
