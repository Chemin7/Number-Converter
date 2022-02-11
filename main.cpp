#include <iostream>
#include "math.h"
#include "hexadecimal.h"
#include "binario.h"
#include "validate.h"

using namespace std;

string inputFunc(string input,int valid,string (*func) (string num,string* ptr)) ;

string str_g;
string *ptr_g(&str_g);

factorial(unsigned long *ptr_num) {

    unsigned long sum = 1;
    for (int i = 1; i <= *ptr_num; i++) {
        sum *= i;
        }
    *ptr_num = sum;
    }

void menu() {
    int opc,a,b,i;
    unsigned long f;
    unsigned long *ptr_f(&f);
    string input,str_bit,str_a,str_b,prueba;
    int bit;
    int *ptr_bit(&bit);

    string *num=&prueba;

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
    else if(opc==6) {
        i=0;
        do {
            cout<<"Ingrese el numero para sacarle factorial: "<<endl;
            cin>>input;
            if(isDigit(input)) {
                f=stoi(input);
                i++;
                }
            }
        while(i==0);
        unsigned long temp = f;
        factorial(ptr_f);
        printf("%u! = %u",temp,f);
        }
    else if(opc>= 7 && opc <=12) {
        switch(opc) {
            case 7:
                cout << inputFunc("Intoduce un numero decimal: ",1,&intToBit)
                     << '\n';
                break;
            case 8:

                cout << inputFunc("Intoduce un numero binario: ",2,&bitToInt)
                     << '\n';

                break;
            case 9:

                break;
            case 10:
                break;
            case 11:
                cout << inputFunc("Intoduce un numero decimal: ",1,&deciToHexa)
                     << '\n';
                break;
            case 12:
                break;

            }
        }
    }

//User interface
string inputFunc(string input,int valid,string (*func) (string ,string* )) {
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
            }

        }
    while(i==0);

    return func(num,ptr_g);
    }



int main() {
    char opc;

    do{
        menu();
        cout<<"Continuar [S]i o [N]o: ";
        cin>>opc;
        system("cls");
    }while(opc == 's');


    return 0;
    }
