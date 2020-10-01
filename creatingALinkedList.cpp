#include <iostream>
using namespace std;

//defining a node with an integer type data and a pointer to another node

struct node {
  int data;
  struct node* next;
};

//initialising a head pointer which would be used to point to the linkedList
struct node* head = NULL;

int main() {
  cout<<head;
}