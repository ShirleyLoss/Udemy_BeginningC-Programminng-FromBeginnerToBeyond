# include <iostream>

using namespace std;

int main(){

  char vowels [] {'a', 'e', 'i', 'o', 'u'};
  cout << "\n The first vowel is:" << vowels[0] << endl;
  cout << "The last vowel is: " << vowels[4] << endl;
  
  //cin >> vowels[5]; Out of bounds - don't do this!
  
  double hi_temps [] {90.1, 89.8, 77.5, 81.6};
  cout << "\nThe first high temperature is: " << hi_temps[0] << endl;
  hi_temps[0] = 100.7;
  cout << "The first high temperature is now: " << hi_temps[0] << endl;
  
  int test_scores1 [5];
  cout << "\nFirst score at index 0: " << test_scores1[0] << endl;
  cout << "\nSecond score at index 1: " << test_scores1[1] << endl;
  cout << "\nThird score at index 2: " << test_scores1[2] << endl;
  cout << "\nForth score at index 3: " << test_scores1[3] << endl;
  cout << "\nFifth score at index 4: " << test_scores1[4] << endl;
  
  int test_scores2 [5] {100, 90};
  cout << "\nFirst score at index 0: " << test_scores2[0] << endl;
  cout << "\nSecond score at index 1: " << test_scores2[1] << endl;
  cout << "\nThird score at index 2: " << test_scores2[2] << endl;
  cout << "\nForth score at index 3: " << test_scores2[3] << endl;
  cout << "\nFifth score at index 4: " << test_scores2[4] << endl;
  
  int test_scores3 [] {100, 90, 80, 70, 60};
  cout << "\nFirst score at index 0: " << test_scores3[0] << endl;
  cout << "\nSecond score at index 1: " << test_scores3[1] << endl;
  cout << "\nThird score at index 2: " << test_scores3[2] << endl;
  cout << "\nForth score at index 3: " << test_scores3[3] << endl;
  cout << "\nFifth score at index 4: " << test_scores3[4] << endl;
  cout << "\nEnter 5 test scores: ";
  cin >> test_scores3[0];
  cin >> test_scores3[1];
  cin >> test_scores3[2];
  cin >> test_scores3[3];
  cin >> test_scores3[4];
  cout << "\nThe updated array is: " << endl;
  cout << "\nFirst score at index 0: " << test_scores3[0] << endl;
  cout << "\nSecond score at index 1: " << test_scores3[1] << endl;
  cout << "\nThird score at index 2: " << test_scores3[2] << endl;
  cout << "\nForth score at index 3: " << test_scores3[3] << endl;
  cout << "\nFifth score at index 4: " << test_scores3[4] << endl;
  
  cout << "\nNotice what the value of the array name is: " << test_scores3 << endl;
  
  return 0;
}
