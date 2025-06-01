#include<iostream>
using namespace std;
void displaystatus(char book[5][5], int rows, int cols);
void count(char book[5][5], int rows, int cols);
void missing(char book[5][5], int rows, int cols);
int main() {
	char book[5][5] = { {'A','I','M','M','I'},{'A','M','M','I','A'},{'I','M','M','M','A'},{'A','I','M','A','I'},{'A','A','M','I','A'}};
	int rows = 5;
	int cols = 5;
	displaystatus(book, rows, cols);
	count(book, rows, cols);
	missing(book, rows, cols);
} 
void displaystatus(char book[5][5], int rows, int cols) {
	for (int i = 0; i < rows; i++)
	{
		cout << "Shelf " << i + 1<<": ";
		for (int j = 0; j < cols; j++)
		{
			cout << book[i][j] << " ";
		}
		cout << endl;
	}
}
void count(char book[5][5], int rows, int cols) {
	int acount = 0;
	int icount = 0;
	int mcount = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0;  j < cols;  j++)
		{
			if (book[i][j] == 'A') {
				acount++;
			}
			else if (book[i][j] == 'I') {
				icount++;
			}
			if (book[i][j] == 'M') {
				mcount++;
			}
		}
	}
	cout << "Available: " << acount << endl;
	cout << "Missing: " << mcount << endl;
	cout << "Issued: " << icount << endl;
}
void missing(char book[5][5], int rows, int cols) {
	int missing = 0;
	int highest = 0;
	int shelf = 0;
	for (int i = 0; i < rows; i++)
	{
		int missing = 0;
		for (int j = 0; j < cols; j++)
		{
			if (book[i][j] == 'M') {
				missing++;
			}
		}
		if (missing > highest) {
			highest = missing;
			shelf = i + 1;
		}

	}
	cout << "Shelf " << shelf << " has the highest missing count " << highest << endl;
}