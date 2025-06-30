/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

Node *insertAtBeginning(Node *head, int x){
    Node *curr = new Node(x);
    curr->next = head;
    return curr;
}

Node *insertAtEnd(Node *head, int x){
    if(head == NULL){
        Node *curr = new Node(x);
        return curr;
    }
    
    Node *curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = new Node(X);
    return head;
}