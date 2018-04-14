#include<stdio.h>
enum week {sunday, monday, tuesday, wednesday, thursday, friday, saturday};

int main()
{
    enum week today;
    today = sunday;

    printf("This is the %d day of the week",today+1);

    return 0;
}
