#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <deque>
#include <string>
#include <sstream>
#include <algorithm>
#include <stack>
using namespace sol1165;
using namespace std;

/*takeaways
  - use a hash table to store the index of each char
*/

int Solution::calTime(string keyboard, string word)
{
  auto keys = unordered_map<char, int>();
  for (auto i = 0; i < keyboard.size(); i++)
    keys[keyboard[i]] = i;

  auto timeSpent = 0, pos = 0;

  for (auto c : word)
    timeSpent += abs(keys[c] - pos), pos = keys[c];

  return timeSpent;
}