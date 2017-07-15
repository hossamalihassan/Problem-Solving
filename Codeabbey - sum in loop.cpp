#include <iostream>

using namespace std;

int main()
{
    int tc,co=0;
    cin>>tc;
    int arr[tc];
    for(int i=0;i<tc;i++){
        cin>>arr[i];
        co = co + arr[i];
    }
   cout<<co;
   return 0;
}

