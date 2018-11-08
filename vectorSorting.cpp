//对vector按其中一个分量的大小进行排序
#include <algorithm>
#include <vector>

struct example {
	int a;
	int b;
	
	//定义比较大小的函数
	// < 表示从小到大的顺序
	bool operator< (const example& other)
	{
		return a < other.a;
	}
};

sort(test.begin(), test.end());