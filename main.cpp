#include <iostream>
#include <memory>

// helper struct
struct Node {
  int value;
  std::unique_ptr<Node> next;

  Node(int v) : value{v}, next{nullptr} {}
};

class LinkedList {
private:
  // unique_ptr to indicate the head of the list.
  std::unique_ptr<Node> m_head;

public:
  LinkedList() : m_head{nullptr} {}
  // no destructor - unique_ptr cleans up after itself.

  void push_front(int value) {}
  void pop_front() {}
  void print() const {}
  bool is_empty() const {}
};

int main() { return 0; }
