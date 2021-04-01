/*给定一句英语，要求你编写程序，将句中所有单词的顺序颠倒输出。
输入格式：
测试输入包含一个测试用例，在一行内给出总长度不超过 80 的字符串。字符串由若干单词和若干空格组成
其中单词是由英文字母（大小写有区分）组成的字符串，单词之间用 1 个空格分开，输入保证句子末尾没有多余的空格。
输出格式：
每个测试用例的输出占一行，输出倒序后的句子。
输入样例：
Hello World Here I Come
输出样例：
Come I Here World Hello*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string input;//c++中string来接收字符串
	getline(cin, input);//getline读入一行字符，包括空格
	int len = input.length();//.length()函数获取输入字符串长度 返回值赋给len
	int p = len;
	for (int i = len - 1; i >= 0; i--)//从尾到头遍历字符串
	{
		if (input[i] == ' ')//当遇到空格时
		{
			for (int j = i + 1; j < p; j++)//输出空格后的字符，p一直标记为每个单词后的位置
			{
				cout << input[j];
			}
			cout << ' ';//输出一个空格
			p = i;//用p保存此时空格的下标
		}
	}
	for (int k = 0; k < p; k++)
	{
		cout << input[k];
	}//第一个单词前无空格 单独输出
	return 0;
}