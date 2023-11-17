// 3003.cpp 킹, 퀸, 룩, 비숍, 나이트, 폰
#include <iostream>
using namespace std;

int main()
{

  int arr[6] = {1, 1, 2, 2, 2, 8};
  int input;

  for (int i = 0; i < 6; i++)
  {
    cin >> input;

    cout << arr[i] - input << ' ';
  }
  return 0;
}