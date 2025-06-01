//casestudy 1
#include<iostream>
using namespace std;
void inputmarks(int marks[10][5], int rows, int cols);
void averagentotal(int marks[10][5], int rows, int cols);
char gradecalculator(int total);
int main() {
	int marks[10][5];
	int r = 10;
	int c = 5;
	inputmarks(marks, r, c);

}
void inputmarks(int marks[10][5], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		cout << "Enter marks for student " << i + 1 << ": ";
		for (int j = 0; j < cols; j++)
		{
			cin >> marks[i][j];
		}
		cout << endl;
	}
	averagentotal(marks, rows, cols);
}
void averagentotal(int marks[10][5], int rows, int cols) {
	float total = 0;
	float average = 0;
	int topscore = 0;
	int topscorer = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			total = total + marks[i][j];
		}
		average = total / cols;
		cout << "Total: " << total << ", " << "Average: " << average << ", ";
		if (average > topscore) {
			topscore = average;
			topscorer = i + 1;
		}
		gradecalculator(total);
		cout << "Grade: " << gradecalculator(total) << endl;
		average = 0;
		total = 0;
	}
	cout << "Topscorer: " << "Student " << topscorer << endl;
}
char gradecalculator(int total) {
	float percentage = 0;
	percentage = (total / 500.0) * 100;
	if (percentage >= 90) {
		return 'A';
	}
	else if (percentage >= 80 && percentage < 90) {
		return 'B';
	}
	else if (percentage >= 70 && percentage < 80) {
		return 'C';
	}
	else if (percentage >= 60 && percentage < 70) {
		return 'D';
	}
	else if (percentage >= 50 && percentage < 60) {
		return 'E';
	}
	else return 'F';
}
