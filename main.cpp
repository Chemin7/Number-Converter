#include <iostream>
#include "math.h"
#include "hexadecimal.h"
#include "binario.h"
#include "validate.h"
#include "octal.h"

using namespace std;

void inputFunc(string ,int ,void (*) (string ,string* )) ;

string str_g;
string *ptr_g(&str_g);

void factorial(string str_num, string *ptr){
    int num(stoi(str_num));

    unsigned long sum = 1;
    for (int i = 1; i <= num; i++) {
        sum *= i;
        }

    *ptr = to_string(sum);


}

void menu() {
    int opc,a,b,i;
    string input,str_a,str_b;
    int* ptr_a(&a),*ptr_b(&b);


    cout<<" M E N U"<<endl
        <<"1)Suma"<<endl
        <<"2)Resta"<<endl
        <<"3)Multiplicacion"<<endl
        <<"4)Division"<<endl
        <<"5)Potencia"<<endl
        <<"6)Factorial"<<endl
        <<"7)Decimal- Binario"<<endl
        <<"8)Binario- Decimal"<<endl
        <<"9)Decimal- Octal"<<endl
        <<"10)Octal- Decimal"<<endl
        <<"11)Decimal- Hexadecimal"<<endl
        <<"12)Hexadecimal- Decimal"<<endl
        <<"13) Salir"<<endl;

    cin>>opc;

    i=0;
    if(opc >= 1 && opc <= 5) {

        i=0;
        while(i==0) {
            cout<<"Ingrese el primer numero: ";
            cin>>str_a;
            cout<<"Ingrese el segundo numero: ";
            cin>>str_b;
            if(isDigit(str_a) && isDigit(str_b)) {
                *ptr_a = stoi(str_a);
                *ptr_b = stoi(str_b);
                i++;
                }

            }

        switch(opc) {
            case 1:
                printf("%i + %i = %i",a,b,a+b);
                break;
            case 2:
                printf("%i - %i = %i",a,b,a-b);
                break;
            case 3:
                printf("%i * %i = %i",a,b,a*b);
                break;
            case 4:
                printf("%i / %i = %i",a,b,a/b);
                break;
            case 5:
                printf("%i ^ %i = %i",a,b,pow(a,b));
                break;

            }
        cout<<endl;
        }
    else if(opc>= 6 && opc <=12) {
        switch(opc) {
            case 6:
                inputFunc("Intoduce un numero para sacarle factorial: ",1,&factorial);
                cout<<str_g<<endl;
                break;

            case 7:
                inputFunc("Intoduce un numero decimal: ",1,&intToBit);
                cout<<str_g<<endl;
                break;

            case 8:
                inputFunc("Intoduce un numero binario: ",2,&bitToInt);
                cout<<str_g<<endl;
                break;
            case 9:
                inputFunc("Intoduce un numero decimal: ",1,&intToOct);
                cout<<str_g<<endl;
                break;
            case 10:
                inputFunc("Intoduce un numero octal: ",1,&octToInt);
                cout<<str_g<<endl;
                break;
            case 11:
                inputFunc("Intoduce un numero decimal: ",1,&intToHexa);
                cout<<str_g<<endl;
                break;
            case 12:
                inputFunc("Intoduce un numero hexadecimal: ",3,&hexaToInt);
                cout<<str_g<<endl;
                break;

            }
        }
    }

//User interface
void inputFunc(string input,int valid,void (*func) (string,string* )) {
    int i;
    string num;

    i=0;


    do {
        cout<<input<<endl;
        cin>>num;

        switch(valid) {
            case 1:
                if(isDigit(num))
                    i++;
                break;
            case 2:
                if(isBit(num))
                    i++;
                break;
            case 3:
                if(isHexa(num))
                    i++;
                break;

            }

        }
    while(i==0);

    func(num,ptr_g);
    }



int main() {
    char opc;

    do {
        menu();
        cout<<"Continuar [S]i o [N]o: ";
        cin>>opc;
        system("cls");
        }
    while(opc == 's');


    return 0;
    }
