#include <iostream>

using namespace std;

template <typename Iterator, typename T>
auto find_two_elements_with_sum(Iterator first, Iterator last, T c)
{
  bool trueIterators = false;
  int arr[10] = {0,1,2,3,4,5,6,7,8,9};

  if(first == last || first > last) {
    throw runtime_error("ERROR WITH ITERATOR RANGE");
  }
  if(c < 1 || c > 17) {
    throw runtime_error("ERROR WITH SUM VALUE");
  }
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
      cout << "Our Iterators " << first << " " << last << endl;
      break;
    }
 }
 return 0;
}

int main()
{
  int sumElement, it_f, it_s;
  sumElement = 10;
  it_f = 0;
  it_s = 9;
  try {
    find_two_elements_with_sum(it_f, it_s, sumElement);
  }
  catch(const std::exception& e) {
		cout << e.what() << endl;
	}
}
