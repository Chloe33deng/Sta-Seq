//
//  SeqStack.h
//  顺序栈的实现
//
//  Created by Noah on 2019/10/24.
//  Copyright © 2019 Noah. All rights reserved.
//

#ifndef SeqStack_H
#define SeqStack_H
const int StackSize = 10;
template < class DataType >
class SeqStack
{
public:
    SeqStack();
    ~SeqStack(){}
    void Push(DataType x);
    DataType Pop();
    DataType GetTop();
    int Empty();
private:
    DataType data[StackSize];
    int top;
};

template <class DataType>
SeqStack<DataType>::SeqStack()
{
    top = -1;
}


template <class DataType>
void SeqStack<DataType>::Push(DataType x)
{
    if (top == StackSize - 1) throw "上溢";
    top ++;
    data[top] = x;
}


template <class DataType>
DataType SeqStack<DataType>::Pop()
{
    DataType x;
    if ( top == -1 ) throw "下溢";
    x = data[top--];
    return x;
}


template <class DataType>
DataType SeqStack<DataType>::GetTop()
{
    if ( top != -1 )
        return data[top];
    
    else
        throw "栈空";
}


template <class DataType>
int SeqStack<DataType>::Empty()
{
    if ( top == -1) return 1;
    else return 0;
}

#endif /* SeqStack_h */
