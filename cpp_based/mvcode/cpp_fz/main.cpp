

#include"CircleDetectAlgo.h"
#include"LineDetectAlgo.h"
#include<vector>
#include<iostream>
#include<cmath>

using namespace std;



struct sline
{
    int x_1;
    int x_2;
    int y_1;
    int y_2;
	//两数平方和开根号
	double SquareRootFunc(int x, int y)
	{
		auto a = x * x;
		auto b = y * y;
		auto c = a + b;
		auto d = sqrt(c);
		cout << "SquareRootFunc Result:" << d << endl;
		return d;
	}
	//获取直线长度
	double getLength()
	{
		return SquareRootFunc(x_1 - x_2, y_1 - y_2);
	}

};



class cline
{
    public:
    cline(int _x_1,int _y_1,int _x_2,int _y_2)
    {
        x_1 = _x_1;    x_2 = _x_2;    y_1 = _y_1;    y_2 = _y_2;

    }

    ~cline();

    double getLength()
    {
        return 0;
    }



    private:
    int x_1;
    int x_2;
    int y_1;
    int y_2;

    private:
	//两数平方和开根号
	double SquareRootFunc(int x, int y)
	{
		auto a = x * x;
		auto b = y * y;
		auto c = a + b;
		auto d = sqrt(c);
		cout << "SquareRootFunc Result:" << d << endl;
		return d;
	}

};


int main()
{

    LineDetectAlgo* linedetect = new LineDetectAlgo();
    CircleDetectAlgo* circledetect = new CircleDetectAlgo();

    vector<baseinterface*> AlogVec;
	LineDetectAlgo* lineDetect = new LineDetectAlgo();
	CircleDetectAlgo* CircleDetect = new CircleDetectAlgo();
	//123456789
	AlogVec.push_back(lineDetect);
	AlogVec.push_back(CircleDetect);

	for (baseinterface* algo : AlogVec)
	{
		algo->InitMemory();
		algo->InitParam();
		algo->Run();
	}

    
    return 0;
}



