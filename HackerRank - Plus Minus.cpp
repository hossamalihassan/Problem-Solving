#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main(){
    /*int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }*/
    //fixed << setprecision(2)
    int tc,coPo=0,coNa=0,coZe=0;
    double resPo,resNa,resZe;
    cin>>tc;
    int arr[tc];
    for(int i=0;i<tc;i++){
        cin>>arr[i];
        if(arr[i] > 0)
            coPo++;
        else if(arr[i] < 0)
            coNa++;
        else if(arr[i] == 0)
            coZe++;
    }
    resPo = (float)coPo/tc;
    resNa = (float)coNa/tc;
    resZe = (float)coZe/tc;
    cout<<fixed<<setprecision(6)<<resPo<<"\n"<<resNa<<"\n"<<resZe;
    return 0;
}
