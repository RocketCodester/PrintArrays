#include <iostream>
using namespace std;

void printarray (int arg[], int length) {
  for (int n=0; n<length; ++n)
    cout << arg[n] << ' ';
  cout << '\n';
}

int main ()
{
  int firstarray[] = {5, 10, 15};
  int secondarray[] = {2, 4, 6, 8, 10};
  int f[100]={1,1,1,1};
  printarray (firstarray,3);
  printarray (secondarray,5);
  printarray (f,10);
}
