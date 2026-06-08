#include <iostream>
#include <memory>

struct Node {
  int value;
  std::unique_ptr<Node> next;
};

int main() { return 0; }
