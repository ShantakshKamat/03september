#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/
Node* reverseLinkedList(Node *head)
{
    // Write your code here
	//Base Case
	if(head==NULL ||head->next==NULL){
		return head;
	}

	Node *smallhead=reverseLinkedList(head->next);//stores the head of the smaller subpart/remaining list solved
	
	head->next->next=head;//if 3->5 then 5 will point to 3 now
	head->next=NULL; // 3 will point to NULL now
	return smallhead;
}

