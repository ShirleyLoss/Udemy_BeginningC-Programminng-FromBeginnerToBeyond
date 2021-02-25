#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  int length{3}, width{5}, height{7};
  double base_cost{2.50};
  
  const int tier1_threshold{100}; //volume
  const int tier2_threshold{500}; //volume
  
  int max_dimension_length {10}; //inches
  
  double tier1_surcharge {0.10}; //10% extra
  double tier2_surcharge {0.25}; //25% extra
  
  // All dimention must be 10 inches or less
  
  int package_volume{};
  
  cout << "Welcome to the package cost calculator" << endl;
  cout << "Enter length, width, andheight of the package separated by spaces: ";
  cin >> length >> width >> height;
  
  if(length > max_dimension_length || width > max_dimension_length || height > max_dimension_length){
    cout << "Sorry, package rejected - dimension exceeded." << endl;  
  }else{
    double package_cost {};
    package_volume = length*width*height;
    package_cost = base_cost;
    if(package_volume > tier2_threshold){
      package_cost += package_cost*tier2_surcharge;
      cout << "adding tier surchage" << endl;
    }else if(package_volume > tier1_threshold){
      package_cost += package_cost*tier1_surcharge;
      cout << "adding tier surchage" << endl;
    }
    
    cout << fixed << setprecision(2); //Rounded dollars to two decimals under #include <iomanip>
    cout << "The volumn of you package is: " << package_volume << endl;
    cout << "Your package will cose $" << package_cost << "to ship" << endl;
  }
  
  cout << "" << endl;

  return 0;
}
