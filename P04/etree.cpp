
//! Expression tree
struct etree {
  int value;     // Number or operator
  etree* left;   // Left operator
  etree* right;  // Right operator
};

//! Operation contants
enum { ADD = '+', SUB = '-', MUL = '*', DIV = '/' };

//! Builds a new expression tree with op, left and right operands
etree* build(int op, etree* left, etree* right) {
  return new etree { op, left, right };
}

//! Releases the memory allocated to et and successors.
void destroy(etree* et) {
  if (et != nullptr) {
    destroy(et->left);
    destroy(et->right);
    delete et;
  }
}

//! Builds a new expression tree representing an integer value.
etree* number(int value) {
  return build (value, nullptr, nullptr);
}

//! Builds a new expression tree representing an addition.
etree* add(etree* left, etree* right) {
  return build(ADD, left, right);
}

//! Builds a new expression tree representing a subtraction.
etree* sub(etree* left, etree* right) {
  return build(SUB, left, right);
}

//! Builds a new expression tree representing a multiplication.
etree* mul(etree* left, etree* right) {
  return build(MUL, left, right);
}

//! Builds a new expression tree representing a division.
etree* div(etree* left, etree* right) {
  return build(DIV, left, right);
}
