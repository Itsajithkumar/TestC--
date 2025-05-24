#include<iostream>
#include<vector>
using namespace std;
int main() {
   
    vector<int> v ={23,11,34,1,23,98,2,34};
   int slow=0;
   int fast=0;

   while (fast<v.size() && fast+1<v.size())
   {

    slow++;
    fast+2;

    /* code */
   }
   cout<< slow<<endl;

  
    cout << "Hello, World!" << endl;
    return 0;
}