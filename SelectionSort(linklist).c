#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
struct Node* insert(struct Node* head, int data);
void selectionSortList(struct Node* head);
void printList(struct Node* head);

int main() {
    struct Node* head = NULL;

    head = insert(head, 5);
    head = insert(head, 3);
    head = insert(head, 8);
    head = insert(head, 1);

    printf("Original List:\n");
    printList(head);
    selectionSortList(head);

    printf("\nSorted List:\n");
    printList(head);

    return 0;
}
struct Node* insert(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    return newNode;
}
void selectionSortList(struct Node* head) {
    struct Node *i, *j, *min;
    int temp;

    for(i = head; i != NULL; i = i->next) {
        min = i;

        for(j = i->next; j != NULL; j = j->next) {
            if(j->data < min->data) {
                min = j;
            }
        }

        if(min != i) {
            temp = i->data;
            i->data = min->data;
            min->data = temp;
        }
    }
}

void printList(struct Node* head) {
    while(head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
}
