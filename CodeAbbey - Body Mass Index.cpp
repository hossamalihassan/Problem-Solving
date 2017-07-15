#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
 /* under           -           BMI < 18.5
		normal          -   18.5 <= BMI < 25.0
		over            -   25.0 <= BMI < 30.0
		obese           -   30.0 <= BMI
		--------------------------------------
		BMI = weight / height^2
		*/
		float tc,w,h,bmi;
		cin>>tc;
		for(int i=0;i<tc;i++){
			cin>>w>>h;
			bmi = w / pow(h,2);
			if(bmi< 18.5)
				cout<<"under ";
			else if(18.5 <= bmi && bmi < 25.0)
				cout<<"normal ";
			else if(25.0 <= bmi && bmi < 30.0)
				cout<<"over ";
			else if(30.0 <= bmi)
				cout<<"obese ";
		}
  return 0;
}