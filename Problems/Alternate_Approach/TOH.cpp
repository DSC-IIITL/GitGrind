#include <bits/stdc++.h>
using namespace std;

void TowerOfHanoi(int num_disks) {
    stack<int> source, auxiliary, destination;
    int total_moves = (1 << num_disks) - 1;
    for (int i = num_disks; i >= 1; i--) {
        source.push(i);
    }

    char A = 'A', B = 'B', C = 'C';

    if (num_disks % 2 == 0) {
        swap(auxiliary, destination);
        swap(B, C);
    }

    for (int move = 1; move <= total_moves; move++) {
        if (move % 3 == 1) {
            if (!source.empty() && (destination.empty() || source.top() < destination.top())) {
                cout << "Move disk " << source.top() << " from " << A << " to " << C << endl;
                destination.push(source.top());
                source.pop();
            } else if (!destination.empty() && (source.empty() || destination.top() < source.top())) {
                cout << "Move disk " << destination.top() << " from " << C << " to " << A << endl;
                source.push(destination.top());
                destination.pop();
            }
        } else if (move % 3 == 2) {
            if (!source.empty() && (auxiliary.empty() || source.top() < auxiliary.top())) {
                cout << "Move disk " << source.top() << " from " << A << " to " << B << endl;
                auxiliary.push(source.top());
                source.pop();
            } else if (!auxiliary.empty() && (source.empty() || auxiliary.top() < source.top())) {
                cout << "Move disk " << auxiliary.top() << " from " << B << " to " << A << endl;
                source.push(auxiliary.top());
                auxiliary.pop();
            }
        } else if (move % 3 == 0) {
            if (!auxiliary.empty() && (destination.empty() || auxiliary.top() < destination.top())) {
                cout << "Move disk " << auxiliary.top() << " from " << B << " to " << C << endl;
                destination.push(auxiliary.top());
                auxiliary.pop();
            } else if (!destination.empty() && (auxiliary.empty() || destination.top() < auxiliary.top())) {
                cout << "Move disk " << destination.top() << " from " << C << " to " << B << endl;
                auxiliary.push(destination.top());
                destination.pop();
            }
        }
    }
}

int main() {
    int num_disks;
    cout << "Enter the number of disks: ";
    cin >> num_disks;
    TowerOfHanoi(num_disks);
    return 0;
}


// Provide an another approach to solve the above question 
// (Do you want a hint?).