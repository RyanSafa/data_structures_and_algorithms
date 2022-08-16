#include <algorithm>
#include <iostream>

struct Node {
  int data;
  Node *next;
};

Node *first = NULL;

void create(int A[], int n) {
  first = new Node;
  first->data = A[0];
  Node *dummy = first;
  for (int i = 1; i < n; i++) {
    Node *new_node = new Node;
    new_node->data = A[i];
    dummy->next = new_node;
    dummy = new_node;
  }
}

void display() {
  Node *dummy = first;
  while (dummy != NULL) {
    std::cout << dummy->data << " ";
    dummy = dummy->next;
  }
  std::cout << std::endl;
}

void rec_display(Node *p) {
  if (p != NULL) {
    std::cout << p->data << " ";
    rec_display(p->next);
  }
}

int count(Node *p) {
  int count = 0;
  while (p != NULL) {
    count++;
    p = p->next;
  }
  return count;
}

int count_rec(Node *p) {
  if (p != NULL) {
    return 1 + count_rec(p->next);
  } else {
    return 0;
  }
}

int sum_rec(Node *p) {
  if (p != NULL) {
    return p->data + sum_rec(p->next);
  } else {
    return 0;
  }
}

int rec_max(Node *p) {
  if (p != NULL) {
    int max = p->data;
    return std::max(max, rec_max(p->next));
  } else {
    return 0;
  }
}

int search(Node *p, int key) {
  int count = 0;
  while (p != NULL) {
    if (p->data == key) {
      return count;
    }
    count++;
    p = p->next;
  }
  return -1;
}

int search_bring_to_front(Node *&p, int key) {
  Node *curr = p;
  Node *prev = NULL;
  int index = 0;

  if (curr == NULL) {
    return -1;
  }

  if (curr->data == key) {
    return index;
  }

  while (curr != NULL) {
    if (curr->data == key) {
      prev->next = curr->next;
      curr->next = p;
      p = curr;
      return index;
    }
    index++;
    prev = curr;
    curr = curr->next;
  }

  return -1;
}

void insert(Node *p, int index, int data) {
  Node *new_node = new Node;
  new_node->data = data;

  if (index == 0) {
    new_node->next = p;
    first = new_node;
    return;
  } else {
    int curr_index = 0;

    while (p != NULL) {
      if (curr_index == index - 1) {
        Node *tmp_next = p->next;
        p->next = new_node;
        new_node->next = tmp_next;
        return;
      }
      curr_index++;
      p = p->next;
    }

    p->next = new_node;
    new_node->next = NULL;
  }
}

void remove(Node *p, int index) {
  if (index == 0) {
    Node *tmp_next = first->next;
    first->next = NULL;
    delete first;
    first = tmp_next;
  } else {
    int curr_index = 0;
    while (p->next != NULL) {
      if (curr_index == index - 1) {
        Node *tmp_next = p->next->next;
        p->next->next = NULL;
        delete p->next;
        p->next = tmp_next;
        return;
      }
      p = p->next;
      curr_index++;
    }
    return;
  }
}
// 1 -> 2 -> 3 -> 4 -> 5
int main() {
  int arr[] = {1, 2, 3, 4, 5};
  create(arr, 5);
  display();
  insert(first, 5, 100);
  display();
  remove(first, 0);
  display();
  return 0;
}
