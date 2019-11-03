
#include<stdio.h>
#include<stdlib.h>

typedef struct _node{
	int data;
	struct _node *next;
}Linklist;

Linklist *Reverse(Linklist *head){
	Linklist *tmp,tmp1;
	Linklist *tmpre;
	Linklist *reverse;
	tmp = head->next;
	tmpre->next = NULL;
	reverse = tmpre;
	while(head->next != NULL ){
		while(tmp->next != NULL ){
			tmp = tmp->next;
		}
		tmp1 = tmp;
		tmp = head->next;
		while(tmp->next->next != NULL){
			tmp = tmp->next;
		}
		tmp->next = NULL;
		tmpre->next = tmp1;
		tmpre = tmpre->next;
		free(tmp1);
		tmp = head->next;
	}
	
	
	return reverse;

}

