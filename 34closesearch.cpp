#include <iostream>
using namespace std;

int binarySearchClosest(int arr[], int left, int right, int target)
{
        int min = 0;
        while (left<=right){
            int mid = (left+right)/2;
            if (arr[mid]==target){
                return mid;
            }
            if (target-arr[left]>arr[right]-target){
                min = right;
            }
            else  if (target-arr[left]<=arr[right]-target){
                min = left;
            }
            if(arr[mid]>target){
                right = mid -1;
            } else {
                left = mid + 1;
            }
            }
            return min;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int left = 0;
    int right = n - 1;
    int target;
    cin >> target;
    int ans = binarySearchClosest(arr, 0, n - 1, target);
    cout << ans;
    return 0;
}