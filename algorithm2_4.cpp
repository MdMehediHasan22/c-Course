#include <iostream>

using namespace std;

int main() {
    int data[] = {1, 5, 4, 7, 9, 3, 4, 6};
    int n = sizeof(data) / sizeof(data[0]);
    int item;

    cout << "Enter the item to search: ";
    cin >> item;

    int loc = -1;
    for (int k = 0; k < n; ++k) {
        if (data[k] == item) {
            loc = k;
            break; // Exit the loop early if found
        }
    }

    if (loc != -1) {
        cout << "Item found at location: " << loc << endl;
    } else {
        cout << "Item not found in the array" << endl;
    }

    return 0;
}
