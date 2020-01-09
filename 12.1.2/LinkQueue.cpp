//
//  LinkQueue.cpp
//  链队列的实现
//
//  Created by Noah on 2019/10/31.
//  Copyright © 2019 Noah. All rights reserved.
//

#include"LinkQueue.h"


template <class DataType>
LinkQueue<DataType>::LinkQueue()
{
    Node <DataType> * s = 0;
    s = new Node<DataType>;
    s ->next = 0;
    front = rear = s;
}


template <class DataType>
LinkQueue<DataType>::~LinkQueue()
{
    Node <DataType> * p = 0;
    while (front != 0)
    {
        p = front ->next;
        delete front;
        front = p;
    }
}



template <class DataType>
void LinkQueue<DataType>::EnQueue(DataType x)
{
    Node<DataType> * s = 0;
    s = new Node<DataType>;
    s ->data = x;
    s ->next = 0;
    rear ->next = s;rear = s;
}


template<class DataType>
DataType LinkQueue<DataType>::DeQueue()
{
    Node <DataType> * p = 0;
    int x;
    if(rear == front)throw "下溢";
    p = front ->next;
    x = p->data;
    front ->next = p ->next;
    if (p ->next == 0) rear = front;
    delete p;
    return x;
}


template <class DataType>
DataType LinkQueue<DataType>::GetQueue()
{
    if (front != rear)
        return front ->next ->data;
    else
        return 0;
}


template <class DataType>
int LinkQueue<DataType>::Empty()
{
    if (front == rear)
        return 1;
    else
        return 0;
}
