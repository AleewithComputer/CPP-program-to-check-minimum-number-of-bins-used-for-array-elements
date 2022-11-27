#include<iostream>
using namespace std;


int next(int weight[], int n, int c)
{

	int res = 1, bin_rem = c;

	
	for (int i = 0; i < n; i++) {
	
		if (weight[i] > bin_rem) {
			res++; 
			bin_rem = c - weight[i];
		}
		else
			bin_rem -= weight[i];
	}
	return res;
}
int main()
{
	int weight[] = { 2, 3, 1, 3, 4,9, 8 };
	int c = 10;
	int n = sizeof(weight) / sizeof(weight[0]);
	cout << "Number of bins Required : "<< next(weight, n, c)<<endl;

	cout<<n;


	return 0;
}

