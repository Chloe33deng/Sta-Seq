//
//  SeqStack_main.cpp
//  顺序栈的实现
//
//  Created by Noah on 2019/10/24.
//  Copyright © 2019 Noah. All rights reserved.
//

#include <iostream>
using namespace std;
#include "SeqStack.h"

int main()
{
    SeqStack<int> S;
    if (S.Empty())
        cout<<"栈为空"<<endl;
    else
        cout<<"栈非空"<<endl;
    cout<<"对 15 和 10 执行入栈操作"<<endl;
    S.Push(15);
    S.Push(10);
    cout<<"栈顶元素为:"<<endl;
    cout<<S.GetTop()<<endl;
    cout<<"执行一次出栈操作"<<endl;
    S.Pop();
    cout<<"栈顶元素为："<<endl;
    cout<<S.GetTop()<<endl;
}
