#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node* next;
};
typedef struct node Node;

Node* create_list(int n){
    int info;
    Node* head = (Node*)malloc(sizeof(Node));
	Node* curr = head;
	for(int i=1; i<=n; i++){
		printf("Enter the data to insert in the node number %d:", i);
		scanf("%d", &info);
		curr->data = info;
		if(i==n){
			curr->next = NULL;
		}
		else{
			curr->next=(Node*)malloc(sizeof(Node));
		}
		curr=curr->next;
	}
	free(curr);
	return head;
}
void print_list(Node* linkedlist){
    Node* tmp = linkedlist;
    printf("%d", tmp->data);
    tmp=tmp->next;
	while(tmp!=NULL){
	    printf("-%d", tmp->data);
	    tmp=tmp->next;
	}
	free(tmp);
}
int main(){
	int n;
	printf("Enter the number of nodes in the linked list:");
	scanf("%d", &n);

	//creation of linked list
	Node* linkedlist = create_list(n);
	//a linked list is created in the function create_list and is returned into this variable called linkedlist
	printf("linked list created successfully ");

	//print the linked list
	//we can't pass a tmp variable pointing to the head node of the created linked list simple because it wouldn't contain the entire linked list
	//we have to pass the full linked list
	print_list(linkedlist);

	//freeing the memory
	free(linkedlist);
	return 0;
}
