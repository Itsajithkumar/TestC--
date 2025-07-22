#include<iostream>
#include<vector>
using namespace std;
void printvalue(int Array[],int n)
{
  for(int i=0;i<n ; i++)
  {
     cout<<Array[i]<<endl;
  }
}
void Sortswap(int Array[],int firstindex,int secondindex)
{
  int temp=Array[firstindex];
  Array[firstindex]=Array[secondindex];
  Array[secondindex]=temp;
}
// Bubble sort algorithm implementation
//Time Complexity:O(n2)
//Space Complexity:O(1)
void Bubblesort(int Array[],int n)
{
  for (size_t i = 0; i < n; i++)
  {
    for (size_t j = 0; j < n-1-i; j++)
    {
      if(Array[j]>Array[j+1])
      {
        Sortswap(Array,j,j+1);
      }
      /* code */
    }
    
  }
  printvalue(Array, n);
}
//Insertion Sort algorithm implementation
// TIme Complexity:O(n2)
//space Complexity:O(1)
void Insertionsort(int Array[],int n)
{
  for (size_t i = 1; i < n; i++)
  {
    int currentvalue =Array[i];
    int j=j-1;
    while (j>=0 && Array[j]> currentvalue)
    {
       Array [j+1]=Array[j];
       Array[j]=currentvalue;
       j--;
    }
  }
  printvalue(Array, n);
}
// Selection sort algorithm implementation
//TIme complexity:O(n2)
// SpaceComplexity:O(1)
void selectionsort(int arrar[],int n)
{
    for (size_t i = 0; i < n; i++)
    {
      int currentindex=i;
      for (size_t j = i+1; j <n; j++)
      {
        if(arrar[j]<arrar[currentindex])
        {
         currentindex=j; 
        }
        /* code */
      }
      
      if(i!=currentindex)
      {
        Sortswap(arrar, i, currentindex);
      }
    }
    printvalue(arrar, n);
}
int main() {
   
    int v[] ={23,11,34,1,23,98,2,34};
  



  
 //   cout << "Hello, World!" << endl;
    return 0;
}