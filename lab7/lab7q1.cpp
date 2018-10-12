#include<iostream>
using namespace std;
int exponent(int i,int j){
  if(j==0){
    return 1;
  }
   else{
     return i*exponent(i,j-1);
   }
}
int main()
{
int a,b;
exponent(a,b);
cout<<"Enter base and exponential :"<<endl;
cin>>a;
cin>>b;
cout<<"a^b is :"<<exponent(a,b)<<endl;
return 0;
} 

