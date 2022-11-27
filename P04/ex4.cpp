#include "etree.cpp"

int eval(const etree* t){
    if(t->left == nullptr && t->right == nullptr)
        return t->value;

    switch(t->value){
        case ADD:
            return eval(t->left) + eval(t->right);
        case SUB:
            return eval(t->left) - eval(t->right);
        case MUL:
            return eval(t->left) * eval(t->right);
        case DIV:
            return eval(t->left) / eval(t->right);
    }

    return 0;
}