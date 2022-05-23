#ifndef UKLADROWNANLINIOWYCH_HH
#define UKLADROWNANLINIOWYCH_HH

#include "LZespolona.hh"
#include <iostream>
#include <cmath>
#include "matrix.hh"
#include "vector.hh"
#include <iomanip>

template <class S_Type, int S_Size>
class UkladRownanLiniowych 
{

    Matrix<S_Type,S_Size> Matriks;
    Vector<S_Type,S_Size> Wyraz_wolny;
    Vector<S_Type,S_Size> Wynik;
    Vector<S_Type,S_Size> vecFail;

    double failLength;


    public:

    Matrix<S_Type,S_Size> get_Matriks()const{return Matriks;};
    Vector<S_Type,S_Size> get_Wyraz_wolny()const{return Wyraz_wolny;};
    Vector<S_Type,S_Size> get_Wynik()const{return Wynik;};
    Matrix<S_Type,S_Size> &set_Matriks(){return Matriks;};
    Vector<S_Type,S_Size> &set_Wyraz_wolny(){return Wyraz_wolny;};

    void cramerMethod();
    void fail();

};

template <class S_Type, int S_Size>
std::istream& operator >> (std::istream &Strm, UkladRownanLiniowych<S_Type,S_Size> &UklRown)
{
   Strm>>UklRown.set_Matriks()>>UklRown.set_Wyraz_wolny();
   return Strm;
}

template <class S_Type, int S_Size>
std::ostream& operator << ( std::ostream &Strm,  const UkladRownanLiniowych<S_Type,S_Size>    &UklRown)
{
    Strm<<"Podana macierz w postaci transponowanej: "<<std::endl;
    Strm<<UklRown.get_Matriks();
    Strm<<"Wektor Wyrazów wolnych: "<<std::endl;
    Strm<<UklRown.get_Wyraz_wolny();
      return Strm;
}

template <class S_Type, int S_Size>
void UkladRownanLiniowych<S_Type,S_Size>::fail()
{
        vecFail=(Matriks*Wynik)-Wyraz_wolny;
        std::cout<<Matriks*Wynik<<endl;
        std::cout<<Wyraz_wolny<<endl;
        std::cout<<Matriks*Wynik-Wyraz_wolny<<endl;
      

       std::cout<<"Wektor bledu: Ax-b =: ("<<scientific<<vecFail<<")"<<std::endl;

       // std::cout<<"Dlugosc wektora bledu  ||Ax-b|| =: "<<scientific<<failLength<<std::endl;
}


template <class S_Type, int S_Size>
void UkladRownanLiniowych<S_Type,S_Size>::cramerMethod()
{
    S_Type Wyznaczniki[S_Size];
    S_Type Wyznacznik_Glowny;
    Matriks.gausMethod();
    Wyznacznik_Glowny=Matriks.get_Wyznacznik();
    Matrix<S_Type,S_Size>  XYZ;
    for(int i=0; i<S_Size; i++)
    {
        XYZ=Matriks;
       
        XYZ.podmianaWiersza(Wyraz_wolny,i);
   
        XYZ.gausMethod();
        Wyznaczniki[i]=XYZ.get_Wyznacznik();
    }
    if(Wyznacznik_Glowny!=0)
    {
     for(int i=0; i<S_Size; i++)
     {
         Wynik[i]=Wyznaczniki[i]/Wyznacznik_Glowny;
     }
   
    }
    else if(Wyznacznik_Glowny==0)
    {
        bool czy_nieoznaczony=true;
         for(int i=0; i<S_Size; i++)
     {
         if(Wyznaczniki[i]!=0)
         {
             std::cout<<"UKLAD SPRZECZNY!!"<<std::endl;
             czy_nieoznaczony=false;
             break;
         }
     }
     if(czy_nieoznaczony)
     {
                    std::cout<<"UKLAD NIEOZNACZONY!!"<<std::endl;
     }
        
    }
}


// template <class S_Type, int S_Size>
// void UkladRownanLiniowych<S_Type,S_Size>::cramerMethod()
// {
    
//     S_Type Wyznaczniki[S_Size];
//     S_Type Wyznacznik_Glowny;

//     Matriks.gausMethod();
//     Wyznacznik_Glowny=Matriks.get_Wyznacznik();

//     Matrix<S_Type,S_Size> XYZ;
//     for(int i=0; i<S_Size; i++)
//     {
//         XYZ=Matriks;
//         XYZ.podmianaWiersza(Wyraz_wolny,i);
//         XYZ.gausMethod();

//         Wyznaczniki[i]=XYZ.get_Wyznacznik();
//     }
//     if(Wyznacznik_Glowny!=0)
//     {
//         for(int i=0; i<S_Size; i++)
//         {
//             Wynik[i]=Wyznaczniki[i]/Wyznacznik_Glowny;
//         }
   
//     }
//     else if(Wyznacznik_Glowny==0)
//     {
//         bool czy_nieoznaczony=true;
//          for(int i=0; i<S_Size; i++)
//      {
//          if(Wyznaczniki[i]!=0)
//          {
//              std::cout<<"Ten uklad jest sprzeczny"<<std::endl;
//              czy_nieoznaczony=false;
//              break;
//          }
//      }
//      if(czy_nieoznaczony)
//      {
//                     std::cout<<"Ten uklad jest nieoznaczony"<<std::endl;
//      }
        
//     }
// }

#endif
