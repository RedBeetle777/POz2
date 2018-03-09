#ifndef WYRAZENIEZESP_HH
#define WYRAZENIEZESP_HH



#include "LZespolona.hh"


/*!
 * Modeluje zbior operatorow arytmetycznych.
 */
enum Operator { Op_Dodaj, Op_Odejmij, Op_Mnoz, Op_Dziel };



/*
 * Modeluje pojecie dwuargumentowego wyrazenia zespolonego
 */
struct WyrazenieZesp {
  LZespolona   Arg1;   // Pierwszy argument wyrazenia arytmetycznego
  Operator     Op;     // Opertor wyrazenia arytmetycznego
  LZespolona   Arg2;   // Drugi argument wyrazenia arytmetycznego

};


/*
 * Funkcje ponizej nalezy zdefiniowac w module.
 *
 */


void WyswietlLiczbe(double  WyrZ1, double  WyrZ2);
LZespolona Oblicz(WyrazenieZesp  WyrZ);
void Wyswietl(WyrazenieZesp WyrZ);
void WczytajLiczbe(double  WyrZ1, double  WyrZ2);
void WczytajWyrazenie(WyrazenieZesp  WyrZ);

#endif
