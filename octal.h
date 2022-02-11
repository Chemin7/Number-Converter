#ifndef OCTAL_H_INCLUDED
#define OCTAL_H_INCLUDED
#include <string>
#include <math.h>
#include "reverse.h"

using namespace std;

string intToOct(string str_num,string *ptr){

    string txt;
    int num = stoi(str_num);
    int cociente(0),residuo(0);

    while(num > 0){
        cociente = num / 8;
        residuo = num%8;
        txt+= to_string(residuo);
        num = cociente;
    }
    if(str_num == "0")
        txt="0";


    *ptr = reverseStr(txt);
    return *ptr;
}

#endif // OCTAL_H_INCLUDED
