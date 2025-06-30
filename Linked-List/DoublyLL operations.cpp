/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

/*----Doubly Linked List node----*/
struct node{
    int data;
    node *next;
    node *prev;
};

/*----Print the doubly linked list----*/
void printList(node *n){
    int count = 0;
    while(n != NULL){
        cout << n->data << endl;
        n = n->next;
        count++;
    }
    cout << "No. of elements in doubly linked list is : " << count << endl;
}

/*----Insert node infront of doubly linked list----*/
void push(node **head_ref, int new_data){
    node *new_node = new node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    new_node->prev = NULL;
}

/*----Insert node at a given node----*/
void insertAfter(node *prev_node, int new_data){
    if(prev_node == NULL)
    cout << "given prev node can't be null";
    
    node *new_node = new node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    
    prev_node->next = new_node;
    new_node ->prev = prev_node;
    
    if(new_node->next = NULL)
    new_node->next->prev = new_node;
}

int main()
{
    node *head = NULL;
    push(&head, 4);
    push(&head, 11);
    push(&head, -3);
    // -3 11 4
    
    insertAfter(head->next, 10);
    
    printList(head);
    
    return 0;
}