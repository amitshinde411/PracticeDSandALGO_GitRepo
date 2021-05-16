#include<iostream>

using namespace std;


////Time comlexity
////Best case - O(n) sorted list is given
////Worst case - O(n^2) 
////Space complexity --> O(1)
////Inspace algorithm
void InsertionSort(int* Arr)
{

	for (int j = 1; j < 9; j++)
	{
		int key = Arr[j];
		int i = j - 1;
		while (i >= 0 && Arr[i] > key)
		{
			Arr[i + 1] = Arr[i];
			i = i - 1;
		}
		Arr[i + 1] = key;
	}

}
//
//int main(void)
//{
//	int Arr[] = { 9,6,5,0,8,2,7,1,3 };
//	InsertionSort(Arr);
//	int t = 0;
//	while (t != 9)
//	{
//		cout << "val   " << Arr[t] << endl;
//		t++;
//	}
//	return 0;
//}