#if 1
#include <iostream>
#include <vector>
using namespace std;


//二分查找,在指定有序数组v中,查找数字target,成功返回下标,失败返回-1
int binary_search(vector<int>& v, int& target)
{
	if (v.empty()) return -1;

	int left = 0;
	int right = v.size() - 1;//下标

	while (left <= right) {//搜索区间是[left,right]左右全闭
		int mid = left + (right - left) / 2;

		if (target == v[mid])
			return mid;
		if (v[mid] < target) //搜索区间换成[mid+1,right]
			left = mid + 1;
		if (v[mid] > target) //搜索区间换成[left,mid-1]
			right = mid - 1;
	}
	return -1;

}
//二分查找的递归实现
int binary_search(vector<int> v, int target,int left,int right)
{
	if (left > right) return -1;
	int mid = left + (right - left) /2;

	if (v[mid] == target)
		return mid;
	if (v[mid] > target)
		return binary_search(v, target, left, mid-1);
	if (v[mid] < target)
		return binary_search(v, target, mid + 1, right);
}
//二分查找的顺序实现
void test01()
{
	vector<int> v{ 1,3,4,5,6, 7,8,10,25 };
	int a = 11;
	cout << binary_search(v, a)<<endl;
}
//二分查找的递归实现
void test02()
{
	vector<int> v{ 0,1,2,3,4,5,6,7,8,9};
	int a = 11;
	cout << binary_search(v, a, 0, 9);
	cout << endl;

}
int main()
{
	//test01();二分查找的顺序实现
	test02();//二分查找的递归实现
	system("pause");
	return 0;
}
#endif