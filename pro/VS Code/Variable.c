#include <stdio.h>

int eng, hin, guj, total, per;

void test()
{
    // No Return - No Arugument

    printf("ENter marks of ENG = ");
    scanf("%d", &eng);

    printf("ENter marks of HIN = ");
    scanf("%d", &hin);

    printf("ENter marks of GUJ = ");
    scanf("%d", &guj);

    total = eng + hin + guj;
    printf(" total mark =%d \n", total);

    per = total * 100 / 300;
    printf(" total per=%d \n", per);
}

int main()
{
    test();
    return 0;
}