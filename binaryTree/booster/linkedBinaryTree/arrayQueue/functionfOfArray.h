#pragma once
#include <iostream>
#include <algorithm>
#include <math.h>
#include "myExceptions.h"

template<class T>
void ChangeLength1D(T*& a, int old_length, int new_length) {  
  if (new_length < 0) throw IllegalParameterValue("length must be > 0");
  T* temp = new T[new_length];                           // ������
  int number = std::min(old_length, new_length);  // ȷ����Ҫ���Ƶ�Ԫ�ظ���
  std::copy(a, a + number, temp);  // ��鿴��������end()ָ��ĵ������Ǹ�λ��
  delete []a;
  a = temp;
};  // ����һά����ĳ���