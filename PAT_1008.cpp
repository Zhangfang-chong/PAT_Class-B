#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
void reverse(int arr[], int left, int right)
{
	int i, j;
	int temp;
	for ( i = left, j = right; i <  j; i++, j--)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}//采用逆置思想
};
int main()
{
	int n, m;
	int arr[101];
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	if (m != 0)
	{
		m %= n;//如果移动元素大于数组个数m%n 一定注意 大于或小于可以归并为一种情况
		reverse(arr, 0, n - m - 1);
		reverse(arr, n - m, n - 1);
		reverse(arr, 0, n - 1);
	}
	for (int i = 0; i < n-1; i++)
			cout << arr[i] << ' ';
	cout << arr[n - 1];
	return 0;
}