#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int mini(int arr[],int size)
{
  if(size == 1)
    return arr[0];
  else
    return min(arr[size], mini(arr, size-1));
}

int maxi(int arr[],int size)
{
  if(size == 1)
    return arr[0];
  else
    return max(arr[size], maxi(arr, size-1));
}

int main(int argc, char const *argv[]) {
  cout << "Enter No Of Elements in Array : ";
  int n;
  cin >> n;
  int arr[n];
  srand(time(0));
  for (int i = 0; i < n; i++)
  {
    arr[i] = rand()%100;
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  int minimum = mini(arr,n-1);
  int maximum = maxi(arr,n-1);
  cout << "Min element  in array is : " << minimum << " Max element in array is : " << maximum << endl;
  return 0;
}



/*
arr = 1 2 3 4 5
min = base case: if(size of array is 1)
  return itself
  recursive case
    min(min(arr[size] (arr , size-1))
*/
