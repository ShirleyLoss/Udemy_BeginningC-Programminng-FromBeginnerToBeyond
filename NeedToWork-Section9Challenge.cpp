# include <iostream>

using namespace std;

int main(){

  vector<int> numbers {};
  char choice {Q};
  
  do{
    cout << "Here's the menu: " << endl;
    cout << "P - Print numbers " << endl;
    cout << "A - Add a number " << endl;
    cout << "M - Display mean of the numbers " << endl;
    cout << "S - Display the smallest number " << endl;
    cout << "L - Display the largest number " << endl;
    cout << "Q - Quit " << endl;
    cout << endl;
    cout << "Enter your choice: " << endl;
    cin >> choice;
    
    if(choice == 'P' || choice == 'p'){
      if(numbers.size() == 0){
        cout << "[] - the list is empty" << endl;
      }else{
        cout << "[";
        for(int i {0}; i < numbers.size(); i++){
          cout << numbers.at(i) << " ";
        }
        cout << "]" << endl;
      }else if(choice == 'A' || choice == 'a'){
        int num_to_add {0};
        cout << "Enter an integer to add to the list: ";
        cin >> num_to_add;
        numbers.push_back(num_to_add);
        cout << num_to_add << " added" << endl;
      }else {
        cout << "Unknown selection, please try again" << endl;
      }
    }
  }while(choice != 'Q' || choice != 'q');
  
  
  
  return 0;
}
