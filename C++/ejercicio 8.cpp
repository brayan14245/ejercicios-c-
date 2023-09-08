#include <iostream>
using namespace std;

int main() { 
  float temperatura, celcius, fahrenheit, kelvin;
  string tptemp;

  cout << "ingrese el valor de temperatura: ";
  cin >> temperatura;

  cout << "ingrese la unidad a convertir: ";
  cin >> tptemp;

  // celcius

  if (tptemp == "celcius" ) {
    celcius = temperatura;
    cout << "el valor en celcius es: " << celcius << "\n";
    fahrenheit = (temperatura * 1.8) + 32;
    cout << "el valor en fahrenheit es: " <<fahrenheit << "\n";
    kelvin = temperatura + 273.15;
    cout << "el valor en kelvin es: " << kelvin << "\n";
    
  }

  // fahrenheit

  if (tptemp == "fahrenheit" ) { 
    celcius = (temperatura -32 ) * 0.555;
    cout << "el valor en celcius es: " << celcius << "\n";
    fahrenheit = temperatura;
    cout << "el valor en fahrenheit es: " <<fahrenheit << "\n";
    kelvin = (temperatura - 32) * 0.555 +  273.15;
    cout << "el valor en kelvin es: " << kelvin << "\n";
  }

  // kelvin

  if (tptemp == "kelvin" ) { 
    celcius = (temperatura - 273.15);
    cout << "el valor en celcius es: " << celcius << "\n";
    fahrenheit = (temperatura - 273.15 ) * 1.8 + 32;
    cout << "el valor en fahrenheit es: " <<fahrenheit << "\n";
    kelvin = temperatura;
    cout << "el valor en kelvin es: " << kelvin << "\n";
  }
  
}