
#pragma once

#include<iostream>

class baseinterface
{

public:
    // baseinterface();
    // ~baseinterface();


    // 父类中的虚函数    子类自动实现了  不用调用了  在算法初期直接要内存
    virtual void InitMemory()
    {
        m_MemorySize = 1024 * sizeof(char);
		m_ShareMemory = (char*)malloc(m_MemorySize);
        std::cout << "开辟内存" << std::endl;
    }

    virtual void InitParam() = 0;       // 纯虚函数 需要子类中重新实现  初始化参数
    virtual void Run() = 0;             // 纯虚函数 运行算法


    private:
	char* m_ShareMemory;
	unsigned int m_MemorySize;
};



