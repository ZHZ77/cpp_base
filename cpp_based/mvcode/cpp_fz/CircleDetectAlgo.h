

#pragma once
#include"baseinterface.h"


class CircleDetectAlgo : public baseinterface
{
    public:
    CircleDetectAlgo();
    ~CircleDetectAlgo();

    void InitParam() override;
    void Run() override;

};


