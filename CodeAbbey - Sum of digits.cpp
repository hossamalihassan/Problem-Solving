#include <iostream>
using namespace std;
int main() {
    int a,b,c,tc,num,res=0;
    cin>>tc;
    for(int i=0;i<tc;i++){
      cin>>a>>b>>c;
      num = a*b+c;
      while(num!=0){
        res += num%10;
        num = num/10;
      }
      cout<<res<<" ";
      res = 0;
    }
    return 0;
}