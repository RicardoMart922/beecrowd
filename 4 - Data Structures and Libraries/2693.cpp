#include <bits/stdc++.h>

using namespace std;

typedef struct {
    string name;
    char region;
    int distance;
} Person;

void print_list(Person array[], int size) {
    for (int index = 0; index < size; index++) {
        cout << array[index].name << '\n';
    }
}

void merge(Person *array, int start, int middle, int end) {
    int size_left = middle - start + 1;
    int size_right = end - middle;

    Person array_left[size_left];
    Person array_right[size_right];

    int index_i, index_j, index_k;
    for (index_i = 0; index_i < size_left; index_i++) 
        array_left[index_i] = array[start + index_i];
    for (index_j = 0; index_j < size_right; index_j++)
        array_right[index_j] = array[middle+1+index_j];

    index_i = index_j = 0;
    index_k = start;
    while (index_i < size_left && index_j < size_right) {
        if (array_left[index_i].distance < array_right[index_j].distance) {
            array[index_k] = array_left[index_i++];
        }
        else if (array_left[index_i].distance == array_right[index_j].distance) {
            if (array_left[index_i].region < array_right[index_j].region) {
                array[index_k] = array_left[index_i++];
            }
            else if (array_left[index_i].region == array_right[index_j].region) {
                if (array_left[index_i].name <= array_right[index_j].name) {
                    array[index_k] = array_left[index_i++];
                }
                else {
                    array[index_k] = array_right[index_j++];
                }
            } 
            else {
                array[index_k] = array_right[index_j++];
            }
        }   
        else {
            array[index_k] = array_right[index_j++];
        }
        index_k++;
    } 

    while (index_i < size_left) {
        array[index_k++] = array_left[index_i++];
    }

    while (index_j < size_right) {
        array[index_k++] = array_right[index_j++];
    }
}

void merge_sort(Person *array, int start, int end) {
    if (start < end) {
        int middle = start + (end - start) / 2;

        merge_sort(array, start, middle);
        merge_sort(array, middle+1, end);

        merge(array, start, middle, end);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr); cout.tie(nullptr);

    int qtd_people;
    while (cin >> qtd_people) {
        cin.ignore();

        Person array[qtd_people];
        for (int index = 0; index < qtd_people; index++) {
            cin >> array[index].name >> array[index].region >> array[index].distance;
        }

        merge_sort(array, 0, qtd_people-1);

        print_list(array, qtd_people);
    }

    return 0;
}