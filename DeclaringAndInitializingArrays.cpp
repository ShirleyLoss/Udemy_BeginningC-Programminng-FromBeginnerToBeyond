#include <iostream>

using namespace std;

int main(){

  //Declare an Array: Element_Type array_name [constant number of elements];
  int test_score [5]
  
  int high_score_per_level [10];
  
  const int days_in_year {365};
  double hi_temperatures [days_in_year];
  
  //Best practice is to always initialize arrays when you declare them.
  int test_score [5] {100, 95, 99, 87, 99}; // the array will be {100, 95, 99, 87, 99}
  int high_score_per_level [10] {3, 5}; // the array will be {3, 5, 0, 0, 0, 0, 0, 0, 0, 0};
  
  const double days_in_year {365};
  double hi_tenoeratures [days_in_year] {0}; // init all to zero
  
  int another_array [] {1, 2, 3, 4, 5}; // size automatically calculated

  return 0;
}
