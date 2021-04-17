#include <iostream>

using namespace std;

int main() 

{
  int edad1, edad2;

  cout << "\nBienvenido al programa de reconocimiento de edades\n";

cout << "\nIngrese su edad\n";
cin >>edad1;

cout <<"\nIngrese la edad de su amigo\n";
cin >>edad2;

if (edad1==edad2)
{
cout <<"\nIt´s TRUE, Sus edades son identicas\n";
}

else
{
  cout <<"\nIt's FALSE, Sus edades son diferentes \n";
}

return 0;

}
