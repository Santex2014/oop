#pragma once
#include <iostream>
#include <memory>
#include "tstack_i.h"

template <class T>
class TStack
{
public:
    TStack();
    virtual ~TStack();
    void Push(const T& item);
    void Pop();
    T& Top();
    bool IsEmpty() const;
    uint32_t GetSize() const;
    template <class A> friend std::ostream& operator<<(std::ostream& os, const TStack<A>& stack);

private:
    TStack_i<T>* head;
    uint32_t count;
};