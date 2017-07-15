#include <iostream>
#include <cmath>
using namespace std;
int main() {
  float a,b,res;
  int tc;
  cin>>tc;
  for(int i=0;i<tc;i++){
    cin>>a>>b;
    res = round(a/b);
    cout<<res<<" ";
  }
  return 0;
}