#include <iostream>
#include <stack>
#include <string>

using namespace std;


bool isPalindrome(const string &word) {
    stack<char> charStack;
    
    for (char ch : word) {
        charStack.push(ch);
    }
    
    string reversedWord;
    while (!charStack.empty()) {
        reversedWord += charStack.top();
        charStack.pop();
    }
    
    return word == reversedWord;
}

int main() {
    string word;
    cout << "Masukkan kata: ";
    getline(cin,word);
    
    if (isPalindrome(word)) {
        cout << word << " adalah palindrom." << endl;
    } else {
        cout << word << " bukan palindrom." << endl;
    }
    
    return 0;
}