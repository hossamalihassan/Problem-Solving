#include <iostream>

using namespace std;
int main() {
  int tc,min;
  cin>>tc;
  int a[3];
  for(int i=0;i<tc;i++){
    //cin>>a[0]>>a[1]>>a[2];
    for(int j=0; j<3; j++){
       cin>>a[j];
    }
     min = a[0];
    for(int x=0;x<3;x++){
      if(a[x] < min){
        min = a[x];
      }
    }
    cout<<min<<" ";
  }
  return 0;
}