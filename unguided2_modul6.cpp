#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

// Fungsi untuk membalikkan kata menggunakan stack
string reverseWord(const string &word) {
    stack<char> charStack;
    
    // Push setiap karakter kata ke stack
    for (char ch : word) {
        charStack.push(ch);
    }
    
    // Pop setiap karakter dari stack untuk membentuk kata yang dibalik
    string reversedWord;
    while (!charStack.empty()) {
        reversedWord += charStack.top();
        charStack.pop();
    }
    
    return reversedWord;
}

int main() {
    string input;
    cout << "Masukkan kalimat dengan minimal 3 kata: ";
    getline(cin, input);

    // Split input string menjadi kata-kata
    stringstream ss(input);
    string word;
    vector<string> words;
    while (ss >> word) {
        words.push_back(word);
    }
    
    // Periksa jika jumlah kata minimal 3
    if (words.size() < 3) {
        cout << "Input harus mengandung minimal 3 kata." << endl;
        return 1;
    }
    
    // Balikkan setiap kata dan simpan dalam vector baru
    vector<string> reversedWords;
    for (const string &word : words) {
        reversedWords.push_back(reverseWord(word));
    }
    
    // Cetak setiap kata yang sudah dibalik
    cout << "Hasil :" << endl;
    for (const string &reversedWord : reversedWords) {
        cout << reversedWord << " ";
    }
    cout << endl;
    
    return 0;
}
