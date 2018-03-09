#include "../inc/LZespolona.hh"
#include <iostream>

using namespace std;


/*!
 * Realizuje dodanie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik dodawania,
 *    Skl2 - drugi skladnik dodawania.
 * Zwraca:
 *    Sume dwoch skladnikow przekazanych jako parametry.
 */
LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re + Skl2.re;
  Wynik.im = Skl1.im + Skl2.im;
  return Wynik;
}

LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2)
{
    LZespolona  Wynik;
    
    Wynik.re = Skl1.re - Skl2.re;
    Wynik.im = Skl1.im - Skl2.im;
    return Wynik;
}

LZespolona  operator * (LZespolona  Skl1,  LZespolona  Skl2)
{
    LZespolona  Wynik;
    
    Wynik.re = Skl1.re*Skl2.re + Skl1.im*Skl2.im;
    Wynik.im = Skl1.re*Skl2.im + Skl1.im*Skl2.re;
    return Wynik;
}

ostream & operator <<( std::ostream & out, LZespolona & v )
{
    cout << '(' << v.re << '+' << v.im << ')' << endl;
}

istream & operator >>( std::istream & in, LZespolona & v )
{
    in >> v.re;
    in >> v.im;
    
    return in;
}


void Wyswietl(LZespolona rzeczywista, LZespolona urojona)
{
    cout << "Czesc rzeczywista: " << rzeczywista.re << "Czesc urojona: " << urojona.im << endl;
}






