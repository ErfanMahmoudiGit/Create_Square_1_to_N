#include <stdio.h>
#include <stdlib.h>

void print_rows(int vertical, int horizontal, int entered_number)
{
    // we print the first element
    printf ("%d ", vertical);
    // we print the first part of the row:
    for (horizontal=2; horizontal<=entered_number; horizontal++)
        printf ("%d ", horizontal);
    // we print the second part of the row so we start from entered_number-1:
    for (horizontal=entered_number-1; horizontal>1; horizontal--)
        printf ("%d ", horizontal);
    // then we print the last element
    printf ("%d ", vertical);
    //now we go to the next row
    printf ("\n");
}
int main()
{
    int entered_number,vertical,horizontal;
    printf("Please enter the number to create the pattern:");
    scanf ("%d", &entered_number);

    // we print the first half of rows:
    for (vertical=1; vertical<=entered_number; vertical++)
        print_rows(vertical, horizontal, entered_number);
    // now we print the second half of rows, so we start from entered_number-1:
    for (vertical=entered_number-1; vertical>0; vertical--)
        print_rows(vertical, horizontal, entered_number);
    return 0;
}