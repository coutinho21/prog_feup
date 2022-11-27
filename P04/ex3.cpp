#include "dlnode.cpp"

dlnode* insert(dlnode* dln, int k, int v){
    dlnode* first = dln;
    dlnode* prev;

    if (dln == nullptr){
        dln = build(v);
        return dln;
    }

    if (k == 0){
        dlnode* t = new dlnode {v, nullptr, dln};
        dln->prev = t;
        return t;
    }

    while(k){
        if (dln->next == nullptr){
            dlnode* n = new dlnode {v,dln,nullptr};
            dln->next = n;
            return first;
        }
        prev = dln;
        dln = dln->next;
        k--;
    }
    dlnode* a = new dlnode {v, prev, dln};
    prev->next = a;
    dln->prev = a;
    return first;
}