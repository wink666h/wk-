#include <stdio.h>
int fun(char *str, char target) 
{
    int count = 0;
    while (*str != '\0') 
	{
        if (*str == target) {
            count++;
        }
        str++;
    }
    return count;
}
int main() {
    char str[100];
    char target;
    printf("请输入字符串：");
    scanf("%s", str);
    printf("请输入要统计的字符：");
    scanf(" %c", &target);
    int count = fun(str, target);
    printf("字符 %c 在字符串中出现的次数为：%d", target, count);
    return 0;
}

