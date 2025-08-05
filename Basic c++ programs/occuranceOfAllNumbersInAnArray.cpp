#include<iostream>
using namespace std;

int main() {
    int arr1[20];
    int num;

    cout << "How many numbers you want to take: ";
    cin >> num;

    cout << "Enter " << num << " array elements: ";
    for (int i = 0; i < num; i++) {
        cin >> arr1[i];
    }

    // Count frequency of each unique element
    for (int i = 0; i < num; i++) {
        bool alreadyCounted = false;

        // Check if already counted
        for (int j = 0; j < i; j++) {
            if (arr1[i] == arr1[j]) {
                alreadyCounted = true;
                break;
            }
        }

        if (!alreadyCounted) {
            int count = 1;
            for (int k = i + 1; k < num; k++) {
                if (arr1[i] == arr1[k]) {
                    count++;
                }
            }
            cout << arr1[i] << " occurs " << count << " time(s)" << endl;
        }
    }

    return 0;
}
