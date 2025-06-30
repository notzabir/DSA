/******************************************************************************

Linked List - Delete a node without the head pointer

*******************************************************************************/
#include <iostream>

using namespace std;

void deleteNode(ListNode* node){
    ListNode* curr = node->next;
    node->data = curr->data;
    node->next = curr->next;
}