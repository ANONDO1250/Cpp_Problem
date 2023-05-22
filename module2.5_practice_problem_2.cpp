#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int* A = new int[N];  // Create an integer array A of size N

    for (int i = 0; i < N; i++) {
        cin >> A[i];  // Take input for each element of array A
    }

    int M;
    cin >> M;

    int* B = new int[M];  // Create an integer array B of size M

    // Copy elements from array A to array B
    for (int i = 0; i < N; i++) {
        B[i] = A[i];
    }

    delete[] A;  // Delete array A

    for (int i = N; i < M; i++) {
        cin >> B[i];  // Take input for the remaining elements of array B
    }

    // Print array B
    for (int i = 0; i < M; i++) {
        cout << B[i] << " ";
    }

    delete[] B;  // Delete array B

    return 0;
}
