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
    printf("�������ַ�����");
    scanf("%s", str);
    printf("������Ҫͳ�Ƶ��ַ���");
    scanf(" %c", &target);
    int count = fun(str, target);
    printf("�ַ� %c ���ַ����г��ֵĴ���Ϊ��%d", target, count);
    return 0;
}

