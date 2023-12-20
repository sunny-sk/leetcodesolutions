
# Leetcode solutions

Basic hits for all leetcode problems to solve it


S.no. | Problems | Type | Hint     
| --- | --- | --- | ---  
26. | Remove duplicate form sorted array  | Easy | maintain a position to replace element. check current element is different from previous, increament position & swap current with the position element
27. | Remove all occurence of element  | Easy | maintain a pos. to replace element. check current element is different from target element, swap current with the position element
35. | Insertion problem  | Easy | use devide and conquer, return index if element found, if element is not found check if it's greater or smaller  
66. | Plus one  | Easy | start loop from last, add one & save carry & add it with the other elements if required, you may need bigger array if carry remains at the first element of array  
88. | Merge two sorted array  | Easy | compare I index of both the array & put element into another array & inreament the index of smaller element array 
118. | Pascal triagle | Easy | require two foor loop, for row  0 & 1 is simple, for other rows calculate form it's previous row    
119. | Pascal triagle 2 | Easy |     
121. | Best time to buy and sell stock | Easy | trace all elements, find the mininum buy amount, find maximum profit   
136. | Single number | Easy | use hashmap
217. | Duplicate  | Easy | use set(which holds unique element & does not allow to enter same element). if element exist
228. | Summay ranges | Easy | sliding window problem
