// 测试.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <string>
#include <array>

using namespace std;

int main()
{
	array<char, 10> a;// = { 1,2,3,4,5,6,7,8,9,0 };
	for (auto& i : a)
		i = 'd';
	cout<<a.data();
    return 0;
}

