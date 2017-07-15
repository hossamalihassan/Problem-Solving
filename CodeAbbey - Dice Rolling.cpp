#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
 	int tc,res;
 	float num;
 	cin>>tc;
 	for(int i=0;i<tc;i++){
 		cin>>num;
 		res = floor(num*6)+1;
 		cout<<res<<" ";
 	}
  return 0;
}