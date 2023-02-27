#include <iostream>
using namespace std;

template <typename T> void generate(T* const arr, unsigned int size);
template <typename T> void show(T* const arr, unsigned int size);

int main() {
    unsigned int size = 10U;
    int* arr = new int[size];
    generate<int>(arr, size);
    show<int>(arr, size);
    return 0;
}

template <typename T> void generate(T* const arr, unsigned int size) {
    srand(time(0));
    int min = 0, max = 120;
    for (size_t i = 0; i < size; i++) {
        arr[i] = (T)(rand() % (max - min) + min);
    }
}

template <typename T> void show(T* const arr, unsigned int size) {
    for (size_t i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}