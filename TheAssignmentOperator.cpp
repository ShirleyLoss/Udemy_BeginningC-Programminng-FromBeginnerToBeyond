# include <iostream>

using namespace std;

int main(){

  int num1{10}; //const int num3{30}; then you can't change value
  int num2{20};
  
  num1 = 100;

  cout << "num1 is  " << num1 << endl;
  cout << "num2 is  " << num2 << endl;
  
  num1 = 100;

  cout << "num1 is  " << num1 << endl;
  cout << "num2 is  " << num2 << endl;
  
  num1 = num2 = 100;
  
  cout << "num1 is  " << num1 << endl;
  cout << "num2 is  " << num2 << endl;

  return 0;
}
