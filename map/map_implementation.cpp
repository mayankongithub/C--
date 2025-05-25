#include <iostream>
#include <vector>
using namespace std;

class HashMap {
private:
    vector<int> table;
    vector<bool> occupied;
    int capacity;
    int size;

    int hashFunction(int key){
        return key % capacity;
    }

    void resize() {
        // Store old table data
        vector<int> oldTable = table;
        vector<bool> oldOccupied = occupied;

        // Double the size and reset
        capacity *= 2;
        table.assign(capacity, -1);
        occupied.assign(capacity, false);
        size = 0;

        // Rehash all elements
        for (int i = 0; i < oldTable.size(); ++i) {
            if (oldOccupied[i]) {
                insert(oldTable[i], oldTable[i]);  // Re-insert elements
            }
        }
    }

public:
    HashMap() : capacity(10), size(0) {
        table.assign(capacity, -1);
        occupied.assign(capacity, false);
    }

    void insert(int key, int value) {
        if (size == capacity) {
            resize();  // Double the size when full
        }

        int index = hashFunction(key);
        while (occupied[index]) {
            index = (index + 1) % capacity;  // Linear probing
        }

        table[index] = value;
        occupied[index] = true;
        size++;
    }

    int get(int key) {
        int index = hashFunction(key);
        while (occupied[index]) {
            if (table[index] == key) return table[index];
            index = (index + 1) % capacity;
        }
        return -1;  // Key not found
    }

    void display() {
        for (int i = 0; i < capacity; ++i) {
            cout << "Index " << i << ": " << (occupied[i] ? to_string(table[i]) : "Empty") << endl;
        }
    }
};

int main() {
    HashMap myMap;
    
    // Inserting multiple elements to trigger resizing
    for (int i = 0; i < 12; ++i) {
        myMap.insert(i * 10, i * 100);
    }

    myMap.display();
    return 0;
}
