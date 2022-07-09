#include <bits/stdc++.h>
#include <Windows.h>
using namespace std;

void print(int n)
{
  if(n==0)
    return;
  cout << n << " ";
  Sleep(100);
  print(n-1);
}

int fact(int n)
{
  if(n == 1)
    return 1;
  else
    return n * fact(n-1);
}

int main(int argc, char const *argv[])
{
  int n;
  cin >> n;
  print(n);
  cout << "\nFactorial of N is : " << fact(n) << endl;
  return 0;
}
