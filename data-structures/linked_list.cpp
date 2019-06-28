#include <iostream>
using namespace std;

struct Node {
  int val;
  Node *next;
};

template <class T>
class LinkedList {
  public:
    ~LinkedList() {
      Node *current = start;
      while (current != NULL) {
        Node *to_be_deleted = current;
        current = current->next;
        delete to_be_deleted;
      }
    }

    void insert(T x) {
      Node *current = start;
      while (current->next != NULL) {
        current = current->next;
      }
      Node *new_node = new Node();
      new_node->val = x;
      current->next = new_node;
    }

    void remove(T x) { 
      Node *prev;
      Node *current = start;
      while (current != nullptr && current->val != x) {
        prev = current;
        current = current->next;
      }
      if (current != nullptr) {
        if (current->next != nullptr) {
          prev->next = current->next;
        } else {
          prev->next = nullptr;
        }
        delete current;
      }
    }

    void print() {
      Node *current = start->next;
      cout << "[";
      while (current != nullptr) {
        cout << current->val;
        current = current->next;
        if (current != nullptr) {
          cout << ", ";
        }
      }
      cout << "]" << endl;
    }
  private:
    Node *start = new Node();
};

int main() {
  LinkedList<int> linked_list = LinkedList<int>();
  int option = 0;
  int input;
  do {
    cout << "Current list: ";
    linked_list.print();
    cout << "\n1. Insert";
    cout << "\n2. Delete";
    cout << "\n0. Exit";
    cout << "\n\nEnter your option: ";
    cin >> option;
    switch (option) {
      case 1:
        cout << "Insert: ";
        cin >> input;
        linked_list.insert(input);
        break;
      case 2:
        cout << "Delete: ";
        cin >> input;
        linked_list.remove(input);
        break;
      default:
        break;
    }
  } while (option != 0);
}
