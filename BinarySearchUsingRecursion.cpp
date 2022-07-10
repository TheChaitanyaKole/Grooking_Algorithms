#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int to_search, int low,  int high)
{
  if(low<=high)
  {
    int mid = (high+low)/2;
    if(arr[mid] == to_search)
      return mid;
    else if(arr[mid] > to_search)
      return binarySearch(arr, to_search, low, mid-1);
    else if(arr[mid] < to_search)
      return binarySearch(arr, to_search, mid+1, high);
  }
  return -1;
}

int main(int argc, char const *argv[])
{
  int n;
  cout << "Enter Number Of Elements : ";
  cin >> n;
  int arr[n];
  srand(time(0));
  for (int i = 0; i < n; i++)
  {
    arr[i] = rand()%100;
  }
  sort(arr,arr+n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\nEnter Element To Search : ";
  int to_search;
  cin >> to_search;
  int pos = binarySearch(arr, to_search, 0, n-1);
  cout << to_search << " found at position : " << pos << endl;
  return 0;
}

/*
binarySearch arr[], high, low,
arr [mid] == to_search
0 4  2   0 1 2 3
*/
