#include<stdio.h>


int main()
{
    printf("Input a menu code from the List(0 ~ 2): \n");
    printf("0: Display \n");
    printf("1: Insert  \n");
    printf("2: Delete  \n");

    int c;
    scanf("%d",&c);

    switch(c)
    {
    case 0 :
        displayArray();
        break;
    case 1 :
        insertArray();
        break;
    case 2 :
        deleteArray();
        break;
    default :
        printf("Wrong menu!\n" );
    }
    return 0;
}




int  displayArray()
{
    int array[100], position, c, n, value;

    printf("Enter number of elements in array\n");
    scanf("%d", &n);

    printf("Enter %d elements\n", n);
    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    printf("Resultant array is\n");
    for (c = 0; c < n; c++)
        printf("%d\n", array[c]);
    return 0;
}



int insertArray()
{
    int array[100], position, c, n, value;

    printf("Enter number of elements in array\n");
    scanf("%d", &n);

    printf("Enter %d elements\n", n);

    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    printf("Enter the location where you wish to insert an element\n");
    scanf("%d", &position);

    printf("Enter the value to insert\n");
    scanf("%d", &value);

    for (c = n - 1; c >= position - 1; c--)
        array[c+1] = array[c];

    array[position-1] = value;

    printf("Resultant array is\n");

    for (c = 0; c <= n; c++)
        printf("%d\n", array[c]);

    return 0;
}

int deleteArray()
{
    int array[100], position, c, n;

    printf("Enter number of elements in array\n");
    scanf("%d", &n);

    printf("Enter %d elements\n", n);

    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    printf("Enter the location where you wish to delete element\n");
    scanf("%d", &position);

    if (position >= n+1)
        printf("Deletion not possible.\n");
    else
    {
        for (c = position - 1; c < n - 1; c++)
            array[c] = array[c+1];

        printf("Resultant array:\n");

        for (c = 0; c < n - 1; c++)
            printf("%d\n", array[c]);
    }

    return 0;
}
