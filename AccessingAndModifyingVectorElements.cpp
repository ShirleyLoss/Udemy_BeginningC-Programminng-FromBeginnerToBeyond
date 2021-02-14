#include <iostream>
#include <vector>

using namespace std;

int main(){

  vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
  
  cout << vowels[0] << endl;
  cout << vowels[4] << endl;
  
  vector <int> test_scores(3); //3 elements all initialized to zero
  vector <int> test_scores2(3, 100); //3 elements all initialized to 100
  
  vector <int> test_scores3 {100, 98, 89};
  
  cout << "\nTest scores using array syntax: " << endl;
  cout << test_scores3[0] << endl;
  cout << test_scores3[1] << endl;
  cout << test_scores3[3] << endl; //Won't get Error if out of index
  
  cout << "\nTest scores using vector syntax: " << endl;
  cout << test_scores3.at(0) << endl;
  cout << test_scores3.at(1) << endl;
  cout << test_scores3.at(2) << endl; //Get Error if out of index. Eg. cout << "This should cause an exception!!" <<  test_scores.at(10);
  
  cout << "\nThere are " << test_scores3.size() << "scores in the vector" << endl;
  
  cout << "\nEnter 3 test scores: " << endl;
  cin >> test_scores3.at(0);
  cin >> test_scores3.at(1);
  cin >> test_scores3.at(2);
  
  cout << "\nUpdated test scores: " << endl;
  cout << test_scores3.at(0) << endl;
  cout << test_scores3.at(1) << endl;
  cout << test_scores3.at(2) << endl;
  
  cout << "\nEnter a test scores to add to the vector: " << endl;
  int score_to_add {0};
  cin >> score_to_add;
  test_scores3.push_back(score_to_add);
  
  cout << "\nEnter one more test scores to add to the vector: " << endl;
  cin >> score_to_add;
  test_scores3.push_back(score_to_add);
  
  cout << "\nTest scores are now: " << endl;
  cout << test_scores3.at(0) << endl;
  cout << test_scores3.at(1) << endl;
  cout << test_scores3.at(2) << endl;
  cout << test_scores3.at(3) << endl;
  cout << test_scores3.at(4) << endl;
  
  cout << "\nThere are now " << test_scores3.size() <<  "scores in the vector" << endl;
  
  //Example of a 2D-vector
  
  vector <vector<int>> movie_ratings
  {
    {1, 2, 3, 4},
    {1, 2, 4, 4},
    {1, 3, 4, 5}
  };
  
  cout << "\nHere are the movie rating for review #1 using array syntax: " << endl;
  cout << movie_ratings[0][0] << endl;
  cout << movie_ratings[0][1] << endl;
  cout << movie_ratings[0][2] << endl;  
  cout << movie_ratings[0][3] << endl;
  
  cout << "\nHere are the movie rating for review #1 using vector syntax: " << endl;
  cout << movie_ratings.at(0).at(0) << endl;
  cout << movie_ratings.at(0).at(1) << endl;
  cout << movie_ratings.at(0).at(2) << endl;
  cout << movie_ratings.at(0).at(3) << endl;
  
  return 0;
}
