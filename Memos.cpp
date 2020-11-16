/*
  Memos.cpp

  A (very) simple example for the refactoring Rename Method

  All in a single file to stress process

  Michael L. Collard
  collard@uakron.edu
*/

class Memos {
  public:
    int size() const;

    int length() const;
};

int Memos::size() const { return length(); }

int Memos::length() const { return 0; }

#include <cassert>
#include <iostream>

int main() {

    {
        Memos m;
        assert(m.length() == 0);
    }
}
