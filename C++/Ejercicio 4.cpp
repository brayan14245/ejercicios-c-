#include "iostream"
using namespace std;
int edad;
int main(){
  int edad;
  cout<<"ingresa una edad: ";
  cin>> edad;
  if (edad >= 18 ){
    cout<<"eres mayor de edad; ";
  }
  else{
    cout<<"eres menor de edad";
    
  }
  return 0;
}

