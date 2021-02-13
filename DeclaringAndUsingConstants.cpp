#include <iostream>

using namespace std;

int main(){

  
  cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
  cout << "\nHow many rooms would you like cleaned? ";
  
  int number_of_rooms {0};
  cin >> number_of_rooms;
  
  const double price_per_room {30};
  //price_per_room = 100.0 got error because price_per_room is const, can not be changed
  const double  sale_fax {0.06};
  const int estimate_expiry{30}; //days

  cout << "\nEstimate for carpet cleaning service" << endl;
  cout << "Number of rooms: $" << number_of_rooms << endl;
  cout << "Price of room: $" << price_per_room << endl;
  cout << "Cost: $" << price_per_room*number_of_rooms << endl;
  cout << "Tax: $" << price_per_room*number_of_rooms*sale_fax <<endl;
  cout << "================================================";
  cout << "Total estimate: $" <<(30*number_of_rooms)+(30*number_of_rooms*sale_fax) << endl;
  cout << "This estimate is valid for " <<  estimate_expiry <<  " days" << endl;
  
  return 0;

}
