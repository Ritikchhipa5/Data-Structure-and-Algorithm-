#include<iostream>
using namespace std;
void QuickSort(int* , int , int);
int pratition(int*, int, int);
void swap(int*, int*);
void output(int*, int*);
//main Function
int main()
{
  int input;
  cin >> input;
  int A[input];
  // get the input
  for (int i = 0; i < input; i++) {
    cin >> A[i];
  }
  //Calcutae the size of an Array
  int size = sizeof(A) / sizeof(A[0]);
  cout << size;
  QuickSort(A, 0, size - 1);
  //Print the whole array values
  for (int i = 0; i < size; i++) {
    cout << A[i] << " ";
  }
  return 0;
}

//QuickSort function
void QuickSort(int Array[], int left, int right) {

  if (right > left) {
    //Calculate the pivot point,
    int pivot = pratition(Array, left, right);
    //Dvide Array into subarray
    QuickSort(Array, left, pivot - 1);
    QuickSort(Array, pivot + 1, right);
  }
}
//get value for seprate value
int pratition(int A[], int left, int right) {
  int pivot = A[right];
  int i = left - 1;

  for (int j = left; j < right; j++) {
    if (A[j] < pivot) {
      i++;
      swap(&A[i], &A[j]);
    }
  }
  swap(&A[i + 1], &A[right]);
  return (i + 1);
}

//Swap the value
void swap(int *A, int *B) {
  int temp = *A;
  *A = *B;
  *B = temp;
}
