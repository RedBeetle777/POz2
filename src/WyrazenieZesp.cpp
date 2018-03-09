#include "WyrazenieZesp.hh"
#include <iostream>
using namespace std;


/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */

/*
void Wyswietl(WyrazenieZesp WyrZ)
{
    if (WyrZ.Op == 0)
    {
        cout << WyrZ.Arg1 << '+' << WyrZ.Arg2 << endl;
    }else if (WyrZ.Op == 1)
    {
        //cout << WyrZ.Arg1 << '-' << WyrZ.Arg2 << endl;
    }else if (WyrZ.Op == 2)
    {
        //cout << WyrZ.Arg1 << '*' << WyrZ.Arg2 << endl;
    }
}
*/
void WyswietlLiczbe(double WyrZ1, double  WyrZ2)
{
    cout << WyrZ1 << WyrZ2 << endl;
}

LZespolona Oblicz(WyrazenieZesp  WyrZ)
{
    if (WyrZ.Op == 0)
    {
        double R = WyrZ.Arg1.re + WyrZ.Arg2.re;
        double I = WyrZ.Arg1.im + WyrZ.Arg2.im;
        
        WyswietlLiczbe(R, I);
    } else if(WyrZ.Op == 1)
    {
        double R = WyrZ.Arg1.re - WyrZ.Arg2.re;
        double I = WyrZ.Arg1.im - WyrZ.Arg2.im;
        
        WyswietlLiczbe(R, I);
    }else if(WyrZ.Op == 2)
    {
        double R = WyrZ.Arg1.re * WyrZ.Arg2.re + WyrZ.Arg1.im * WyrZ.Arg2.im;
        double I = WyrZ.Arg1.re * WyrZ.Arg2.im + WyrZ.Arg1.im * WyrZ.Arg2.re;
        
        WyswietlLiczbe(R, I);
    }
}

void WczytajLiczbe(double  WyrZ1, double  WyrZ2)
{
    cin >> WyrZ1 >> WyrZ2;
}

void WczytajWyrazenie(WyrazenieZesp  WyrZ)
{
    cin >> WyrZ.Arg1.re >> WyrZ.Arg1.im;
    cin >> WyrZ.Arg2.re >> WyrZ.Arg2.im;
}








