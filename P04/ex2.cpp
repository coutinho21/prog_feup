#include "node.cpp"

node* remove(int x, node* n){
    node* now = n;
    node* bef = nullptr;
    while(now != nullptr && now->value != x){
        bef = now;
        now = now->next;
    }

    if(now != nullptr){
        if(bef == nullptr)
            n = now->next;
        else
            bef->next = now->next;
    }
    delete now;
    return n;
}