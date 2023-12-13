#include <stdio.h>

int total, mat, eng, guj, sci;
float per;

void setdata1()
{
    cout("Enter maths marks: ");
    scanf("%d", &mat);

    cout("Enter english marks: ");
    scanf("%d", &eng);

    cout("Enter gujarati marks: ");
    scanf("%d", &guj);

    cout("Enter science marks: ");
    scanf("%d", &sci);
}

float setdata2()
{

    if (mat < 35 || eng < 35 || guj < 35 || sci < 35)
    {
        cout("Student is fail");
    }
    else
    {
        total = mat + eng + guj + sci;

        per = total * 100 / 400;
    }
}
void setdata3()
{
    cout("\nTOTAL MARKS:%d", total);
    cout("\nPERCENTAGE IS:%0.2f", per);

    if (per >= 80)
    {
        cout("\nGRADE A");
    }
    else if (per >= 70 && per < 80)
    {
        cout("\nGRADE B");
    }
    else if (per >= 60 && per < 70)
    {
        cout("\nGRADE C");
    }
    else if (per >= 40)
    {
        cout("\nGRADE D");
    }
}

int main()
{
    setdata1();
    setdata2();
    setdata3();
}