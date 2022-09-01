#include <iostream>
#include <list>

using namespace std;

list<int> Union(const list<int>& L1, const list<int>& L2)
{
  list<int> finalList;
  list<int>::const_iterator iterL1 = L1.begin();
  list<int>::const_iterator iterL2 = L2.begin();

  while(iterL1 != L1.end() && iterL2 != L2.end())
  {
    if(*iterL1 < *iterL2)
    {
      finalList.push_back(*iterL1);
      iterL1++;
    }
    if(*iterL1 > *iterL2)
    {
      finalList.push_back(*iterL2);
      iterL2++;
    }
    else
    {
      finalList.push_back(*iterL1);
      iterL1++;
      iterL2++;
    }
  }

  while(iterL1 != L1.end())
  {
    finalList.push_back(*iterL1);
    iterL1++;
  }

  while(iterL2 != L2.end())
  {
    finalList.push_back(*iterL2);
    iterL2++;
  }

  return finalList;
}

int main()
{
  return 0;
}
