//casestudy4
#include<iostream>
using namespace std;
void inputdata(float temp[5][5], int rows, int cols);
void average(float temp[5][5], int rows, int cols);
void hotandcold(float temp[5][5], int rows, int cols);
int main() {
	float temp[5][5];
	int rows = 5;
	int cols = 5;
	inputdata(temp, rows, cols);
}
void inputdata(float temp[5][5], int rows, int cols) {
	for (int i = 0; i < rows; i++)
	{
		cout << "Enter temperature for zone: " << i + 1 << ": ";
		for (int j = 0; j < cols; j++)
		{
			cin >> temp[i][j];
		}
		cout << endl;
	}
	average(temp, rows, cols);
	hotandcold(temp, rows, cols);
}
void average(float temp[5][5], int rows, int cols) {
	float average = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			average = average + temp[i][j];
		}
		average = average / cols;
		cout << "Average of zone " << i + 1 << ": " << average << endl;
		average = 0;
	}
}
void hotandcold(float temp[5][5], int rows, int cols) {
	
	for (int i = 0; i < rows; i++)
	{
		float maximum = temp[i][0];
		float minimum = temp[i][0];
		for (int j = 0; j < cols; j++)
		{
			if (temp[i][j] > maximum) {
				maximum = temp[i][j];
			}
			else if (temp[i][j]<minimum) {
				minimum = temp[i][j];
			}
		}
		cout << "Zone1:		Extreme hot:  " << maximum << " Extreme cold: " << minimum << endl;
		
	}
}