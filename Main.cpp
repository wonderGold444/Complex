#include<fstream>
#include "Complex.h"
#include <iostream>
#include<string>
#include<math.h>
using namespace std;

/*int main(){
    setlocale(LC_ALL, "ru");
    complex c1, c2,c3;
    int a;
    cout << "Введите комплексное число №1" << endl;
    cin >> c1.re>>c1.im;
    cout << "Введите комплексное число №2" << endl;
    cin >> c2.re >> c2.im;
    cout << "Для выбора операции введите соответствующее число..." << endl;
    cout << "Сложение '1' "<<endl;
    cout << "Вычитание(из 1-го 2-ое) '2' " << endl;
    cout << "Деление (1-ое на 2-ое)'3'" << endl;
    cout << "Умножение '4'" << endl;
    cin >> a;
    switch (a)
    {
    case 1:
        c3 = ComplexAddition(c1, c2);
        break;

    case 2:
        c3 = ComplexSubstraction(c1, c2);
        break;
    case 3:
        c3 = ComplexDivision(c1, c2);
        break;
    case 4 :
        c3 = ComplexMultiplication(c1, c2);
        break;
    default:
        cout << "Error..." << endl;
    }
    if(0<=a<5)
    {
        cout << c3.re << " " << c3.im << "i";
    }
}*/ //1.1
void main()
{
    setlocale(LC_ALL, "ru");
    ifstream F;
    complex c1,c2;
    int n = 0;
    int i = 0;
    double mod,mod1;
    F.open("Complex.txt");
    if (!F.is_open())
    {
        cout << "Error!" << endl;
    }
    else 
    {
        complex arr[255];
        while (!F.eof())
        {
            if(!n%2)
            F >> c1.re;
            else 
            {
                F >> c1.im;
                arr[i] = c1;
                i++;
            }
            n++;
        }
        cout << "кол-во чисел : " << n / 2<< endl;
        for(int p = 0 ; p < i ; p++)
        {
            c1 = arr[p];
            mod = c1.re * c1.re + c1.im * c1.im;
            if(p == 0)
            {
                mod1 = mod;
                c2 = c1;
            }
            else 
            {
                if(mod>mod1)
                {
                    c2 = c1;
                    mod1 = mod;
                }
            }
           
        }
        cout << c2.re << " " << c2.im;
    }
} //1.2
