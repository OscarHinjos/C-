#include "request_user.cpp"

void reverse_word(){
    string word = request_user();
    cout << "Your word is: " << word << endl;
    cout << "Your word in reverse is: ";
    for (int i = size(word) - 1; i >= 0 ; i--){
        cout << word[i];
    }
    
}