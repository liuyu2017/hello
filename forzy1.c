#include <stdio.h>

int main(void)
{
    int i = 1;//天数
    int sum = 1;//第十天桃子数
    for (i = 1; i < 10; i++)//从第一天开始循环
    {
        sum = (1 + sum) * 2;//每天吃前一天一半多一个
        printf("sum = %d\n", sum);
    }

    return 0;
}
