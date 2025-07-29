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
// Quick sort algorithm implementation
// Time complexity: O(n logn)
// Space complexity: O(logn)

int pivot(int Array[],int pivotindex,int rightindex)
{
  int swapindex=pivotindex;
  for (size_t i = pivotindex+1; i <=rightindex; i++)
  {
    if(Array[pivotindex]>Array[i])
    {
      swapindex++;
      Sortswap(Array,swapindex,i);
    }
    /* code */
  }
  Sortswap(Array,pivotindex,swapindex);
  return swapindex;
}
void quiksort(int Array[],int firstindex,int lastindex)
  {
    if(firstindex>=lastindex) return;
    int pivotindex=pivot(Array,firstindex,lastindex);

    quiksort(Array,firstindex,pivotindex-1);
    quiksort(Array,pivotindex+1,lastindex);
    
  }
//merge sort algorithm implementation
//time complexity :O(n logn)
//space complexity:O(n)
void merge(int Array[],int firstindex,int midindex,int lastindex )
{
   int  leftarraysize=midindex-firstindex+1;
  int rightarraysize=lastindex-midindex;

  vector<int> LeftArray(leftarraysize);
  vector<int> RightArray(rightarraysize);
  for (size_t i = 0; i < leftarraysize; i++)
  {
    LeftArray[i]=Array[firstindex+i];
  }
  for (size_t j = 0; j < rightarraysize; j++)
  {
    RightArray[j]=Array[midindex+1+j];
    /* code */
  }
  
  int index=firstindex;
  int i=0;
  int j=0;
  while(i<leftarraysize && j<rightarraysize)
  {
     if(LeftArray[i]<=RightArray[j])
    {
      Array[index]=LeftArray[i];
      index++;
      i++;
    }
    else
    {
      Array[index]=RightArray[j];
      index++;
      j++;
    }
    
    /* code */
  }
  while (i<leftarraysize)
  {
    Array[index]=LeftArray[i];
    index++;
    i++;
    /* code */
  }
  while(j<rightarraysize) 
  {
    Array[index]=RightArray[j];
    index++;
    j++;
    /* code */
  }


}
void mergesort(int Array[],int firstindex,int lastindex)
{
  if(firstindex>=lastindex)  return;
int midindex=firstindex+(lastindex-firstindex)/2;
mergesort(Array,firstindex,midindex);
mergesort(Array,midindex+1,lastindex);
merge(Array,firstindex,midindex,lastindex);
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
  
    int n=size(v)/sizeof(v[0]);
    quiksort(v, 0, n-1);
    printvalue(v, n);
    // Uncomment the following lines to test other sorting algorithms
     Bubblesort(v, n);
    // Insertionsort(v, n);
    selectionsort(v, n);
     mergesort(v, 0, n-1);
    // cout << "Sorted array using Merge Sort:" << endl;
    // printvalue(v, n);
    
    // Uncomment the following line to print "Hello, World!"

  
 //   cout << "Hello, World!" << endl;
    return 0;
}