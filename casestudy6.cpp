#include<iostream>
using namespace std;
void displayseats(char seats[6][4], int rows, int cols);
void bookaseat(char seats[6][4], int rows, int cols);
void count(char seats[6][4], int rows, int cols);
void maxseats(char seats[6][4], int rows, int cols);
int main() {
	char seats[6][4] = { {'E','B','E','E'},{'B','B','B','B'},{'E','E','E','B'},{'E','E','B','B'},{'E','B','B','E'},{'E','E','E','E'} };
	int rows = 6;
	int cols = 4;
	displayseats(seats, rows, cols);
	bookaseat(seats, rows, cols);
	count(seats, rows, cols);
	maxseats(seats, rows, cols);
	return 0;
}
void displayseats(char seats[6][4], int rows, int cols) {
	for (int i = 0; i < rows; i++){
		cout << "Row " << i+1 << ": ";
		for (int j = 0; j < cols; j++)
		{
			cout << seats[i][j]<<" ";
		}
		cout << endl;
	}
}
void bookaseat(char seats[6][4], int rows, int cols) {
	int row = 0;
	int col = 0;
	cout << "Enter the row of seat being booked(0-5): ";
	cin >> row;
	row--;
	cout << "Enter the column of seat being booked(0-3): ";
	cin >> col;
	col--;
	if (seats[row][col] == 'B') {
		cout << "Couldn't book. Seat already booked!" << endl;
	}
	else if (seats[row][col] == 'E') {
		seats[row][col] = 'B';
		cout << "Seat booked successfully! " << endl;
	}
	for (int i = 0; i < rows; i++) {
		cout << "Row " << i + 1 << ": ";
		for (int j = 0; j < cols; j++)
		{
			cout << seats[i][j] << " ";
		}
		cout << endl;
	}
}
void count(char seats[6][4], int rows, int cols) {
	int count = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (seats[i][j] == 'E') {
				count++;
			}
		}
	}
	cout << "Total Available seats: " << count << endl;
}
void maxseats(char seats[6][4], int rows, int cols) {
	int max = 0;
	int count = 0;
	int row = 0;
	for (int i = 0; i < rows; i++)
	{
		int count = 0;
		for (int j = 0; j < cols; j++)
		{
			if (seats[i][j] == 'E') {
				count++;
			}
		}
		if (count > max) {
			max = count;
			row = i + 1;
		}
	}
	cout << "Row " << row << " has maximum empty seats i.e. " << max << endl;
}