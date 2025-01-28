#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to create a matrix-like representation of the rods
void displayRods(vector<vector<int>> &rods, int num_disks) {
    // Matrix structure: Each row represents one level of the rods
    vector<vector<string>> matrix(num_disks, vector<string>(3, " "));

    // Fill the matrix based on the rods' state
    for (int rod = 0; rod < 3; ++rod) {
        int level = 0;
        for (int disk : rods[rod]) {
            string disk_str = string(disk, '='); // Visualize the disk with "="
            matrix[num_disks - 1 - level][rod] = disk_str; // Place it in the matrix
            level++;
        }
    }

    // Display the matrix
    cout << "\nCurrent state of the rods:\n";
    for (const auto &row : matrix) {
        for (const auto &col : row) {
            cout << col << "\t"; // Use tabs to align the columns
        }
        cout << endl;
    }

    // Display the rod labels
    cout << "A\tB\tC\n";
}

// Function to check if the game is solved
bool isSolved(vector<vector<int>> &rods, int num_disks) {
    return rods[2].size() == num_disks; // All disks on rod C
}

// Function to move a disk from one rod to another
bool moveDisk(vector<vector<int>> &rods, char from, char to) {
    int from_rod = from - 'A';
    int to_rod = to - 'A';

    // Check if the move is valid
    if (rods[from_rod].empty()) {
        cout << "Invalid move: No disks on rod " << from << " to move.\n";
        return false;
    }

    if (!rods[to_rod].empty() && rods[from_rod].back() > rods[to_rod].back()) {
        cout << "Invalid move: Cannot place a larger disk on a smaller disk.\n";
        return false;
    }

    // Make the move
    rods[to_rod].push_back(rods[from_rod].back());
    rods[from_rod].pop_back();
    return true;
}

int main() {
    int num_disks;
    cout << "Enter the number of disks: ";
    cin >> num_disks;

    // Initialize the rods
    vector<vector<int>> rods(3);
    for (int i = num_disks; i >= 1; --i) {
        rods[0].push_back(i); // All disks start on rod A
    }

    cout << "\nInstructions:\n";
    cout << "1. The goal is to move all disks from rod A to rod C.\n";
    cout << "2. Enter moves in the format 'A B' to move a disk from rod A to rod B.\n";
    cout << "3. You can only move one disk at a time, and a larger disk cannot be placed on a smaller one.\n";

    // Game loop
    while (!isSolved(rods, num_disks)) {
        displayRods(rods, num_disks);

        // Get the user's move
        cout << "\nEnter your move (e.g., A B): ";
        char from, to;
        cin >> from >> to;

        // Validate input
        if (from < 'A' || from > 'C' || to < 'A' || to > 'C') {
            cout << "Invalid input. Please use 'A', 'B', or 'C' for the rods.\n";
            continue;
        }

        // Try to move the disk
        if (!moveDisk(rods, from, to)) {
            cout << "Move failed. Try again.\n";
        }
    }

    // Display the final state
    displayRods(rods, num_disks);
    cout << "\nCongratulations! You solved the Tower of Hanoi puzzle!\n";

    return 0;
}
