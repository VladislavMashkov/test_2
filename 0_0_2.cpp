#include <iostream>

using namespace std;

template <typename Iterator, typename T>
auto find_two_elements_with_sum(Iterator first, Iterator last, T c)
{
 bool trueIterators = false;
 int arr[10] = {0,1,2,3,4,5,6,7,8,9};
 while(first != last)
 {
   int Summ = arr[first] + arr[last];
   if(Summ < c)
       first++;
   else if(Summ > c)
       last--;
   else
   {
     trueIterators = true;
     cout << "True Iterator is " << trueIterators << endl;
     cout << "Our Iterators " << first << " " << last << endl;
     break;
   }
 }
 return 0;
}

int main()
{
 int sumElement;
 cin >>  sumElement;
 find_two_elements_with_sum(0, 9, sumElement);
}
