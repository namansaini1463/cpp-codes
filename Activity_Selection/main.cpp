#include <iostream>
#include "ActivitySelection.h"

using namespace std;

int main()
{
  int s[] = {1, 3, 0, 5, 3, 5, 6, 8, 8, 2, 12};
  int f[] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
  int n = sizeof(s) / sizeof(s[0]);

  ActivitySelection as;
  as.sortActivities(s, f, n);
  as.printMaxActivities(s, f, n);

  return 0;
}
