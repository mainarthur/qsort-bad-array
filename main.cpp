#include <iostream>

using namespace std;

int *enterArray(int n);
void printArray(int *arr, int n);
int *genrateArray(int n);
void insertAt(int *arr, int index, int value);

int main()
{
	int n;

	cin >> n;

	int *arr = genrateArray(n);
	printArray(arr, n);

	return 0;
}

int *genrateArray(int n)
{
	int *arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		insertAt(arr, (int) i / 2, i + 1);
	}

	return arr;
}

void insertAt(int *arr, int index, int value)
{
	for (int i = value; i > index; i--)
	{
		arr[i] = arr[i-1];
	}

	arr[index] = value;
}

int *enterArray(int n)
{
	int *arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	return arr;
}

void printArray(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}