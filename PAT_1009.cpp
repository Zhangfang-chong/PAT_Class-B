/*����һ��Ӣ�Ҫ�����д���򣬽��������е��ʵ�˳��ߵ������
�����ʽ��
�����������һ��������������һ���ڸ����ܳ��Ȳ����� 80 ���ַ������ַ��������ɵ��ʺ����ɿո����
���е�������Ӣ����ĸ����Сд�����֣���ɵ��ַ���������֮���� 1 ���ո�ֿ������뱣֤����ĩβû�ж���Ŀո�
�����ʽ��
ÿ���������������ռһ�У���������ľ��ӡ�
����������
Hello World Here I Come
���������
Come I Here World Hello*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string input;//c++��string�������ַ���
	getline(cin, input);//getline����һ���ַ��������ո�
	int len = input.length();//.length()������ȡ�����ַ������� ����ֵ����len
	int p = len;
	for (int i = len - 1; i >= 0; i--)//��β��ͷ�����ַ���
	{
		if (input[i] == ' ')//�������ո�ʱ
		{
			for (int j = i + 1; j < p; j++)//����ո����ַ���pһֱ���Ϊÿ�����ʺ��λ��
			{
				cout << input[j];
			}
			cout << ' ';//���һ���ո�
			p = i;//��p�����ʱ�ո���±�
		}
	}
	for (int k = 0; k < p; k++)
	{
		cout << input[k];
	}//��һ������ǰ�޿ո� �������
	return 0;
}