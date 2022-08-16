#include <iostream>

struct Stack {
  int size;
  int top;
  int *stack;
};

void create(Stack *st) {
  std::cout << "Enter Size" << std::endl;
  std::cin >> st->size;
  st->top = -1;
  st->stack = new int[st->size];
}

void Display(Stack *st) {
  for (int i = st->top; i >= 0; i--) {
    std::cout << st->stack[i] << " ";
  }
  std::cout << std::endl;
}

void push(Stack *st, int x) {
  if (st->top == st->size - 1) {
    std::cout << "Stack Overflow" << std::endl;
  } else {
    st->top++;
    st->stack[st->top] = x;
  }
}

int pop(Stack *st) {
  int x = -1;
  if (st->top == -1) {
    std::cout << "Stack Underflow" << std::endl;
  } else {
    x = st->stack[st->top--];
  }
  return -1;
}

int peek(Stack st, int index) {
  int x = -1;
  if (st.top - index + 1 < 0) {
    std::cout << "Invalid Index" << std::endl;
  }
  x = st.stack[st.top - index + 1];
  return x;
}

bool isEmpty(Stack st) { return st.top == -1; }

bool isFull(Stack st) { return st.top == st.size - 1; }

int stackTop(Stack st) {
  if (!isEmpty(st)) {
    return st.stack[st.top];
  }
  return -1;
}

int main() {
  Stack st;
  create(&st);
  push(&st, 10);
  push(&st, 20);
  push(&st, 30);
  push(&st, 40);
  std::cout << peek(st, 1) << std::endl;
  Display(&st);
  return 0;
}
