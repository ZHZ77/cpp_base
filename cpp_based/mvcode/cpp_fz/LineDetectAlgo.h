
#pragma once
#include"baseinterface.h"


class LineDetectAlgo : public baseinterface
{

    public:

    LineDetectAlgo();
    ~LineDetectAlgo();

    void InitParam() override;
    void Run() override;




};