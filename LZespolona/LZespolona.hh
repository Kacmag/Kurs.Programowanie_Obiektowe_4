#ifndef LZESPOLONA_HH
#define LZESPOLONA_HH
#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

/*!
 *  Plik zawiera definicje struktury LZesplona oraz zapowiedzi
 *  przeciazen operatorow arytmetycznych dzialajacych na tej 
 *  strukturze.
 */


/*!
 * Modeluje pojecie liczby zespolonej
 */
class  LZespolona {
  private:
  double   re;    /*! Pole repezentuje czesc rzeczywista. */
  double   im;    /*! Pole repezentuje czesc urojona. */
  
  
  
  public:

  LZespolona(double re=0, double im=0)
  {
    this->im=im;
    this->re=re;
    
  }
  double &set_re()
  {
    return re;
  }
  double &set_im()
  {
    return im;
  }
  double get_re()
  {
    return re;
  }
  double get_im()
  {
    return im;
  }

  
  void Wyswietl();
  bool Wczytaj(std::istream &rStrmWe);
  LZespolona Sprzezenie() ;
  double modul();

    LZespolona operator+(LZespolona Skl2);
    LZespolona operator-(LZespolona Skl2);
    LZespolona operator*(LZespolona Skl2);
    LZespolona operator/(LZespolona Skl2);
    LZespolona operator/(double Skl2);
    LZespolona operator*(double Skl2);

    bool operator==(LZespolona Skl2);
    bool operator!=(LZespolona Skl2);
    bool operator==(double Skl2);
    bool operator!=(double Skl2);





};


/*
 * Dalej powinny pojawic sie zapowiedzi definicji przeciazen operatorow
 */





ostream & operator <<(ostream &Wyj, LZespolona Skl);
istream & operator >>(istream &Wej, LZespolona &Skl);







#endif