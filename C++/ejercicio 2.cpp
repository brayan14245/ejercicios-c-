#include "iostream"
#include "string"

using namespace std;

int main()
{
    cout << "Hola" << "\n" << "Por favor ingrese su nombre:" << "\n";
  
   string nombre;
   cin >> nombre;

   cout << "Bienvenido al sistema " << nombre << "\n";


   return 0;
}