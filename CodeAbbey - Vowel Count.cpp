#include <iostream>
using namespace std;
int main() {
    int tc,co=0;
    string word;
    cin>>tc;
    getline(cin,word);
    for(int  i=0;i<tc;i++){
      getline(cin,word);
      //cout<<word<<endl;
      for(int j=0; j<word.size(); j++){
      	char ler = word[j];
	      if(ler=='o')
	        co++;
	      if(ler=='i')
	        co++;
	      if(ler=='u')
	        co++;
	      if(ler=='a')
	        co++;
	      if(ler=='y')
	        co++;
	      if(ler=='e')
	        co++;
	      //cout<<"\t"<<ler<<" "<<co<<endl;
      }
      cout<<co<<" ";
      co=0;
    }
    return 0;
}