#include <stdio.h>
#include <stdarg.h>
void add(int count, ...)
{
    int result = 0;
    va_list list;
    va_start(list, count);
    for (int i = 1; i <= count; i++)
    {

        int n = va_arg(list, int);

        result = result + n;
    }
    va_end(list);
    printf(" %d", result);
}

void main()
{
    add(6, 23, 34, 56, 78, 90, 23);
}
