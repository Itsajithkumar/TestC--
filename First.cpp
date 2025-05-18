#include<iostream>
#include<vector>
using namespace std;
int main() {
   
    vector<int> v ={11,34,1,23,45,98,12};

    for ( int i = 0; i < v.size(); i++)
    {
        int currentindex=i;
        for (int j = i; j < v.size(); j++)
        {
            if(v[j] > v[currentindex])
            {
                currentindex=j;
            }
            /* code */
        }
        int temp = v[i];
        v[i] = v[currentindex];
        v[currentindex] = temp;
        /* code */
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
        /* code */
    }
    
    
    cout << "Hello, World!" << endl;
    return 0;
}