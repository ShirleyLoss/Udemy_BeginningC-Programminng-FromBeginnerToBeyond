#include <iostream>
#include <vector>

using namespace std;

int main(){

  vector <char> vowels (5);
  vector <int> test_scores (10); // Vector will be automatically set to 0, don't have to explicitly myself as array.
  
  vector <char> vowels2 {'a', 'e', 'i', 'o', 'u'};
  vector <int> test_scores2 {100, 98, 89, 85, 93};
  vector <double> hi_temperatures (365, 80.0) // First parameter 365 is the initial size. Second parameter is what you want to initialize all the 365 doubles to.

  return 0;
}
