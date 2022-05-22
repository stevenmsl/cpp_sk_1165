#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol1165;

/*
Input: keyboard = "abcdefghijklmnopqrstuvwxyz", word = "cba"
Output: 4
Explanation: The index moves from 0 to 2 to write 'c' then to 1
to write 'b' then to 0 again to write 'a'.
Total time = 2 + 1 + 1 = 4.
*/

tuple<string, string, int>
testFixture1()
{
  return make_tuple("abcdefghijklmnopqrstuvwxyz", "cba", 4);
}

/*
Input: keyboard = "pqrstuvwxyzabcdefghijklmno", word = "leetcode"
Output: 73
*/

tuple<string, string, int>
testFixture2()
{
  return make_tuple("pqrstuvwxyzabcdefghijklmno", "leetcode", 73);
}

void test1()
{
  auto f = testFixture1();
  cout << "Expect to see: " << get<2>(f) << endl;
  Solution sol;
  cout << sol.calTime(get<0>(f), get<1>(f)) << endl;
}

void test2()
{
  auto f = testFixture2();
  cout << "Expect to see: " << get<2>(f) << endl;
  Solution sol;
  cout << sol.calTime(get<0>(f), get<1>(f)) << endl;
}

main()
{
  test1();
  test2();
  return 0;
}