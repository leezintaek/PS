#include <iostream>
#include <sstream>
using namespace std;

int main(){
    string input;
    getline(cin, input);
    istringstream iss(input);

    char word;
    int count = 0;

    while(iss >> word){
        word = word-'0';
        count += word*word;
    }

    cout << count;
}