
# Leetcode solutions

Basic hits for all leetcode problems to solve it


| S.no. | Problems | Type | Hint |
| --- | --- | --- | --- |
| 1. | Two sum  | Easy | Brute force or using hashmap |
| 4. | Median of Two Sorted Arrays  | Hard | merge sorted array & then find median |
| 7. | Reverse Integer  | Medium | iterate over each digit & reverse it also check it with the max 32 bit int |
| 9. | Palindrome  | Easy |  |
| 13. | Roman to integer  | Easy | trace from end to start, subtract it previous is less then current  |
| 14. | Longest Common Prefix  | Easy | Brute force approach  |
| 26. | Remove duplicate form sorted array  | Easy | maintain a position to replace element. check current element is different from previous, increament position & swap current with the position element |
| 27. | Remove all occurence of element  | Easy | maintain a pos. to replace element. check current element is different from target element, swap current with the position element |
| 28. | Find the Index of the First Occurrence in a String | Easy | Sliding window problem, O(n*m) |
| 35. | Insertion problem  | Easy | use devide and conquer, return index if element found, if element is not found check if it's greater or smaller |
| 58. | Length of Last Word  | Easy | start tracing from end |
| 66. | Plus one  | Easy | start loop from last, add one & save carry & add it with the other elements if required, you may need bigger array if carry remains at the first element of array |  
| 67. | Add binary  | Easy | start loop from last, make string equal & save carry & add it with the other elements if required |  
| 79. | Climbing stairs  | Easy | find similaries like a fibonacci series |  
| 80. | Remove Duplicates from Sorted Array II  | Medium | manage two pointer for uniqueness & checking for atmost two & position for replacement, start with index 2  |  
| 88. | Merge two sorted array  | Easy | compare I index of both the array & put element into another array & inreament the index of smaller element array |
| 118. | Pascal triagle | Easy | require two foor loop, for row  0 & 1 is simple, for other rows calculate form it's previous row |
| 119. | Pascal triagle 2 | Easy | - |
| 121. | Best time to buy and sell stock | Easy | trace all elements, find the mininum buy amount, find maximum profit |
| 125. | Valid Palindrome | Easy | filter alphanumeric key, two pointer |
| 136. | Single number | Easy | use hashmap |
| 202. | Happy Numbers  | Easy | recursive approach  |
| 217. | Duplicate  | Easy | use set(which holds unique element & does not allow to enter same element). if element exist |
| 228. | Summay ranges | Easy | sliding window problem |
| 242. | Valid anagram | Easy | using map/(key, value) |
| 334. | Reverse string | Easy | two pointer |
| 334. | Reverse vowel of string | Easy | two pointer |
| 645. | Set mismatch | Easy | sum of n numbers or match with index |
| 2610. | Convert an Array Into a 2D Array With Conditions | Medium |  |
| 2618. | Check if Object Instance of Class | Medium |  |
| 2623. | Memoize | Medium | closures  |
| 2624. | Snail Traversal | Medium | loop all over element  |
| 2625. | Flatten Deeply Nested Array | Medium | recursion  |
| 2622. | Cache With Time Limit | Medium |   |
| 2631. | Group By | Medium |   |
| 2637. | Promise Time Limit | Medium |   |
| 2721. | Execute Asynchronous Functions in Parallel | Medium | use forloop then & catch |




# GeeksforGeeks solutions

Basic hits for all problems to solve it


| S.no. | Topic | Type | Problems | Hint |
| --- | --- | --- | --- | --- |
| 1. | Linked list | Basic | Print all elements |  trace all elements |
| 2. | Linked list | Basic | Length of linked list |  trace all elements & increament counter |
| 3. | Linked list | Basic | Node a given index |  index-1 jump |
| 4. | Linked list | Easy | finding middle element in linked list |  two pointer, increament by 2 node & other increament by 1 node |
| 5. | Linked list | Easy | Nth node from end of linked list |  two pointer, increament first pointer by N, then increament both |
| 6. | Linked list | Easy | delete a node in single linked list |  index-1 jump |
| 7. | Linked list | Easy | Remove every k’th node |  maintain a count & reset after removing nth node |
| 8. | Linked list | Easy | Delete N nodes after M nodes of a linked list |  nested loop |
| 9. | Linked list | Easy | delete-without-head-pointer |  instead of deleting the current node, copy the next node into current one & delete next to the current |
| 11. | Linked list | Medium | Segregate even & odd Using only one traversal |  maintain two different list, one for even & another is for odd |
| 13. | Linked list | Medium | Polynomial Addition |  think like merge sort |
| 14. | Linked list | Easy | Insert in a Sorted List |   |
| 15. | Linked list | Easy | Pairwise swap elements of a linked list | maintain two pointers & move them together |
| 16. | Linked list | Easy | Reverse a linked list | maintain three pointers |
| 17. | Linked list | Medium | Reverse a Linked List in groups of given size | maintain three pointers for reverse linked & t more pointer for first, last of last k reversed  |
| 20. | Linked list | Medium | Intersection Point in Y Shaped Linked Lists | count both list length, move  pointer to different & check for common or try to detect cycle using floyd loop detection   |
| 21. | Linked list | Easy | Remove duplicate element from sorted Linked List | compare it with the next element  |
| 22. | Linked list | Easy | Remove duplicates from an unsorted linked list | use hashmap  |
| 24. | Linked list | Basic | Check If Circular Linked List | check if current node is equal to   |
| 25. | Linked list | Easy | Detect Loop in linked list | floyed loop detection   |
| 26. | Linked list | Easy | Find the length of the loop |use floyd loop detection & trace the loop again using slow & fast pointer  |
| 27. | Linked list | Medium | Remove loop in Linked List |use floyd loop detection & keep pointer to head & compare slow next to first next  |
| 28. | Linked list | Medium | Add two numbers represented by linked lists | reverse both the linked lists & add the sum (create new node each time & add to third node)  |
| 30. | Linked list | Medium | Add 1 to a number represented as linked list | reverse & add (add new node if carry is there) & reverse - another approach is to look for non nine digit  |
| 32. | Linked list | Easy | Multiply two linked list | simply trace & fins sum of all elements  |
| 33. | Linked list | Medium | Merge two sorted linked lists | -  |
| 35. | Linked list | Easy | Intersection of Two Linked Lists | Use hash map  |