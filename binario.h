#ifndef BINARIO_H_INCLUDED
#define BINARIO_H_INCLUDED
#include <string>

#include "reverse.h"

using namespace std;

string intToBit(string str_num,string* ptr) {
    int cociente(0),residuo(0);
    string txt;

    int num = stoi(str_num);

    while(num > 0) {
        cociente=num/2;
        residuo=num%2;
        num=cociente;
        txt+=to_string(residuo);
        }
        *ptr = reverseStr(txt);

        return *ptr;
    }


string bitToInt(string bit,string* ptr){
    string strBit;
    int sum;


    sum=0;
    for(int i = bit.length()-1,j=1;i >= 0;i--,j+=j){
        if(bit[i] == '1')
            sum +=j;


    }
    *ptr = to_string(sum);

    return *ptr;

}

#endif // BINARIO_H_INCLUDED
