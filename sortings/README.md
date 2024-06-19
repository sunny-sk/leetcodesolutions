

# Sorting Techniques

All these sorting techniques are Comparison based sorting, they sort by comparing one element with the other

1. **Bubble sort - O(n) - O(n^2)**
      
      It compares each element with the rest of all items in an array & find the largest and put it at the last by swaping elements, for 5 elements there will be 4 passes, for 4 elements there will be 3 passes similarly for n elements there will be n-1 passes, for 5 elements there will be 4 + 3 + 2 + 1 = 10 comparisons, similarly for n elements there will be (n-1) + (n-2) + ...+ 4 + 3 + 2 + 1 = [n(n-1)]/2 comaprisons which is O(n^2). for 5 elements the total number of comparison is 4 ( swaps at max in pass 1 ) + 3 ( swaps at max in pass 2 ) + 2 ( swaps at max in pass 3 ) + 1 ( swaps at max in pass 4 ) = 10 (at max 10 swap), similarly for n elements there may be O(n^2) swaps in worst scenario. if list is alreay sorted then the time complexity is O(n) if list is unsorted then it is O(n^2)  
      - It is stable
      - It is not adaptive by default in nature, but we can make it
      - It first sort largest element
      - For k paas it will give kth largest element from last
      
2. **Insertion sort - O(n) - O(n^2)**
    in insertion sort we consider that the first element will always be sorted for, will start from index 1, in the first pass we will compare the current element
    with it's all previous elements & place it in it's sorted position.
    for 5 element there will be 4 passes, simlarly for n element there will be n-1 passes.
    for 5 element there will be 1+2+3+4=10 comparisons, similarly for n elements there will be (n-1) + (n-2) + ...+ 4 + 3 + 2 + 1 = [n(n-1)]/2 comaprisons which is O(n^2). 
    for 5 element there will be 1+2+3+4=10 swaps, similarly for n elements there will be (n-1) + (n-2) + ...+ 4 + 3 + 2 + 1 = [n(n-1)]/2 swaps which is O(n^2).
    if list is alreay sorted then the time complexity is O(n) if list is unsorted then it is O(n^2)  

      - It is stable
      - It is adaptive by default in nature
      - Intermediate result will not be useful
      - It is suitable for linked list


# Bubble sort vs Insertion sort

|         | Bubble sort           | Insertion sort  |   |
| ------------- |:-------------| :-----| :----- |
| Min. comparison | O(n) | O(n) | Already in Ascending |
| Max. comparison | O(n^2)      | O(n^2)   | in Descending |
| Min. swap | O(1) - no swap    | O(1) - no swap | Already in Ascending |
| Max. swap |  O(n^2)  | O(n^2)    | in Descending |
| Adaptive | YES      |  YES | |
| Stable | YES      |  YES  | |
| Suitable for Linked list | NO   |  YES | |
| is K passes useful  |  YES   |    NO | |



3. **Selection sort - O(n^2)**
    in the selection sort first we select the position & find an element for that. for 6 element there will be 5 passes, similarly for n element there will be n-1 passes,
    for swap if there are 6 element there will be 5 swap minimum, similarly for n element there will be n-1 swaps,
    for comparison if there are 6 element then 5+4+3+2+1 = 15 comparisons, similarly for n element there will be (n-1) + (n-2) + ...+ 4 + 3 + 2 + 1 = [n(n-1)]/2 swaps which is O(n^2)
      - It is not stable
      - It is not adaptive
      - It first sort smallest element
      - intermediate result is usefull
      - For k paas it will give kth largest element


4. **Heap sort - O(nlogn)**
5. **Merge sort - O(nlogn)**
6. **Quick sort - O(nlogn) - O(n^2)**
7. **Tree sort - O(nlogn)**
8. **Shell sort - O(n^3/2)**

# Index based sorts. 
They consume lot off space

9. **count sort - O(n)**
10. **Bucket sort/Bin sort - O(n)**
11. **Radix sort - O(n)**



# Criteria for analysis



- Numbers of comparison
     - It decides the time complexity
- Number of swaps
- Adaptive
    - If they are already sorted then sorting algorithm should take less number of time. then it is called adaptive
- Stable 
    - If there're duplicate elements, after sorting their order should not changed, order should be maintain. then it is stable
- Extra memory
    - few sorting techniques require extra memory except for the elements