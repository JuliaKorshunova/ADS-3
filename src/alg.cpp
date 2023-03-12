// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int left = 0;
    int right = size - 1;
    int kolv = 0;
    while (right >= left) {
        int middle = (left + right) / 2;
        if (arr[middle] == value) {
            kolv += 1;
            int newmiddel = middel;
            while (arr[middle + 1]) == value) {
                kolv += 1;
                middle += 1;
            }
            while (arr[newmiddle - 1]) == value) {
                kolv += 1;
                newmiddle -= 1;
            }
            return kolv;
        } else if (arr[middle]) > value) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    return kolv;
}
