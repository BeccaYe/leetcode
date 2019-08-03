// leetcode.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <unordered_set>
using namespace std;
class Solution {
public:
	bool isHappy(int n) {
		int sum = n;
		unordered_set<int> s;
		while (sum != 1) {
			sum = 0;
			for (sum = 0;n / 10 != 0;n=n/10) {
				sum = (n % 10)*(n % 10) + sum;
			}
			sum = sum + (n % 10)*(n % 10);
			if (s.find(sum) != s.end())
				return false;
			s.insert(sum);
			n = sum;
		}
		if (sum == 1) {
			return true;
		}
		else return false;
	}
};

int main()
{
	bool result=false;
	Solution *s = new Solution();
	result = s->isHappy(123);
	cout << result<<endl;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
