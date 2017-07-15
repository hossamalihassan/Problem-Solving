#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char word[10009];
    cin>>word;
    word[0] = toupper(word[0]);
    cout<<word;
    return 0;
}