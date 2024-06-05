#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> arr, int n){
    for(int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
    cout << endl;
}

int main()
{
    vector<int> A = {8,5,7,3,2};
    int n = A.size();
    display(A, n);
    
    // bubble sort
    int isSorted;
    for(int i=0; i<n-1; i++){
        isSorted = 0;
        for(int j=0; j<n-1-i;j++){
            if(A[j] > A[j+1]){
                // swap
                int x = A[j];
                A[j] = A[j+1];
                A[j+1] = x;
                isSorted = 1;
            }
        }
        if(isSorted == 0){
            break;
        }
    }
    
    display(A, n);

    return 0;
}
