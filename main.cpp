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

  void push_front(int value) {
    std::unique_ptr<Node> temp{std::make_unique<Node>(value)};
    temp->next = std::move(m_head);
    m_head = std::move(temp);
  }

  void pop_front() {
    if (m_head == nullptr) {
      return;
    }
    m_head = std::move(m_head->next); // since its a smart pointer, moving to
                                      // next will safely delete the old Node
  }

  void print() const {
    const Node *current = m_head.get();
    while (current) {
      std::cout << current->value << ' ';
      current = current->next.get();
    }
    std::cout << '\n';
  }

  bool is_empty() const { return m_head == nullptr; }
};

int main() { return 0; }
