#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int to_search, int size)
{
  int high,low,mid;
  low = 0;
  high = size;
  while (low <= high)
  {
    mid = (high+low)/2;
    if (arr[mid] < to_search)
    {
      low = mid+1;
    }
    else if (arr[mid] > to_search)
    {
      high = mid-1;
    }
    else
      return mid;
  }
  return -1;
}

void swap(int & small, int & large)
{
  int k = large;
  large = small;
  small = k;
}

void sort(int arr[], int n)
{
  for(int i = 0; i < n-1; i++)
  {
    int small = i;
    for(int j = i+1; j < n; j++)
    {
      if(arr[small] > arr[j])
        swap(arr[small], arr[j]);
    }
  }
}

int main(int argc, char const *argv[]) {
  int n;
  cout << "Enter Number Of Elements : ";
  cin >> n;
  int arr[n];
  srand(time(0));
  for (int i = 0; i < n; i++)
  {
    arr[i] = rand()%100;
  }
  //sort(arr,arr+n);
  sort(arr,n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\nEnter Element To Search : ";
  int to_search;
  cin >> to_search;
  int pos;
  pos = binarySearch(arr, to_search, n);
  cout << to_search << " found at position : " << pos << endl;
  return 0;
}
