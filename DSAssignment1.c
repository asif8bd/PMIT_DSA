#include<stdio.h>
/**
 * Author:    Md Ahasanul Ashid
 * PMIT Id:   193210
 * Created:   13.10.2019
 * Description: DSA Assignment 01 on Array Display, Insert and Delete.
 **/

int mainMenu();
int traverseAnArray();
int insertIntoArray();
int deleteFromArray();
int display(int a[], int n);


int main()
{
    mainMenu();
}

int mainMenu()
{
    printf("Select a menu from the List(0 to 2): \n");
    printf("0: Traverse an Array \n");
    printf("1: Insert into Array \n");
    printf("2: Delete from Array \n");

    int c;
    scanf("%d",&c);

    switch(c)
    {
    case 0 :
        traverseAnArray();
        break;
    case 1 :
        insertIntoArray();
        break;
    case 2 :
        deleteFromArray();
        break;
    default :
        printf("Incorrect menu code. Please try again!\n" );
    }
    return 0;
}



int  traverseAnArray()
{
    printf("You are creating an Array to display.\n");
    int array[100], size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("Enter value of index %d : ", i);
        scanf("%d", &array[i]);
    }
    display(array, size);
    mainMenu();
}


int insertIntoArray()
{
    printf("You are going to insert element in array.\n");
    int intArray[100],  size, index, value;
    printf("Enter size of array: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter value of index %d : ", i);
        scanf("%d", &intArray[i]);
    }

    printf("Enter the index to insert new element: ");
    scanf("%d", &index);

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    for (int i = size - 1; i >= index; i--)
        intArray[i+1] = intArray[i];

    intArray[index] = value;

    display(intArray, size+1);
    mainMenu();
    return 0;
}

int deleteFromArray()
{

    printf("You are going to delete element from array.\n");
    int intArray[100],  size, index;

    printf("Enter size of array: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        printf("Enter value of index %d : ", i);
        scanf("%d", &intArray[i]);
    }

    printf("Enter the index to delete an element: ");
    scanf("%d", &index);

    if (index >= size)
        printf("Array index out of bounds!\n");
    else {
        for (int i = index ; i < size - 1; i++)
            intArray[i] = intArray[i+1];

        display(intArray, size-1);
    }
    mainMenu();
    return 0;
}

int  display(int a[], int n)
{
    printf("*** Result Array: ");
    for(int i=0; i<n; i++)
        printf("%d\t", a[i]);
    printf("\n");
}

