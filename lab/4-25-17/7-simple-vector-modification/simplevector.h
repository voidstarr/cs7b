#include <cstdlib>
#include <iostream>
#include <memory>
#include <exception>
using namespace std;

struct IndexOutOfRangeException {
  const int index;
  IndexOutOfRangeException(int ix) : index(ix) {}
};

template <class T> class SimpleVector {
  unique_ptr<T[]> aptr;
  int arraySize;

public:
  SimpleVector(int);
  SimpleVector(const SimpleVector &);

  int size() const { return arraySize; }

  T &operator[](int);
  void print() const;
  void push_back(T);
  T pop_back();
};

template <class T> SimpleVector<T>::SimpleVector(int s) {
  arraySize = s;
  aptr = make_unique<T[]>(s);
  for (int count = 0; count < arraySize; count++)
    aptr[count] = T();
}

template <class T> SimpleVector<T>::SimpleVector(const SimpleVector &obj) {
  arraySize = obj.arraySize;
  aptr = make_unique<T[]>(arraySize);
  for (int count = 0; count < arraySize; count++)
    aptr[count] = obj[count];
}

template <class T> T &SimpleVector<T>::operator[](int sub) {
  if (sub < 0 || sub >= arraySize)
    throw IndexOutOfRangeException(sub);
  return aptr[sub];
}

template <class T> void SimpleVector<T>::print() const {
  for (int k = 0; k < arraySize; k++)
    cout << aptr[k] << " ";
    cout << endl;
}

template <class T> void SimpleVector<T>::push_back(T el) {
    unique_ptr<T[]> temp = make_unique<T[]>(arraySize + 1);

    for (int i = 0; i < arraySize; i++){
        temp[i] = aptr[i];
    }
    temp[arraySize] = el;
    if (arraySize > 0)
        aptr.reset();
    aptr = move(temp);
    arraySize++;
    for (int i = 0; i < arraySize; i++) {
        cout << "aptr after move i=" << i << " : " << aptr[i] << endl;
    }
}

template <class T> T SimpleVector<T>::pop_back() {
    if (arraySize <= 0)
        throw "Nothing to pop back!";

    unique_ptr<T[]> temp = make_unique<T[]>(arraySize - 1);

    for (int i = 0; i < arraySize -1; i++)
        temp[i] = aptr[i];
    T eVal = aptr[arraySize - 1];
    arraySize--;
    aptr.reset();
    aptr = move(temp);
    return eVal;


}

/*
template <class T> void SimpleVector<T>::push_back(T el) {
  T def = T();
  for (int i = 0; i < arraySize; i++) {
    if (aptr[i] == def) {
      aptr[i] = el;
      return;
    }
  }
  throw out_of_range("SimpleVector full!");
}


template <class T> void SimpleVector<T>::pop_back() {
  T def = T();
  for (int i = arraySize-1; i > 0; i--) {
    if (aptr[i] != def) {
      aptr[i] = def;
      return;
    }
  }
}
*/
