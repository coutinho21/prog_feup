#include "node.cpp"

node* reverse(const node* n){
    if(n == nullptr)
        return nullptr;
    
    node* out = build(n->value);
    n = n->next;
    while(n != nullptr){
        node* add = new node{n->value,nullptr,out};
        out->prev = add;
        out = out->prev;
        n = n->next;
    }
    return out;
}