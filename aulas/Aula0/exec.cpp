#include <iostream>
using namespace std;

// cout => print to console
// variable => type and name and value => int age = 20;
// endl => new line
// cin => input from console
// Executável: g++ nome arquivo .pp -o nome do executavel

int main() {
  int age;
  string name;
  float height;
  int width;

  cout << "Enter your name and age: " << endl;

  cin >> name;
  cin >> age;
  cin >> height >> width;

  cout << "Hello " << name << ", you are " << age << " years. " << height << " " << width << endl;
  cout << endl;

  if (age >= 18) {
    cout << name << " age >= 18" << endl;
  } else if (age >= 16) {
    cout << "age >= 16" << endl;
  }
   else {
    cout << "age < 16" << endl;
   }


  return 1;
}