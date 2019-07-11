#include<iostream>
#include<cstring>
using namespace std;
int main(){
  int count=0;
  bool flag=true;
  int number[8]={8,7,6,8,4,7,8,7};
  for(int i=0;i<8;i++){
    if(number[i]==i){
      if(flag==true){
        cout<<i;
        count++;
        flag=false;
      }
      else{
        cout<<' '<<i;
        count++;
      }
    }
  }
  if(count==0){
    cout<<-1;
  }
}
