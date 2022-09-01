#include <iostream>
#include <list>

using namespace std;

list<int> intersect(const list<int>& L1, const list<int>& L2)
{
  list<int> finalList;
  list<int>::const_iterator iterL1 = L1.begin();
  list<int>::const_iterator iterL2 = L2.begin();

  // check for whether the iterators have reached the end of their lists
  while(iterL1 != L1.end() && iterL2 != L2.end())
  {
    //check if iterators are equal
    if(*iterL1 < *iterL2)
    {
      iterL1++;
    }
    //check if iterators are equal
    if(*iterL1 > *iterL2)
    {
      iterL2++;
    }
    //move iterator into final list when they are equal
    else
    {
      finalList.push_back(*iterL1);
      iterL1++;
      iterL2++;
    }
  }
  return finalList;
}

int main()
{


  return 0;
}
