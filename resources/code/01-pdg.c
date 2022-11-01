int sum(int array[], int count) {
    int i, sum;
    sum = 0;
    for(i = 0; i < count; i++) {
        sum = add(sum, array[i]);
    }
    return sum;
}

int add(int a, int b) {
    return a + b;
}