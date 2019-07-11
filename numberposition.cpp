#include<iostream>
#include<cstring>
using namespace std;
int main(){
  int count=0;
  bool flag=true;
  int num;
  cin>>num;
  int number[num];
  for(int i=0;i<num;i++){
    cin>>number[i];
  }
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
