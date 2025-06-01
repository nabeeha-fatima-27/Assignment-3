#include<iostream>
using namespace std;
void inputdata(char status[5][7], int rows, int cols);
void countpatients(char status[5][7], int rows, int cols);
int main() {
	char status[5][7];
	int rows = 5;
	int cols = 7;
	inputdata(status, rows, cols);
	return 0;
}
void inputdata(char status[5][7], int rows, int cols) {
	for (int i = 0; i < rows; i++)
	{
		cout << "Enter status for patient " << i + 1<<": ";
		for (int j = 0; j < cols; j++)
		{
			cin >> status[i][j];
		}
		cout << endl;
	}
	countpatients(status, rows, cols);
}
void countpatients(char status[5][7], int rows, int cols) {
	
	int s = 0;
	int c = 0;
	int r = 0;
	for (int i = 0; i < rows; i++)
	{
		int scount = 0;
		int ccount = 0;
		int rcount = 0;
		for (int j = 0; j < cols; j++)
		{
			if (status[i][j]=='S')
				scount++;
		    else if (status[i][j] == 'C') 
				ccount++;
		    else if (status[i][j] == 'R') 
				rcount++;
		}
		cout << "Patient " << i + 1 << " remained in critical state for " << ccount << " days." << endl;
		if (scount > 0)
			s++;
		if (ccount > 0)
			c++;
	    if (rcount > 0) 
			r++;
	}
	cout << "Number of patients who were stable: " << s << endl;
	cout << "Number of patients who were in critical state:  " << c << endl;
	cout << "Number of patients who recovered: " << r << endl;
}