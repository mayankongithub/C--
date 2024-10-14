// #include <bits/stdc++.h>
// using namespace std;

// class MaxHeap {
//     vector<int> hp;
//     int size;

// public:
//     // Function to maintain heap property upwards
//     void upheapify(int ci, vector<int>& v) {
//         while (ci > 0) {
//             int papa = (ci - 1) / 2;
//             if (v[ci] > v[papa]) {
//                 swap(v[papa], v[ci]);
//                 ci = papa;
//             } else {
//                 break;
//             }
//         }
//     }

//     // Push a new element to the heap (passing by reference)
//     void push(int element, vector<int>& v) {
//         v.push_back(element);
//         upheapify(v.size() - 1, v);
//     }

//     // Remove the root element from the heap
//     void pop() {
//         if (hp.empty()) return;
//         swap(hp[0], hp[hp.size() - 1]); // Remove the highest priority element
//         hp.pop_back();
//         size--; // Decrease the size
//         if (!hp.empty()) downheapify(0, size);
//     }

//     // Function to maintain heap property downwards
//     void downheapify(int idx, int bound) {
//         while (idx < bound) {
//             int lc = idx * 2 + 1;
//             int rc = idx * 2 + 2;
//             int maxside = idx;

//             if (lc < bound && hp[lc] > hp[maxside]) {
//                 maxside = lc;
//             }
//             if (rc < bound && hp[rc] > hp[maxside]) {
//                 maxside = rc;
//             }

//             if (maxside != idx) {
//                 swap(hp[maxside], hp[idx]);
//                 idx = maxside;
//             } else {
//                 break;
//             }
//         }
//     }

//     // Peek the maximum element
//     int peek() {
//         if (hp.empty()) return INT_MIN;
//         return hp[0];
//     }

//     // Display the heap elements
//     void display() {
//         for (int j = 0; j < size; j++) {
//             cout << hp[j] << " ";
//         }
//         cout << endl;
//     }

//     // Constructor to build the heap
//     MaxHeap(vector<int>& v) {
//         hp = v;
//         size = hp.size();

//         // Build max heap by calling downheapify from last non-leaf node
//         for (int j = size / 2 - 1; j >= 0; j--) {
//             downheapify(j, size);
//         }
//     }

//     // Heap sort function
//     void heapsort() {
//         while (size > 1) {
//             swap(hp[0], hp[size - 1]); // Swap root with last element
//             size--;                    // Reduce the size of the heap
//             downheapify(0, size);       // Heapify the reduced heap
//         }

//         // Display sorted array
//         for (int k = 0; k < hp.size(); k++) {
//             cout << hp[k] << " ";
//         }
//         cout << endl;
//     }
// };

// // Heapsort function using MaxHeap
// void heapsort(vector<int>& v) {
//     MaxHeap hp(v); // Build the heap from vector
//     hp.heapsort(); // Perform heapsort
// }

// int main() {
//     vector<int> v = {9, 6, 1, 19, 3, 2, 8, 12, 5};
//     heapsort(v); // Sort the array using heapsort
//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

class MaxHeap {
    vector<int> hp;
    int size;

public:
    // Function to maintain heap property upwards
    void upheapify(int ci, vector<int>& hp){
        while (ci > 0) {
            int papa = (ci - 1) / 2;
            if (hp[ci] > hp[papa]) {
                swap(hp[papa], hp[ci]);
                ci = papa;
            } else {
                break;
            }
        }
    }

    // Push a new element to the heap (passing by reference)
    void push(int element, vector<int>& hp) {
        hp.push_back(element);
        upheapify(hp.size() - 1, hp);
    }
    // Remove the root element from the heap
    void pop() {
        if (hp.empty()) return;
        swap(hp[0], hp[hp.size() - 1]); // Remove the highest priority element
        hp.pop_back();
        size--; // Decrease the size
        if (!hp.empty()) downheapify(0, size);
    }

    // Function to maintain heap property downwards
    void downheapify(int idx, int bound) {
        while (idx < bound) {
            int lc = idx * 2 + 1;
            int rc = idx * 2 + 2;
            int maxside = idx;

            if (lc < bound && hp[lc] > hp[maxside]) {
                maxside = lc;
            }
            if (rc < bound && hp[rc] > hp[maxside]) {
                maxside = rc;
            }

            if (maxside != idx) {
                swap(hp[maxside], hp[idx]);
                idx = maxside;
            } else {
                break;
            }
        }
    }

    // Peek the maximum element
    int peek() {
        if (hp.empty()) return INT_MIN;
        return hp[0];
    }

    // Display the heap elements
    void display() {
        for (int j = 0; j < size; j++) {
            cout << hp[j] << " ";
        }
        cout << endl;
    }

    // Constructor to build the heap
    MaxHeap(vector<int>& v) {
        hp = v;
        size = hp.size();

        // Build max heap by calling downheapify from last non-leaf node
        for (int j = size / 2 - 1; j >= 0; j--) {
            downheapify(j, size);
        }
    }

    // Heap sort function
    void heapsort() {
        while (size > 1) {
            swap(hp[0], hp[size - 1]); // Swap root with last element
            size--;                    // Reduce the size of the heap
            downheapify(0, size);       // Heapify the reduced heap
        }

        // Display sorted array
        for(int k = 0; k < hp.size(); k++){
            cout << hp[k] << " ";
        }
        cout << endl;
    }
};

// Heapsort function using MaxHeap
void heapsort(vector<int>& v) {
    MaxHeap hp(v); // Build the heap from vector
    hp.heapsort(); // Perform heapsort
}

int main() {
    vector<int> v = {9, 6, 1, 19, 3, 2, 8, 12, 5};
    heapsort(v); // Sort the array using heapsort
    return 0;
}



