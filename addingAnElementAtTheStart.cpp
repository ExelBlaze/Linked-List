#include <iostream>
using namespace std;

struct node {
  int data;
  struct node* next;
};

struct node* head = NULL;

struct node* addingAnElementAtTheStart (struct node* head, int value) {
  struct node* newNode = new node();
  newNode->data = value;

  if (head == NULL)
  {
    head = newNode;
    return head;
  }

  newNode->next = head->next;
  head = newNode;
  return head;

}

int main() {
  addingAnElementAtTheStart(head, 50);
}