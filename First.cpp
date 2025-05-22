#include<iostream>
#include<vector>
using namespace std;
int main() {
   
    vector<int> v ={11,34,1,23,45,98,12,34};
    int slowcount=0;
    int fastcount=0;
    cout << v.size() << endl;
   while (fastcount < v.size() && fastcount+1 < v.size()) {
    cout << "fastcount: " << fastcount << endl;
       fastcount += 2;
       slowcount++;
    }
    cout << " " << v[slowcount] << endl;

  
  
    //cout << "Hello, World!" << endl;
    return 0;
}