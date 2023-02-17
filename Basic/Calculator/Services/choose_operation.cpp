#include <iostream>
using namespace std; 


int choose_operation(){
    int choose = 0; 
    cout << "Which operation do you want to use:\n1.Add\n2.Substract\n3.Multiply\n4.Divide\n5.Exit" << endl;
    cin >> choose; 
    while (choose > 4 || choose < 0){
        cout << "You did not enter a suitable number, please try again." << endl;
        cin >> choose;
    }
    return choose;
}