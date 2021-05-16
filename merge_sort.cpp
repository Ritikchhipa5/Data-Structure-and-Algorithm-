#include<iostream>
using namespace std;
void MergeSort(int*,int,int);
void Merge(int*,int,int,int);

int main()
{
  int input;
  cin>>input;
  int A[input];
  // get the input
  for(int i=0;i<input;i++){
    cin>>A[i];
  }
  //Calcutae the size of an Array
  int size = sizeof(A)/sizeof(A[0]);
  MergeSort(A,0,size);
  
  //Print the whole sorted array
  for(int i=0;i<size;i++){
    cout<<A[i]<<" ";
  }
  return 0;
}
// divide the Array into the sub-arrays 
void MergeSort(int* arr,int left,int right){
  if(right>left){
    int mid = (left+right)/2;
    MergeSort(arr, 0, mid);
    MergeSort(arr, mid+1, right);
    Merge(arr,left,mid,right);
  }
}
//  Merge function  is used for Merge divide sub arrays
void Merge(int *Arr,int left,int mid,int right){
  int Temp[right-left+1];
  int size = right-left+1;
  int i=left,j=mid+1,k=0;

// compare value to each other 
  while(i<=mid && j<=right){
    if(Arr[i]>=Arr[j]){
      Temp[k]=Arr[j];
      j++;
      k++;
    }else{
      Temp[k]= Arr[i];
      i++;
      k++;
    }
  }

  while(i<=mid){
    Temp[k] = Arr[i];
    i++;
    k++;
  }
    while(j<=right){
    Temp[k] = Arr[j];
    j++;
    k++;
  }

  // Copy all the sort values to Current Array 
  for(int i=left;i<=right;i++){
    cout<<left<<"-"<<mid<<"-"<<right<<endl;
    Arr[i]=Temp[i-left];
  }
}
