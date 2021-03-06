#include <iostream>
using namespace std;

int main(){

  char letter_grade{'c'};
  
  cout << "Enter the letter grade you expect on the exam: ";
  cin >> letter_grade;
  
  switch(letter_grade){
    case'a':
    case'A':
       cout << "You need a 90 or above, study hard!" << endl;
       break;
    case'b':
    case'B':
      cout << "You need a 80-89 or above, go study!" << endl;
      break;
    case'c':
    case'C':
      cout << "You need a 70-79 for an average grade!" << endl;
      break;
    case'd':
    case'D':
      cout << "Hmm, you should strive a better grade. All you need is 60-69" << endl;
      break;
    case'f':
    case'F':
      {
      //Curly blocks. Because I am creating and declaring that character right here, I need those curlies inside the block.
      //Otherwise, if I was not declaring a variable here, I don't need curly brocks.
        char confirm{};
        cout << "Are you sure (Y/N)?";
        cin >> confirm;
        if(confirm == 'y' || confirm == 'Y')
          cout <<"OK, I guess you didn't study..." << endl;
        else if(confirm == 'n' || confirm == 'N')
          cout << "Good! Go study!" << endl;
        else
          cout << "illegal choice" << endl;
      break;
      }
    default:
      cout << "Sorry, that's not a valid grade" << endl;
  }
      
  return 0;

}
