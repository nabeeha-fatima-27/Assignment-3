//casestudy2
#include<iostream>
using namespace std;
void inputdata(float sales[4][7], int rows, int cols);
void salesperday(float sales[4][7], int rows, int cols);
void salesperitem(float sales[4][7], int rows, int cols);
int main() {
	float sales[4][7];
	int r = 4;
	int c = 7;
	inputdata(sales,  r,  c);
	return 0;
}
void inputdata(float sales[4][7], int rows, int cols) {
	for (int i = 0; i < rows; i++)
	{
		cout << "Enter the sales for the item " << i + 1 << ": ";
		for (int j = 0; j < cols; j++)
		{
			cin >> sales[i][j];
		}
		cout << endl;
	}
	salesperday(sales, rows, cols);
	salesperitem(sales, rows, cols);
}
void salesperday(float sales[4][7], int rows, int cols) {
	int highestsale = 0;
	int day = 0;
     float sum = 0;
	for (int i = 0; i < cols; i++)
	{
		for (int j = 0; j < rows;j++)
		{
			sum += sales[j][i];
		}
		if (sum > highestsale) {
			highestsale = sum;
			day = i+1;
		}
		cout << "Sales on day " << i + 1 << " "<<sum<<endl;
		sum = 0;
	}
	cout << "Highest sale was " << highestsale << " on day " << day << ". " << endl;
	cout << "___________________________________" << endl;
}
void salesperitem(float sales[4][7], int rows, int cols) {
	int mostsold = 0;
	int item = 0;
	float sum = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sum += sales[i][j];
		}
		cout << "Sales per item " << i + 1 << ": " << sum << endl;
		if (sum > mostsold) {
			mostsold = sum;
			item = i + 1;
		}
		sum = 0;
	}
	cout << "Item " << item << " was sold the most with " << mostsold << " sales. " << endl;
}
