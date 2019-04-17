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
};

int Memos::size() const { return 0; }

#include <iostream>

int main() {

    {
        Memos m;
        assert(m.size() == 0);
    }
}
