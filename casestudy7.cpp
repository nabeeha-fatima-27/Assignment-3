#include<iostream>
using namespace std;
void inputrating(int rating[5][10], int rows, int cols);
void average(int rating[5][10], int rows, int cols);
void count(int rating[5][10], int rows, int cols);
void worstaverage(int rating[5][10], int rows, int cols);
int main() {
	int rating[5][10];
	int rows = 5;
	int cols = 10;
	inputrating(rating, rows, cols);
}
void inputrating(int rating[5][10], int rows, int cols) {
	for (int i = 0; i < rows; i++)
	{
		cout << "Enter the ratings for product " << i + 1 << ": ";
		for (int j = 0; j < cols; j++)
		{
			cin>> rating[i][j];
		}
		cout << endl;
	}
	average(rating, rows, cols);
	count(rating, rows, cols);
	worstaverage(rating, rows, cols);
}
void average(int rating[5][10], int rows, int cols) {
	for (int i = 0; i < rows; i++)
	{
		float average = 0;
		for (int j = 0; j < cols; j++)
		{
			average = average + rating[i][j];
		}
		average = average / 10.0;
		cout << "Average rating: " << average << endl;
	}
}
void count(int rating[5][10], int rows, int cols) {
	for (int i = 0; i < rows; i++)
	{
		int count = 0;
		for (int j = 0; j < cols; j++)
		{
			if (rating[i][j] == 5) {
				count++;
			}
		}
		cout << count << " users gave product " << i + 1 << " a perfect rating. " << endl;
	}
}
void worstaverage(int rating[5][10], int rows, int cols) {
	int worst = rating[0][0];
	int product = 0;
	for (int i = 0; i < rows; i++)
	{
		int average = 0;
		for (int j= 0; j < cols; j++)
		{
			average = average + rating[i][j];
		}
		average = average / 10;
		if (average < worst) {
			worst = average;
			product = i + 1;
		}
	}
	for (int i = 0; i < rows; i++)
	{
		int average = 0;
		for (int j = 0; j < cols; j++)
		{
			average = average + rating[i][j];
		}
		average = average / 10;
		if (average == worst) {
			cout << "Product " << i + 1 << " has worst average of " << worst << endl;
		}
	}
}