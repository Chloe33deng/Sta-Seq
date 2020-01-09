//
//  LinkQueue_main.cpp
//  链队列的实现
//
//  Created by Noah on 2019/10/31.
//  Copyright © 2019 Noah. All rights reserved.
//

#include <iostream>
using namespace std;
#include "LinkQueue.cpp"


int main()
{
    LinkQueue<int> Q;
    if (Q.Empty())
        cout<<"队列为空"<<endl;
    else
        cout<<"队列非空"<<endl;
    cout<<"元素 10 和 15 执行入队操作："<<endl;
    try
    {
        
            Q.EnQueue(10);
            Q.EnQueue(15);
    }
    catch (char * wrong)
    {
        cout<<wrong<<endl;
    }
    cout<<"查看对头元素："<<endl;
    cout<<Q.GetQueue()<<endl;
    cout<<"执行出队操作："<<endl;
    try
    {
        Q.DeQueue();
    }
    catch (char * wrong)
    {
        cout<<wrong<<endl;
    }
    cout<<"查看队头元素："<<endl;
    cout<<Q.GetQueue()<<endl;
}
