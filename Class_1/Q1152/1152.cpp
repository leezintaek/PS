#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main(){
    string input;
    getline(cin, input);
    istringstream iss(input);

    string word;
    int count = 0;

    while(iss >> word){
        ++count;
    }

    cout << count;
}