#include <iostream>

using namespace std;
int main() {
  int a[300];
  int max,min;
  for(int i=0;i<300;i++){
    cin>>a[i]; 
  }
  max=a[0],min=a[0];
    for(int j=0;j<300;j++){
    if(a[j] > max){
      max=a[j];
    }if(a[j] < min){
      min=a[j];
    }
    }
  cout<<max<<" "<<min;
  return 0;
}