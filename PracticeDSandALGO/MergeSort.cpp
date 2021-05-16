#include<iostream>

using namespace std;

////Merging is a heart of merge sort
void Merge(int* Arr, int p, int q, int r)
{
	int n1 = q - p + 1;
	int n2 = r - q;

	int *ArrL = new int[n1 + 1];
	int *ArrR = new int[n2 + 1];

	for (int i = 0; i < n1; i++)
	{
		ArrL[i] = Arr[p+i];
	}
	for (int j = 0; j < n2; j++)
	{
		ArrR[j] = Arr[q+j+1];
	}
	ArrL[n1] = 98765;//big number
	ArrR[n2] = 98765;//big number

	int i = 0, j = 0;
	for (int k = p; k <= r; k++)
	{
		if (ArrL[i] <= ArrR[j])
		{
			Arr[k] = ArrL[i];
			i++;
		}
		else
		{
			Arr[k] = ArrR[j];
			j++;
		}
	}
}


/*Space complexity
For Extra arrya O(n)
For Function stack O(log n)
Total--> O(n) + O(log n) ==> O(n)
*/

////Merge sort is out of space algorithm
////Not good for small amount of n

/*
Time complexity -->
O(n log n) No best or worst case, sorted or unsorted arrary , time required is same.
*/
void MergeSort(int* Arr,int p,int r)
{
	if (p < r)
	{
		int q = (r + p) / 2;
		MergeSort(Arr, p, q);
		MergeSort(Arr, q+1, r);
		Merge(Arr, p, q, r);
	}
}

int main(void)
{
	int Arr[] = { 80,5,70,4,60,3,50,2 };
	MergeSort(Arr, 0, 7);
	//Merge(Arr, 0, 3, 7);

	int t = 0;
	while (t != 7)
	{
		cout << "val   " << Arr[t] << endl;
		t++;
	}

	return 0;
}