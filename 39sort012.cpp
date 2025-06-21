#include<iostream>
using namespace std;

void sort012(int arr[], int n)
{
    int i = 0;
    int k = 0;
    int l = n-1;

    while (i<l){
        int temp;
        if (arr[i]==0){
            k++;
            temp = arr[k];
            arr[k]=arr[i];
            arr[i]= temp;
        }
        else if (arr[i]=2){
            l--;
            temp = arr[l];
            arr[l]=arr[i];
            arr[i]= temp;
        }
        else{
            i++;
        }
    }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;

		cin >> size;
		int arr[size];

		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

		sort012(arr, size);

		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}

	
		cout << endl;
	}

	return 0;
}