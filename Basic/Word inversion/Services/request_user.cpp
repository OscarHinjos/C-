#include <iostream>
#include <string>

using namespace std;

string request_user() {
    string word;
    cout << "Please enter a word: ";
    getline(cin, word);

    // Validate
    if (word.empty()) {
        throw runtime_error("Error: invalid");
    }
    for (char c : word) {
        if (!isalpha(c)) {
            throw runtime_error("Error: invalid");
        }
    }

    return word;
}