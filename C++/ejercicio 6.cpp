#include<iostream>
using namespace std;
int main(){
  int num;
  cout<< "ingrese un numero: ";
  cin >> num;
  int i = 1;
  for (int x =1; x <= num; x++){
    cout<< x << "\t";
    i--;
  }
  return 0;
}