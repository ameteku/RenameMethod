/*
  Memos.cpp

  A (very) simple example for the refactoring Rename Method

  All in a single file to stress process

  Michael L. Collard
  collard@uakron.edu
*/

class Memos {
  public:
    int length() const;
    int size() const;
};

int Memos::length() const { return size(); }
int Memos::size() const { return 0; }

#include <iostream>

int main() {

    {
        Memos m;
        assert(m.length() == 0);
    }
}
