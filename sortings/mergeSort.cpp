/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &A, int l, int mid, int h){
    int n1 = mid-l+1;
    int n2 = h-mid;

    vector<int> leftArr;
    vector<int> rightArr;
    
    leftArr.reserve(n1);
    rightArr.reserve(n2);
    
    int k = l;
    // array copy for left part
    for (int i = 0; i < n1; i++) {
        leftArr.push_back(A[k++]);
    }
    // array copy for right part
    k = mid + 1;
    for (int i = 0; i < n2; i++) {
        rightArr.push_back(A[k++]);
    }

    // merge back to original array
    k = l;
    int i=0;
    int j=0;
    while(i<n1 && j<n2){
        if(leftArr[i] <= rightArr[j]){
            A[k++] = leftArr[i++];
        }else{
            A[k++] = rightArr[j++];
        }
    }
    for(;i<n1;i++){
         A[k++] = leftArr[i];
    }
    for(;j<n2;j++){
         A[k++] = rightArr[j];
    }
}


void merge_sort(vector<int> &A, int l, int h){
    if(l<h){
        int mid = l + (h - l) / 2;
        merge_sort(A, l, mid);
        merge_sort(A, mid+1, h);
        merge(A, l, mid, h);
    }
}



int main()
{
    vector<int> arr = {1,10,6,12,25,15,19,9,2,8,7};
    
    int h = arr.size()-1;
    int l = 0;
    merge_sort(arr, l, h);
 
    std::cout << std::endl;
    for(int x : arr){
        std::cout << x <<" ";
    }
 
    return 0;
}