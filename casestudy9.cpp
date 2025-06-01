#include<iostream>
using namespace std;
void inputdata(float quality[3][7], float rows, float cols);
void average(float quality[3][7], float rows, float cols);
int main() {
	float quality[3][7];
	float rows = 3;
	float cols = 7;
	inputdata(quality, rows, cols);
}
void inputdata(float quality[3][7], float rows, float cols) {
	for (int i = 0; i < rows; i++)
	{
		cout << "Enter product quality for shift " << i + 1<<": ";
		for (int j = 0; j < cols; j++)
		{
			cin >> quality[i][j];
		}
		cout << endl;
	}
	average(quality, rows, cols);
}
void average(float quality[3][7], float rows, float cols) {
	for (int i = 0; i < rows; i++)
	{
		float average = 0;
		for (int j = 0; j < cols; j++)
		{
			average = average + quality[i][j];
		}
		average = average / cols;
		cout << "Average per shift " << i + 1 << " is " << average << endl;
		if (average > 10) {
			cout << "Shift " << i + 1 << " is critical shift" << endl;
		}
	}
	for (int i = 0; i < cols; i++)
	{
		float average = 0;
		for (int j = 0; j < rows; j++)
		{
			average = average + quality[j][i];
		}
		average = average / rows;
		cout << "Average per day " << i + 1 << " is " << average << endl;
	}
}