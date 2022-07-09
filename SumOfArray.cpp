#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int size)
{
  if (size == 0)
    return arr[size];
  else
    return arr[size] + sum(arr, size-1);
}

int main(int argc, char const *argv[])
{
  cout << "Enter size of Array : ";
  int size;
  cin >> size;
  int arr[size];
  srand(time(0));
  for(int i=0; i<size; i++)
    arr[i] = rand()%100;
  for(int i=0; i<size; i++)
    cout << arr[i] << " ";
  cout << endl;
  cout << "\nSum of Array is : " << sum(arr, size-1) << endl;
  return 0;
}
