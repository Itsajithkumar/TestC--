#include<iostream>
#include<vector>
using namespace std;
int main() {
   
    vector<int> v ={23,11,34,1,23,98,2,34};
   int slow=0;
   int fast=0;

   for(int i=0;i<v.size();i++){
      int currentindex=i;
      for (int j = i; j < v.size(); j++)
      {

        if(v[currentindex]<v[j])
        {
            currentindex=j;
        }
        /* code */

      }
      int temp = v[i];
        v[i] = v[currentindex];
        v[currentindex] = temp;
      
       }
  for (int i = 0; i < v.size(); i++)
  {
    //cout << v[i] << endl;
   
  }
  
 //   cout << "Hello, World!" << endl;
    return 0;
}