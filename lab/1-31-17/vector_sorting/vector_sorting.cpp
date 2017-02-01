/*
 * Sort a vector holding 500 random integers, in decending order
 */

#include <cstdio>
#include <ctime>
#include <iostream>
#include <random>
#include <vector>

void print_vec(std::vector<int> &);
void do_sort(std::vector<int> &);

int main() {
  srand(time(0));
  std::vector<int> vec_in;
  for (int i = 0; i < 500; i++) {
    vec_in.push_back(rand());
  }
  print_vec(vec_in);

  do_sort(vec_in);

  std::cout << "sorted!" << std::endl;
  print_vec(vec_in);
}

void do_sort(std::vector<int> &v) {
  bool sorted = false;
  while (!sorted) {
    sorted = true;
    for (int i = 0; i < v.size(); i++) {
      if (i == v.size())
        continue;
      else if (v[i] < v[i + 1]) {
        std::swap(v[i], v[i + 1]);
        sorted = false;
      }
    }
  }
}

void print_vec(std::vector<int> &v) {
  for (int i = 0; i < v.size(); i++) {
    std::cout << v[i] << ((i % 5 == 0) ? "\n" : " ");
  }
  std::cout << std::endl;
}
