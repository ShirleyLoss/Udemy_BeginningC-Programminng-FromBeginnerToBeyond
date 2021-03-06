#include <iostream>

using namespace std;

int main(){

  enum Direction{
    left, right, up, down
  };
  // Just like Create a variable type. The variable can only equal to left, right, up, or down.
  
  Direction heading{left};
  // Direction: variable type; heading: variable name; left: variable value; Similar as int num{3};
  
  switch(heading){
    case left:
      cout  << "Going left" << endl;
      break;
    case right:
      cout  << "Going right" << endl;
      break;
    case up:
      cout  << "Going up" << endl;
      break;
    case down:
      cout  << "Going down" << endl;
      break;
  }
  
  cout << endl;
  return 0;

}
