#include <iostream>
#include <vector>

template <class T> T accumulate(std::vector<T> v) {
  T sum = T();
  for (int i = 0; i < v.size(); i++)
    sum += v[i];
  return sum;
}

int main() {
  int a, b, c;
  std::cout << "enter 3 integers!" << std::endl;
  std::cin >> a;
  std::cin >> b;
  std::cin >> c;
  std::vector<int> n;
  n.push_back(a);
  n.push_back(b);
  n.push_back(c);
  std::cout << accumulate(n) << std::endl;

  std::string j, k, l;
  std::cout << "enter 3 strings!" << std::endl;
  std::cin >> j;
  std::cin >> k;
  std::cin >> l;
  std::vector<std::string> m;
  m.push_back(j);
  m.push_back(k);
  m.push_back(l);
  std::cout << accumulate(m) << std::endl;

  return 0;
}
