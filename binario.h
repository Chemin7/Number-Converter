#ifndef BINARIO_H_INCLUDED
#define BINARIO_H_INCLUDED
#include <string>

#include "reverse.h"

using namespace std;

void intToBit(int num,string* ptr) {
    int cociente=0;
    int residuo=0;

    while(num > 0) {
        cociente=num/2;
        residuo=num%2;
        num=cociente;
        *ptr+=to_string(residuo);
        }
        reverseStr(*ptr);
    }


void bitToInt(int bit,int* ptr_num){
    string strBit;
    int sum;

    strBit = to_string(bit);
    sum=0;
    for(int i = strBit.length()-1,j=1;i >= 0;i--,j+=j){
        if(strBit[i] == '1')
            sum +=j;


    }
    *ptr_num = sum;

}

#endif // BINARIO_H_INCLUDED
