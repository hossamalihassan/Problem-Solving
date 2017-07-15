#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
  int tc;
  cin>>tc;
  int num[3];
  for(int i=0;i<tc;i++){
  	cin>>num[0]>>num[1]>>num[2];
  	sort(num,num+3);
  	cout<<num[1]<<" ";
  }
  return 0;
}