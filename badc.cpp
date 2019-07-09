#include<iostream>
#include<string>
using namespace std;
int main(){
  string data="abcdefgh";
  int len = data.length();
  for(int i=0;i<len;i++){
   if((i+1)%2!=0){
     cout<<data[i+1];
   }
   else{
     cout<<data[i-1];
   }
  }
}
