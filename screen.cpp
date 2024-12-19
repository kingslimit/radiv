#include <iostream>
#include <iomanip>
#include <limits> // Tambahkan ini untuk numeric_limits

using namespace std;

void seat_select(int &y, int &x, char seat[4][15]) {
    cout << "Select seat (ROW > COLUMN)\n* Example : 0 , 9 * \n";

    // Input row validation
    do {
        cout << "ROW    : ";
        cin >> y;
        if (cin.fail() || y < 0 || y > 3) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Invalid input! Please enter a valid row number (0-3).\n";
        } else {
            break;
        }
    } while (true);

    // Input column validation
    do {
        cout << "COLUMN : ";
        cin >> x;
        if (cin.fail() || x < 0 || x > 14) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Invalid input! Please enter a valid column number (0-14).\n";
        } else {
            break;
        }
    } while (true);

    // Seat availability check
    if (seat[y][x] == 'A') {
        seat[y][x] = 'X'; // Mark as filled
        cout << "Seat selected successfully.\n";
    } else {
        cout << "Seat already taken. Please select a different seat.\n";
    }
}
