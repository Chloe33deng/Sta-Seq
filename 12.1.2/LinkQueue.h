//
//  LinkQueue.h
//  链队列的实现
//
//  Created by Noah on 2019/10/31.
//  Copyright © 2019 Noah. All rights reserved.
//

#ifndef LinkQueue_H
#define LinkQueue_H


template <class DataType>
struct Node
{
    DataType data;
    Node<DataType> * next;
    
};


template<class DataType>
class LinkQueue
{
public:
    LinkQueue();
    ~LinkQueue();
    void EnQueue(DataType x);
    DataType DeQueue();
    DataType GetQueue();
    int Empty();
private:
    Node<DataType> * front, * rear;
};


#endif /* LinkQueue_h */
