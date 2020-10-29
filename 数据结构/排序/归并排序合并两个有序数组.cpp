#if 0
#include <iostream>
#include <vector>
using namespace std;

//对于一个由两个有序数组组成的数组,例如,1,3,5,7,9 |2,4,6,8,10,整理成一个有序数组
//参数是数组名,最左边下标,中间下标,右边下标,这样的好处是方便后边合并无序数组可以调用
void merge_two_array(vector<int> & nums,int l,int m,int r)
{
	if(nums.empty()) return;
	vector<int> v;
	auto left = l;
	auto right = m+1;
	

	while (left <= m && right <= r)
	{
		if (nums[left] <= nums[right]) {
			v.push_back(nums[left]);
			left++;
		}
		else {
			v.push_back(nums[right]);
			right++;
		}

	}
	while (right <= r) {
		v.push_back(nums[right]);
		right++;
	}

	while (left <= l) {
		v.push_back(nums[left]);
		left++;
	}

	v.swap(nums);

}

//归并排序,a数组首地址
//l:左边元素下标  m:中间元素下标   r:右边元素下标
void merge_sort(int* a, int l, int m, int r)
{
	/*
	左边一半:l-----m
	右边一半:m+1---r
	*/
	//1.准备临时数组
	int len = r - l + 1;
	int* pTemp = new int[len];
	int k = 0;//临时数组下标
	int left = l;//左边数组第一个元素下标
	int right = m + 1;//右边数组元素下标
	//2.数组依序从原数组放入临时数组中
	//2.1通过循环放完一半,另外一边有可能放完了也可能没放完
	while (left <= m && right <= r)
	{
		if (a[left] < a[right])
			pTemp[k++] = a[left++];
		else
			pTemp[k++] = a[right++];
	}
	//2.2把没有放完的 继续放	
	while (right <= r)
		pTemp[k++] = a[right++];
	while (left <= m)
		pTemp[k++] = a[left++];
	//3.数据从临时数组拷贝回原数组,释放临时数组内存
	memcpy(a + l, pTemp, sizeof(int) * len);
	delete[]pTemp;
	pTemp = NULL;
}
void test01()
{
	auto p = [=](vector<int>& v) {
		for (auto iter : v)
		{
			cout << iter << " ";
		}
		cout << endl;
	};
	vector<int> nums{ 1,3,5,7,9,2,4,6,8,10 };
	p(nums);

	merge_two_array(nums, 0, 5, 9);

	p(nums);



}
void test02()
{

	
	int arr[]{ 1,10,6,14,20,18,7,40,20 ,43};
	int arr2[]{1,3,5,7,9,2,4,6,8,10 };

	merge_sort(arr2, 0, 5, 10);

	for (auto iter : arr2)
	{
		std::cout << iter << " ";
	}
	cout << endl;
}
int main()
{
	//test01();
	test02();//之前的合并有序数组程序 测试,利用智能指针数组
	system("pause");
	return 0;
}
#endif