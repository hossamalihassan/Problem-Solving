#include <iostream>

using namespace std;

int main()
{
   string s="";
   int num; 
   cin>>num;
   for(int i=0;i<num;i++){
       cin>>s;
       if(s.size() <= 10 ){
           cout<<s<<endl;
       }if(s.size() > 10){
           cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
       }
   }
   return 0;
}

