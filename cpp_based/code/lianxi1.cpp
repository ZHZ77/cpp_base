#include<iostream>


using namespace std;



int main()
{

    // 三种一维数组的定义方法
    int arr1[3];
    int arr2[2] = {1, 3};
    int arr3[]  =  {2,4,5};

    int a = 0;

    cout << sizeof(arr1) << endl;
    cout << sizeof(arr1)/sizeof(arr1[0]) << endl;

    int arr11[2][2];
    int arr12[2][2] = {{1,2},{3,4}};
    int arr13[3][2] = {1,2,3,4,5,6};
    int arr14[][2] = {1,2,3,4,5,6};



    int array[4] = {2, 3, 5, 6};


    int temp = 0;
    int size = sizeof(array)/sizeof(array[0])-1;

    for(int i = 0; i < size; i++)
    {
        temp = array[i];
        array[i] = array[size];
        array[size] = temp;
        size--;

    }

    for (int i =0;i < 4;i++)
    {
        cout << array[i] << endl;
    }


    cout << "冒泡排序" << endl;
    //排序的总轮数=元素个数-1
	//每轮对比的次数 = 元素个数- 排序轮数 
	int nums[9] = { 7,5,2,4,9,8,6,10,1 };
    
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 9 - i - 1; j++)
        {
            int temp = 0;
            if(nums[j]>nums[j+1])
            {
                temp = nums[j+1];
                nums[j+1] = nums[j];
                nums[j] = temp;
            }
        }
    }


    for (int i = 0; i < 9; i++)
	{
		cout << nums[i];
	}


    





    return 0;
}

