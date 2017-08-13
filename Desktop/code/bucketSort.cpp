//
//  main.cpp
//  Produce_test
//
//  Created by 霍丹 on 2017/8/13.
//  Copyright © 2017年 HuoDan team. All rights reserved.
//
//  桶排序，时间复杂度o(n),空间复杂度与要排序的数据范围有关，与n无关
//  适用于数据取值于孤立的数据，切范围较小的情况！

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

    int n, bucket[101],tmp; // 声明输入整数数量n；数组bucket，代表0-100的桶；临时变量tmp存放用户的输入数据；
    // 将代表桶的数组置0，表示没有任何数据。重要！！！
    for(int i = 0; i < 101; i++) {
        bucket[i] = 0;
    }
    // 输入整数数量n提示
    cout << "Hi, Huo Dan~ \nThis is an integer bucket sorting algorithm of less than 100. \nPlease enter the number of integers you want to sort :" << endl;
    cin >> n;
    cout << "There are " << n << " integers unsorted." << endl;
    // 输入整数，并存放在同名的桶中
    cout << "Please input these numbers:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> tmp;
        if(tmp > 100 || tmp < 0 || tmp - (int)tmp != 0) {
            cout << "The last number you entered does not meet the requirements!! Please enter again!!" << endl;
            continue;
        }
        else {
            bucket[tmp]++;
        }

    }
    // 读数，按从小到大顺序读桶的数据，有数则读出来，有几个读几遍，没有跳过
    cout << "Ascendingly Sorted number is:" << endl;
    for(int i = 0; i < 101; i++)  // 决定读的顺序 for(int i = 100; i >= 0; i++)是从大到小
        for(int j = 0; j < bucket[i]; j++) {
            cout << i << "\t";
        }
    cout << endl;

    return 0;
}
