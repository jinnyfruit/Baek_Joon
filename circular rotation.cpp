/*
 file name: circular rotation
 detail: using struct and array (+linked list)
 made_by: jinnyfruit
*/
#include <stdio.h>

typedef struct node {
	int key;
	struct node* next;
}Node;

int main()
{
	int arr[5] = { 0,1,2,3,4 }; //given array
	int qur[3];

	Node node[5];
	Node* head;
	int i, j, k, value;
	Node check;

	for (i = 0; i < 5; i++) {

		node[i].key = arr[i];	//save the key value

	}

	for (i = 0; i < 5; i++) {
		if (i == 4)
			node[i].next = NULL;			//no node left
		else
			node[i].next = &node[i + 1];	//point next node
	}
	head = &node[0]; //head initializing

	printf("type k value:");	//read "k"
	scanf("%d", &k);

	for (i = 0; i < k; i++) {	//rotate k times

		for (j = 0; j < 5; j++) {	//check 5 times

			if (node[j].next == NULL) {
				node[j].next = head;	//change what head is pointing
				node[j - 1].next = NULL; //put NULL in the new end of node.next
				head = &node[j];	//put first node adress into the head
			}
		}
	}

	printf("type index U wanna print from array:");
	scanf("%d %d %d", &qur[0], &qur[1], &qur[2]);

	for (i = 0; i < 3; i++) {	//i==practical size of qur array

		value = 0;

		for (j = 0; j < 5; j++) {   //move node until value==qur[i]    value가 qur[i]가 될때까지 노드 이동

			if (j == 0) {	// start from what head is pointing
				check.key = head->key;
				check.next = head->next;
			}
			else {
				check.key = (check.next)->key;
				check.next = (check.next)->next;
				value++;
			}

			if (value == qur[i]) {		//if the value matches with index, print key value
				printf("%d\t", check.key);
			}
		}
	}

}
