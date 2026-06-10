# linked list (smart pointer version)
## my goal with this project
my goal was to implement a linked list using modern c++ features, specifically smart pointers and move semantics. having already implemented linked lists before, i wanted to use the project as an opportunity to become more familiar with resource ownership and memory management in c++.
## what i learned
- what smart pointers are: objects that manage dynamically allocated memory automatically, removing the need to manually call `delete`.
- how `std::unique_ptr` represents exclusive ownership of a resource and automatically deallocates memory when it goes out of scope.
- why `std::make_unique<T>()` is generally preferred when creating a `std::unique_ptr`.
- how move semantics allow ownership of resources to be transferred rather than copied.
- how smart pointers can simplify linked list operations by handling node deallocation automatically.
## challenges
the implementation itself was not particularly difficult, but it required a different way of thinking compared to using raw pointers.
operations such as `pop_front()` required me to think about ownership transfer rather than manual memory management. for example, advancing the head pointer using `std::move()` automatically causes the old node to be deallocated once it is no longer owned.
understanding when ownership should be transferred versus when a reference should be used also required some thought while designing the implementation.
## what i would do differently next time
i would likely spend more time exploring more advanced smart pointer use cases, as the linked list itself did not require much complexity beyond ownership transfer.
i would also experiment with implementing other data structures using smart pointers, as this project mainly reinforced the fundamentals of `std::unique_ptr` and move semantics rather than introducing complex linked list logic.
