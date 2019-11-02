
#include<stdio.h>
#include<stdlib.h>

typedef struct _node{
	int data;
	struct _node *next;
}Linklist;

Linklist *Reverse(Linklist *head){
	Linklist *tmp;
	Linklist *tmpre;
	Linklist *headptr;
	tmp = head->next;
	headptr = head->next;
	head->next = NULL;
	while(tmp){
		tmpre = tmp;
		tmp = tmp->next;
		tmpre->next = head->next;
		head->next = tmpre;
	}
	Linklist *headptr1;
	headptr1 = headptr;
	while(headptr){
		headptr = headptr->next;
		free(headptr1);
		headptr1 = headptr;
	}
	
	return head;

}
