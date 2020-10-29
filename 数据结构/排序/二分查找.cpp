#if 1
#include <iostream>
#include <vector>
using namespace std;


//���ֲ���,��ָ����������v��,��������target,�ɹ������±�,ʧ�ܷ���-1
int binary_search(vector<int>& v, int& target)
{
	if (v.empty()) return -1;

	int left = 0;
	int right = v.size() - 1;//�±�

	while (left <= right) {//����������[left,right]����ȫ��
		int mid = left + (right - left) / 2;

		if (target == v[mid])
			return mid;
		if (v[mid] < target) //�������任��[mid+1,right]
			left = mid + 1;
		if (v[mid] > target) //�������任��[left,mid-1]
			right = mid - 1;
	}
	return -1;

}
//���ֲ��ҵĵݹ�ʵ��
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
//���ֲ��ҵ�˳��ʵ��
void test01()
{
	vector<int> v{ 1,3,4,5,6, 7,8,10,25 };
	int a = 11;
	cout << binary_search(v, a)<<endl;
}
//���ֲ��ҵĵݹ�ʵ��
void test02()
{
	vector<int> v{ 0,1,2,3,4,5,6,7,8,9};
	int a = 11;
	cout << binary_search(v, a, 0, 9);
	cout << endl;

}
int main()
{
	//test01();���ֲ��ҵ�˳��ʵ��
	test02();//���ֲ��ҵĵݹ�ʵ��
	system("pause");
	return 0;
}
#endif