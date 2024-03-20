/*

Given a sorted doubly linked list and an element X, your need to insert the element X into correct position in the sorted DLL.

Note: The DLL is sorted in ascending order


Example:

3 <-> 5 <-> 8 <-> 10 <-> 12 
x = 9

output
3 <-> 5 <-> 8 <-> 9 <-> 10 <-> 12 

Your Task:
You only need to complete the function sortedInsert() that takes head reference and x as arguments and returns the head of the modified list.The resulting DLL should be in ascending order. The printing and checking tasks are done by the driver code.

Expected Time Complexity: O(n).
Expected Auxiliary Space: O(1).

Constraints:
1 <= Number of nodes <= 103

*/


// function should insert a new node in sorted way in
// a sorted doubly linked list
//Return the head after insertion
Node* sortedInsert(Node *head, int x)
{
	// Code here
	struct Node *t, *curr, *prev;
	 t = (struct Node*)malloc(sizeof(struct Node));
	 t->data = x;
	if(head && head->data >= x){
	    t->next = head;
	    t->prev= NULL;
	    head->prev = t;
	    head = t;
	}else{
	    prev = NULL;
	    curr = head;
	    while(curr && curr->data < x ){
	        prev = curr;
	        curr = curr->next;
	    }
	    t->next = prev->next;
	    t->prev = prev;
	    prev->next = t;
	    if(curr){
	        curr->prev = t;
	    }
	}
	
	return head;
};