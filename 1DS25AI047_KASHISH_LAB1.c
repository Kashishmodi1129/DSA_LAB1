#include <stdio.h>
int main(){
    int a[100], n, i, key, pos, val;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter elements of array:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

// 1. Traversal

    printf("\n1. Traversal\n");
    printf("Array elements are: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

// 2. Linear Search

    printf("\n\n2. Linear Search\n");
    printf("Enter element to search: ");
    scanf("%d", &key);
    for(i = 0; i < n; i++) {
        if(a[i] == key){
            printf("Element found at index %d", i);
            break;
        }
    }
    if(i == n)
        printf("Element not found");

// 3. Maximum

    printf("\n\n3. Maximum\n");
    int max = a[0];
    for(i = 1; i < n; i++){
        if(a[i] > max)
            max = a[i];
    }
    printf("Maximum element = %d", max);

// 4. Minimum

    printf("\n\n4. Minimum\n");
    int min = a[0];
    for(i = 1; i < n; i++){
        if(a[i] < min)
            min = a[i];
    }printf("Minimum element = %d", min);
    
// 5. Insertion - Beginning, Last and Anywhere
    printf("\n\n5. Insertion\n");
// Insertion at beginning
    printf("\nEnter element to insert at beginning: ");
    scanf("%d", &val);
     for(i = n; i > 0; i--)
        a[i] = a[i - 1];
    a[0] = val;
    n++;
    printf("Array after insertion at beginning: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
// Insertion at last
    printf("\n\nEnter element to insert at last: ");
    scanf("%d", &val);
    a[n] = val;
    n++;
    printf("Array after insertion at last: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
// Insertion at any position
    printf("\n\nEnter position for insertion: ");
    scanf("%d", &pos);
    printf("Enter element to insert: ");
    scanf("%d", &val);
    for(i = n; i > pos; i--)
        a[i] = a[i - 1];
    a[pos] = val;
    n++;
    printf("Array after insertion at position: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);


// 6. Deletion - Beginning, Last and Anywhere
printf("\n\n6. Deletion\n");
// Deletion at beginning
    for(i = 0; i < n - 1; i++)
        a[i] = a[i + 1];
     n--;
    printf("\nArray after deletion at beginning: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
// Deletion at last
    n--;
    printf("\nArray after deletion at last: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
// Deletion at any position
    printf("\n\nEnter position for deletion: ");
    scanf("%d", &pos);
     for(i = pos; i < n - 1; i++)
        a[i] = a[i + 1];
    n--;
    printf("Array after deletion at position: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

// 7. Sum

    printf("\n\n7. Sum\n");
    int sum = 0;
    for(i = 0; i < n; i++)
        sum = sum + a[i];
    printf("Sum of elements = %d", sum);
}
