#include <stdio.h>

void merge(int *array, int start, int middle, int end) {
    int size_left = middle - start + 1;
    int size_right = end - middle;

    int array_left[size_left];
    int array_right[size_right];

    int index_i, index_j, index_k;
    for (index_i = 0; index_i < size_left; index_i++) 
        array_left[index_i] = array[start + index_i];
    for (index_j = 0; index_j < size_right; index_j++)
        array_right[index_j] = array[middle+1+index_j];

    index_i = index_j = 0;
    index_k = start;
    while (index_i < size_left && index_j < size_right) {
        if (array_left[index_i] <= array_right[index_j])
            array[index_k] = array_left[index_i++]; 
        else
            array[index_k] = array_right[index_j++];
        index_k++;
    }

    while (index_i < size_left) {
        array[index_k++] = array_left[index_i++];
    }

    while (index_j < size_right) {
        array[index_k++] = array_right[index_j++];
    }
}

void merge_sort(int *array, int start, int end) {
    if (start < end) {
        int middle = start + (end - start) / 2;

        merge_sort(array, start, middle);
        merge_sort(array, middle+1, end);

        merge(array, start, middle, end);
    }
}

int sum_pair(int *array, int n) {
    int sum = 0;

    for (int i = 0, j = n-1; i != j && i < j; i++, j--)
        sum += (array[j] - array[i]);

    return sum;
}

int main() {
    int n;

    while (scanf("%d", &n) != EOF) {
        int array[n];

        for (int i = 0; i < n; i++)
            scanf("%d", &array[i]);

        merge_sort(array, 0, n-1);

        printf("%d\n", sum_pair(array, n));       
    }

    return 0;
}