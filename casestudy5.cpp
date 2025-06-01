#include<iostream>
using namespace std;
void inputdata(int scores[6][4], int rows, int cols);
void totalscores(int scores[6][4], int rows, int cols);
void scorelessthan10(int scores[6][4], int rows, int cols);
int main() {
	int scores[6][4];
	int rows = 6;
	int cols = 4;
	inputdata(scores, rows, cols);
	return 0;
}
void inputdata(int scores[6][4], int rows, int cols) {
	for (int i = 0; i < rows; i++)
	{
		cout << "Enter the scores for team " << i + 1 << ": ";
		for (int j = 0; j < cols; j++)
		{
			cin >> scores[i][j];
		}
		cout << endl;
	}
	totalscores(scores, rows, cols);
	scorelessthan10(scores, rows, cols);
}
void totalscores(int scores[6][4], int rows, int cols) {
	
	int max = 0;
	int smax = 0;
	int winner = 0;
	int runnerup = 0;
	for (int i = 0; i < rows; i++)
	{
		int total = 0;
		for (int j = 0; j < cols; j++)
		{
			total += scores[i][j];
		}
		if (total > max) {
			smax = max;
			runnerup = winner;
			max = total;
			winner = i+1;
		}
		else if (total > smax) {
			smax = total;
			runnerup = i+1;
		}
		
	}
	cout << "Winner is " << winner << " with score " << max<<". " << endl;
	cout << "Runner up is " << runnerup<< " with score " << smax <<". " << endl;

}
void scorelessthan10(int scores[6][4], int rows, int cols) {
	
	for (int i = 0; i < rows; i++)
	{
		int count = 0;
		for (int j = 0; j < cols; j++)
		{
			if (scores[i][j] < 10) {
				count++;
		    }
		}
		if (count == 4) {
			cout << "Team " << i + 1 << " couldn't score more than 10 in any round. " << endl;
		}
	}
}
