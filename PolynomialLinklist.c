#include <stdio.h>
#include <stdlib.h>

typedef struct Polynomial {
    int coff;
    int exp;
    struct Polynomial *next;
} P;

P *head1 = NULL, *head2 = NULL, *head3 = NULL;

int Insert_Poly1() {
    int n, c, e;
    P *temp, *newnode;
    printf("Enter number of terms in Polynomial 1: ");
    scanf("%d", &n);
    int i;

    for (i = 0; i < n; i++) {
        printf("Enter coefficient and exponent: ");
        scanf("%d %d", &c, &e);

        newnode = (P*)malloc(sizeof(P));
        newnode->coff = c;
        newnode->exp = e;
        newnode->next = NULL;

        if (head1 == NULL)
            head1 = newnode;
        else {
            temp = head1;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newnode;
        }
    }
    return 0;
}

int Insert_Poly2() {
    int n, c, e;
    P *temp, *newnode;
    printf("Enter number of terms in Polynomial 2: ");
    scanf("%d", &n);
    int i;

    for (i = 0; i < n; i++) {
        printf("Enter coefficient and exponent: ");
        scanf("%d %d", &c, &e);

        newnode = (P*)malloc(sizeof(P));
        newnode->coff = c;
        newnode->exp = e;
        newnode->next = NULL;

        if (head2 == NULL)
            head2 = newnode;
        else {
            temp = head2;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newnode;
        }
    }
    return 0;
}

int Add_Poly() {
    P *p1 = head1, *p2 = head2, *temp, *newnode;
    while (p1 != NULL && p2 != NULL) {
        int c, e;
        if (p1->exp == p2->exp) {
            c = p1->coff + p2->coff;
            e = p1->exp;
            p1 = p1->next;
            p2 = p2->next;
        } else if (p1->exp > p2->exp) {
            c = p1->coff;
            e = p1->exp;
            p1 = p1->next;
        } else {
            c = p2->coff;
            e = p2->exp;
            p2 = p2->next;
        }

        newnode = (P*)malloc(sizeof(P));
        newnode->coff = c;
        newnode->exp = e;
        newnode->next = NULL;

        if (head3 == NULL)
            head3 = newnode;
        else {
            temp = head3;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newnode;
        }
    }

    while (p1 != NULL) {
        newnode = (P*)malloc(sizeof(P));
        newnode->coff = p1->coff;
        newnode->exp = p1->exp;
        newnode->next = NULL;

        if (head3 == NULL)
            head3 = newnode;
        else {
            temp = head3;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newnode;
        }
        p1 = p1->next;
    }

    while (p2 != NULL) {
        newnode = (P*)malloc(sizeof(P));
        newnode->coff = p2->coff;
        newnode->exp = p2->exp;
        newnode->next = NULL;

        if (head3 == NULL)
            head3 = newnode;
        else {
            temp = head3;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newnode;
        }
        p2 = p2->next;
    }

    return 0;
}

void display(P *head) {
    if (head == NULL) {
        printf("Empty Polynomial\n");
        return;
    }
    while (head != NULL) {
        printf("%dx^%d", head->coff, head->exp);
        head = head->next;
        if (head != NULL)
            printf(" + ");
    }
    printf("\n");
}

int main() {
    printf("Polynomial Addition using Linked List\n");

    Insert_Poly1();
    Insert_Poly2();

    printf("Polynomial 1: \n");
    display(head1);
    printf("Polynomial 2: \n");
    display(head2);

    Add_Poly();

    printf("Resultant Polynomial after Addition: \n");
    display(head3);

    return 0;
}

