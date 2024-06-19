#include<vector>
#include<iostream>

using namespace std;

void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void display(vector<int> arr){
    for(int x: arr){
      cout<< x << " ";
    }
    cout<<endl;
}

int main(){
  vector<int> A = {8,5,7,3,2};
  display(A);
  // insertion sort
  int n  = A.size();
  for(int i=1; i<n-1; i++){
    int j,k;
    k = i;
    j = i+1;

    while(j < n){
      if(A[j] < A[i]){
        j = k;
      }
      j++;
    }
    // swap
    swap(&A[i], &A[k]);
  }

  display(A);
}