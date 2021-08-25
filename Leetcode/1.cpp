#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector <int> twoSum(vector <int>& input, int target) {
  map <int, int> valueToPos;
  for (int i = 0 ; i < input.size() ; ++i) {
    if (valueToPos.find(target - input[i]) != valueToPos.end()) {
      return {i, valueToPos[target - input[i]]};
    }
    valueToPos[input[i]] = i;
  }
  return {-1, -1};
}

int main(void) {
  int n, m;
  cin >> n;
  vector <int> values;
  while (cin >> m) {
    values.push_back(m);
  }
  vector <int> res = twoSum(values, n);
  for (auto a : res) {
    cout << a << " ";
  }
  cout << endl;
  return 0;
}
