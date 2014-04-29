cCollections
============
java-like dynamic data structures for C language

Progress
============
- implemented
  - LinkedList
  - Stack
  - Queue

Usage
============
for your specific data structure the following changes are necessary:
  - modify Container.h
    - define your custom data element in "struct tContainer"
  - modify Container.c
    - add custom comparison implementation to method "int containerEquals(Container* a, Container* b)"
