#include <iostream>
using namepspace std;

//Function to reverse string.
string reverseWord(string str){
  
  string res = "";
  for(auto e : str){
      res =  e + res;
  }
  return res;
}

int main(){
  int t;
  string str;
  cin>>t; //Test Cases.
  while(t-->0){
    cin>>str;
    cout<<reverseWord(str)<<endl;
  }

}
