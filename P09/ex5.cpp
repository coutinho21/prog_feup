#include <iostream>
#include <iomanip>
using namespace std;
 
#include "Stack.h"

template<typename T>
Stack<T>::Stack(){
    size_ = 0;
    top_ = nullptr;
}

template<typename T>
Stack<T>::~Stack(){
    while(top_ != nullptr){
        node<T>* temp = top_->next;
        delete top_;
        top_ = temp;
    }
}

template<typename T>
size_t Stack<T>::size() const{
    return size_;
}

template<typename T>
bool Stack<T>::peek(T& elem) const{
    if(top_ != nullptr  ){
        elem = top_->value;
        return true;
    }
    return false;
}

template<typename T>
bool Stack<T>::pop(T& elem){
    if(top_ != nullptr){
        elem = top_->value;
        node<T>* temp = top_->next;
        delete top_;
        top_ = temp;
        size_--;
        return true;
    }
    return false;
}

template<typename T>
void Stack<T>::push(const T& elem){
    node<T>* temp = new node<T> {elem, top_};
    top_ = temp;
    size_++;
}