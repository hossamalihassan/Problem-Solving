#include <iostream>

using namespace std;

int main()
{
   int tc,res=0;;
   cin>>tc;
   int arr_1[tc];
   int arr_2[tc];
   for(int i=0;i<tc;i++){
       cin>>arr_1[i]>>arr_2[i];
       res = arr_1[i] + arr_2[i];
       cout<<res<<" ";
   }
   return 0;
}

