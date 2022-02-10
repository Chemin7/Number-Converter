#ifndef HEXADECIMAL_H_INCLUDED
#define HEXADECIMAL_H_INCLUDED

#include <iostream>
#include <cstdlib>
#include <string>
#include <math.h>
#include "reverse.h"

using namespace std;
void deciToHexa(int,string*);
char convertHex(int);

void convertDeci(int,string*);
void hexaToDeci(string hexa,int* num);



void deciToHexa(int numero, string* ptr) {
    int cociente=0;
    int residuo=0;
    string txt = "";
    string* ptr_txt=&txt;

    while(numero>0) {
        cociente=numero/16;
        residuo=numero%16;
        txt+=convertHex(residuo);
        numero=cociente;
        }
    *ptr = txt;
    reverseStr(*ptr);
    }

char convertHex(int num) {

    char letters[6] = {'A','B','C','D','E','F'};

    if(num >= 10 && num <=15) {
        switch(num) {
            case 10:
                return letters[0];
                break;
            case 11:
                return letters[1];
                break;
            case 12:
                return letters[2];
                break;
            case 13:
                return letters[3];
                break;
            case 14:
                 return letters[4];
                break;
            case 15:
                return letters[5];
                break;

            }

        }
    else {
        return '0' + num;
        }

}



void hexaToDeci(string hexa,int* num) {

    int sum=0;

    for(int i = hexa.length()-1, j= 0; i >= 0; i--,j++) {


        switch(hexa[i]) {
            case 'A':
                sum += pow(16,j)*10;

                break;
            case 'B':
                sum += pow(16,j)*11;

                break;
            case 'C':
                sum += pow(16,j)*12;

                break;
            case 'D':
                sum += pow(16,j)*13;

                break;
            case 'E':
                sum += pow(16,j)*14;

                break;
            case 'F':
                sum += pow(16,j)*15;

                break;
            default:
                sum += pow(16,j)*(hexa[i] - '0');


            }


        }
    *num = sum;

    }






#endif // HEXADECIMAL_H_INCLUDED
