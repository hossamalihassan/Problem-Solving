#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float f,c;
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
        cin>>f;
        c = round((f - 32) * (5.0/9));
        cout<<c<<" ";
    }
    return 0;
}