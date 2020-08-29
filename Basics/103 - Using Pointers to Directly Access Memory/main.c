#include <stdio.h>

// To build this file run the following
// cl main.c

int main(int argc, char const *argv[])
{
    int nums1[5] = {1, 2, 3, 4, 5};

    int *nums2 = nums1;

    // print the memory value using %p
    printf("nums1 --> %p\n", nums1);
    printf("nums2 --> %p\n\n", nums2);

    nums2 += 2;

    // pointers are typed
    // on my machine int is 4 bytes long
    // moving the pointer 2 positons, moves it 8 bytes
    printf("nums1 --> %p\n", nums1);
    printf("nums2 --> %p\n\n", nums2);

    // replace the value of s with $
    *nums2 = 100;

    for (int i = 0; i < 5; i++)
    {
        // print int from memory using %d
        printf("%d ", nums1[i]);
    }

    return 0;
}
