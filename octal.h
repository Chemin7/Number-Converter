#ifndef OCTAL_H_INCLUDED
#define OCTAL_H_INCLUDED
#include <string>
#include <math.h>
#include "reverse.h"

using namespace std;

void intToOct(string str_num,string *ptr){

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
}

void octToInt(string str_num,string *ptr){

    int sum;
    int n = str_num.length();

    sum=0;
    for(int i = n-1,j=0; i >= 0;i--,j++ ){
        sum += (str_num[i]-'0') * pow(8,j);
    }
    cout<<"Suma :"<<sum<<endl;
    *ptr = to_string(sum);

}

#endif // OCTAL_H_INCLUDED
