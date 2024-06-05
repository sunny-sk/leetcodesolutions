#include<vector>
#include<iostream>

using namespace std;


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
  for(int i=1; i<n; i++){
    int x = A[i];
    int j = i-1;

    while(A[j] > x && j > -1){
      // swap
      A[j+1] = A[j];
      j--;
    }
    A[j+1] = x;
  }

  display(A);
}