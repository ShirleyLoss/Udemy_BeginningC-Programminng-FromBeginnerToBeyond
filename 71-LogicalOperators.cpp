#include <iostream>

using namespace std;

int main(){

  int num{5};
  const int lower {10};
  const int upper {20};
  
  cout << boolalpha;
  
  //Determine if an entered integer is between two other integers
  //assume lower < upper
  
  cout << "Enter an integer - the bounds are " << lower << " and " << upper << ":" << endl;
  cin >> num;
  
  bool within_bounds{false};
 
  within_bounds = (num >= lower && num < upper);
  cout << num << " is between " << lower << " and " << upper << ": " << within_bounds << endl;
  
  //Determine if an entered integer is outside two other integers
  //assume lower < upper
  
  bool outside_bounds{false};
  outside_bounds  = (num < lower || num > upper);
  cout << num << " is outside " << lower << " and " << upper << ": " << outside_bounds << endl;
  
  //Determine if an entered integer is exactly on the boundary
  //assume lower < upper
  
  bool on_bounds{false};
  on_bounds = (num == lower || num == upper);
  cout << num << "is on one of the bounds which are " << lower << " and " << upper <<  ": " << on_bounds << endl;
    
  //Determine if you need to wear a coat based on temperature and wind speed
  bool wear_coat{false};
  double temperature{50};
  int wind_speed{20};
  
  const int wind_speed_for_coat{25};
  const double temperature_for_coat{45};
  
  cout << "\nEnter the current temperature in (F):";
  cin >> temperature;
  cout << "Enter windspeed in (mph):";
  cin >>  wind_speed;
  
  wear_coat = (wind_speed > wind_speed_for_coat || temperature < temperature_for_coat);
  cout << "Do you need to wear a coat using OR? " << wear_coat << endl;

  //Require a coat if BOTH the windspeed is too high And temperature is too low
  wear_coat = (wind_speed > wind_speed_for_coat && temperature < temperature_for_coat);
  cout << "Do you need to wear a coat using AND? " << wear_coat << endl;
  
  return 0;
  
}
