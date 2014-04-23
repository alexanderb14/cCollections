cCollections
============
the goal of this project is to provide dynamic data structures for C.

Features
============
- implementation of
  - Stack
  - Queue

Usage
============
for your specific project, the following changes are necessary:
  - modify Container.h
    - define your custom data element in "struct tContainer"
  - modify Container.c
    - add custom comparison criteria to method "int containerEquals(Container* a, Container* b)" that fit your data structure
