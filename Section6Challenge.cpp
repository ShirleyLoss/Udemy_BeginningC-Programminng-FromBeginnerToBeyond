#include <iostream>

using namespace std;

int main(){

  
  cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
  
  cout << "\nHow many small rooms would you like cleaned? ";
  int number_of_small_rooms {0};
  cin >> number_of_small_rooms;
  
  cout << "\nHow many large rooms would you like cleaned? ";
  int number_of_large_rooms {0};
  cin >> number_of_large_rooms;
  
  const double price_per_small_room {25};
  const double price_per_large_room {35};
  const double  sale_tax {0.06};
  const int estimate_expiry{30}; //days

  cout << "\nEstimate for carpet cleaning service" << endl;
  cout << "Number of small rooms: $" << number_of_small_rooms << endl;
  cout << "Number of large rooms: $" << number_of_large_rooms << endl;
  cout << "Price of small room: $" << price_per_small_room << endl;
  cout << "Price of large room: $" << price_per_large_room << endl;
  double cosePrice {price_per_small_room*number_of_small_rooms + price_per_large_room*number_of_large_rooms};
  cout << "Cost: $" << cosePrice << endl;
  cout << "Tax: $" << cosePrice*sale_tax <<endl;
  cout << "================================================";
  cout << "Total estimate: $" << cosePrice*(1+sale_tax) << endl;
  cout << "This estimate is valid for " <<  estimate_expiry <<  " days" << endl;
  
  return 0;

}
