#include <iostream>

using namespace std;

int main(){

  int num {0};
  const int min {10};
  const int max {100};
  
  cout << "Enter a number between " << min << " and " << max << ": " << endl;
  cin >> num;
  if (num > min){
      cout << "====================If statement 1 =======================" << endl;
      cout << num  << " is greater than "  << min << endl;
      
      int  diff {num - min};
      cout << num << " is " << diff << " greater than " << min << endl;
  } 
  
  if (num < max){
      cout << "\n====================If statement 2 =======================" << endl;
      cout << num  << " is less than "  << min << endl;
      
      int  diff {max - num};
      cout << num << " is " << diff << " less than " << max << endl;
  } 
  
  if (num >= min && num <= max){
      cout << "\n====================If statement 3 =======================" << endl;
      cout << num << " is in range" << endl;
      cout << "This means statements 1 and statements 2 must also display!!" << endl;
  }
  
  if (num == min || num == max){
      cout << "\n====================If statement 4 =======================" << endl;
      cout << num << " is right on a boundary" << endl;
      cout << "This means all 4 statements display!!" << endl;
  }
  
  cout << endl;
  return 0;
}
