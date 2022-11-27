#include "svnode.cpp"

svnode* sum(const svnode* a, const svnode* b){
    if (a == nullptr && b == nullptr){
        return nullptr;
    }
    else if(a == nullptr ){
        return new svnode {b->position,b->value,sum (a,b->next)};
    }
    else if(b == nullptr){
        return new svnode {a->position,a->value,sum (a->next,b)};
    }
    else if(a->position > b->position){
        return new svnode {b->position,b->value,sum (a,b->next)};
    }
    else if ( a->position < b-> position){
        return new svnode {a->position,a->value,sum (a->next,b)};
    }
    else if ( a->value + b->value == 0){
        return sum (a->next,b->next);
    }
    return new svnode {a->position,a->value + b->value, sum (a->next,b->next)};
}