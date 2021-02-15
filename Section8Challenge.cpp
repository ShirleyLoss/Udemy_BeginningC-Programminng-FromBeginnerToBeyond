#include <iostream>

using namespace std;

int main(){

  int total {0};
  
  cout << "Enter an amount in cents: " << endl;
  cin >> total;
  
  int dollars{0};
  dollars = total/100;
  total = total%100;
  
  int quarters{0};
  quarters = total/25;
  total = total%25;
  
  int dimes{0};
  dimes = total/10;
  total = total%10;
  
  int nickels{0};
  nickels = total/5;
  total = total%5;
  
  int pennies{0};
  pennies = total;

  cout << "You can provide this change as follows: " << endl;
  cout << "dollars: " << dollars << endl;
  cout << "quarters: " << quarters << endl;
  cout << "dimes: " << dimes << endl;
  cout << "nickels: " << nickels << endl;
  cout << "pennies: " << pennies << endl;
  
  return 0;

}
