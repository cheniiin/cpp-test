#include <iostream>
#include <cstdlib>   // rand(), srand()
#include <ctime>     // time()

using namespace std;

int main() {
    const int N = 10;   // 陣列大小
    int arr[N];

    // --- 隨機產生 ---
    srand(time(NULL));

    cout << "原始亂數陣列：";
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << endl;

    // --- 選擇排序 (Selection Sort) ---
    for (int i = 0; i < N - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < N; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
