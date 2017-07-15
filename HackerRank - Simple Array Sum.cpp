#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
/*    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    } */
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
