#include <iostream>
using namespace std;
int main() {
    int tc;
    cin>>tc;
    int a[tc];
    int b[tc];
    for(int i=0;i<tc;i++){
      cin>>a[i]>>b[i];
      if(a[i] < b[i]){
        cout<<a[i]<<" ";
      }if(b[i] < a[i]){
        cout<<b[i]<<" ";
    }
    }
}