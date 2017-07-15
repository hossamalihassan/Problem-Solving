#include <iostream>

using namespace std;

int main()
{
   int tc,n,k,co=0;
   cin>>tc>>k;
   int arr[tc];
   for(int i=0 ;i<tc;i++){
       cin>>n;
       arr[i] = n;
   }for(int j=0;j<tc;j++){
       if(arr[j]>=arr[k-1] && arr[j] > 0 ){
           co++;
       }
   }
   cout<<co;
   return 0;
}

