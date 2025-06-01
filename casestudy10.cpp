#include<iostream>
using namespace std;
void inputdata(int votes[4][6], int rows, int cols);
void total(int votes[4][6], int rows, int cols);
void voterturnout(int votes[4][6], int rows, int cols);
void winners(int votes[4][6], int rows, int cols);
int main() {
	int votes[4][6];
	int rows = 4;
	int cols = 6;
	inputdata(votes, rows, cols);
}
void inputdata(int votes[4][6], int rows, int cols) {
	for (int i = 0; i < rows; i++)
	{
		cout << "Enter votes for candidate " << i + 1<<": ";
		for (int j = 0; j < cols; j++)
		{
			cin >> votes[i][j];
		}
		cout << endl;
	}
	total(votes, rows, cols);
	voterturnout(votes, rows, cols);
	winners(votes, rows, cols);
}
void total(int votes[4][6], int rows, int cols) {
	for (int i = 0; i < rows; i++)
	{
		int total = 0;
		for (int j = 0; j < cols; j++)
		{
			total = total + votes[i][j];
		}
		
		cout << "Total votes of candidate " << i + 1 << " is " << total << ". " << endl;
	}
	for (int i = 0; i < cols; i++)
	{
		int total = 0;
		for (int j = 0; j < rows; j++)
		{
			total = total + votes[j][i];
		}
	
		cout << "Total votes of polling station " << i + 1 << " is " << total << ". " << endl;
	}
}
void voterturnout(int votes[4][6], int rows, int cols) {
	for (int i = 0; i < cols; i++)
	{
		int total = 0;
		for (int j = 0; j < rows; j++)
		{
			total = total + votes[j][i];
		}
		if (total < 100) {
			cout << "Voterturnout of station " << i + 1 << " is " << " less than 100" << endl;
		}
	}
}
void winners(int votes[4][6], int rows, int cols) {
	int max = 0;
	for (int i = 0; i < rows; i++)
	{
		int total = 0;
		for (int j = 0; j < cols; j++)
		{
			total = total + votes[i][j];
		}
		if (total > max) {
			max = total;
		}
	
	}
	for (int i = 0; i < rows; i++)
	{
		int total = 0;
		for (int j = 0; j < cols; j++)
		{
			total = total + votes[i][j];
		}
		if (total == max) {
			cout << "Candidate " << i + 1 << " wins." << endl;
		}
	}
}
