#include <iostream>

using namespace std;

// Sparse vector node.
struct svnode {
  int position;  // Position.
  int value;     // Value (different from 0)
  svnode* next;  // Successor node (if non-null, position < next->position)
};

//! Build a new sparse vector node.
svnode* build(int position, int value, svnode* svn) {
  if (svn == nullptr || position < svn->position) {
    svn = new svnode { position, value, svn };
  } else {
    svn->next = build(position, value, svn->next);
  }
  return svn;
}

//! Destroy a sparse vector node and its successors.
void destroy(svnode* svn) {
  while (svn != nullptr) {
    svnode* aux = svn->next;
    delete svn;
    svn = aux;
  }
}

//! Print the contents (position-value pairs).
void print(const svnode* svn) {
  cout << "[";
  while (svn != nullptr) {
    cout << ' ' << svn->position 
         << ">" << svn->value;
    svn = svn->next;
  }
  cout << " ]";
}