#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void num1(int x)
{
    switch (x)
    {
    case 0:
        printf("ling");
        break;
    case 1:
        printf("yi");
        break;
    case 2:
        printf("er");
        break;
    case 3:
        printf("san");
        break;
    case 4:
        printf("si");
        break;
    case 5:
        printf("wu");
        break;
    case 6:
        printf("liu");
        break;
    case 7:
        printf("qi");
        break;
    case 8:
        printf("ba");
        break;
    case 9:
        printf("jiu");
        break;
    }
}//��װһ�����������봫�����ֵĺ���
int main()
{
    char num[101];//���ַ�������� ����ͳ�Ƹ���
    int length = 0;
    int j = 0;
    int m = 0;
    int sum = 0;
    scanf("%s",&num);
    length = strlen(num);//��strlenͳ�����ָ���
    int temp = sum;
    for (j = 0; j < length; j++)
    {
        sum += (int)num[j] - 48;//�ַ�����-48Ϊ����
    }
    //n%10ȡ��λ  n/10%10ȡʮλ  n/100%10ȡǧλ  �Դ�����
    if (sum < 10)
    {
        switch (sum)
        {
        case 0:
            printf("ling");
            break;
        case 1:
            printf("yi");
            break;
        case 2:
            printf("er");
            break;
        case 3:
            printf("san");
            break;
        case 4:
            printf("si");
            break;
        case 5:
            printf("wu");
            break;
        case 6:
            printf("liu");
            break;
        case 7:
            printf("qi");
            break;
        case 8:
            printf("ba");
            break;
        case 9:
            printf("jiu");
            break;
        }
    }
    else if (sum > 10 && sum <= 100)
    {
        num1(sum / 10 % 10);
        printf(" ");
        num1(sum % 10);//���һλ ���ӿո�
    }
    else
    {
        num1(sum / 100 % 10);
        printf(" ");
        num1(sum / 10 % 10);
        printf(" ");
        num1(sum % 10);
    }
    return 0;
}