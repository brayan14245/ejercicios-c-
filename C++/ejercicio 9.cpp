#include <iostream>
using namespace std;
int main()
{
  
  float Nota1;
  float Nota2;
  float Nota3;
  float Examen_final;
  float Definitiva;
  
  cout << "ingrese la primera nota: ";
  cin >> Nota1;
  cout << "ingrese la segunda nota: ";
  cin >> Nota2;
  cout << "ingrese la tercera nota: ";
  cin >> Nota3;
  cout << "ingrese la examen final nota: ";
  cin >> Examen_final;
  Definitiva=  ((Nota1 * 0.25) + (Nota2 * 0.25) +     
  (Nota3 * 0.20) + (Examen_final * 0.30));
  cout << "el valor de la materia es: " << Definitiva;
  return 0;

}