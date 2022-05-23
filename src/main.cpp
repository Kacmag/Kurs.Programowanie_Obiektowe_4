#include <iostream>
#include "vector.hh"
#include "matrix.hh"
#include "size.h"
#include "LinearEquations.hh"
#include "LZespolona.hh"
#include <iomanip>



using namespace std;

int main()
{

   char znak;
  cin>>znak;
  if(znak== 'r')
  {
    UkladRownanLiniowych<double,MATRIXSIZE> UklRown;
  cout << endl << " Start programu " << endl << endl;
  cin>>UklRown;
  cout<<UklRown<< endl;;
  cout<<"Rozwiazanie x = (x1, x2, x3)"<<endl;
  UklRown.cramerMethod();
   cout<<std::fixed<<std::setprecision(2)<<UklRown.get_Wynik()<<endl;
   UklRown.fail();
  }
  else if(znak== 'z')
  {
       UkladRownanLiniowych<LZespolona,MATRIXSIZE> UklRown;
  cout << endl << " Start programu " << endl << endl;
  cin>>UklRown;
  cout<<UklRown<< endl;;
  cout<<"Rozwiazanie x = (x1, x2, x3)"<<endl;
  UklRown.cramerMethod();
   cout<<std::fixed<<std::setprecision(2)<<UklRown.get_Wynik()<<endl;
   UklRown.fail();
  }
  else
  {
    cerr<<"Brak odpowiedniego typu zmiennej"<<endl;
  }
 
}
