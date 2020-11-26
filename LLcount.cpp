#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* next;
};
typedef struct node Node;

void count_nodes(Node* list){
	int cnt=0;
	if(list==NULL){
		//list is empty
		printf("\n Number of nodes = %d", cnt);
	}
	else{
		//linked list contains at least one node
		cnt=1;
		Node* tmp=list;
		while(tmp->next!=NULL){
			tmp=tmp->next;
			cnt++;
		}
		printf("\n Number of nodes = %d", cnt);
	}
}
int main(){
	Node a = {10, NULL};
	Node b = {20, NULL};
	Node c = {30, NULL};
	Node d = {40, NULL};
	//Node e = {50, NULL};
	//Node f = {60, NULL};
	//Node g = {70, NULL};
	a.next=&b;
	b.next=&c;
	c.next=&d;
	//d.next=&e;
	//e.next=&f;
	//f.next=&g;
	Node* list = &a;
	count_nodes(list);
	return 0;
}