#include <iostream> //ostream
#include <vector>

//指定：名字空间
using namespace std;

//对一个整形数组求和
int sum (vector<int> Sum) {
  int sum = 0;
  for (int i=0; i<Sum.size(); i++) {
    sum = sum + Sum[i];
  }
  return sum;
}

//用户输入一行整数，忽略空格，算整数和
int inputSum () {
  int sum = 0;
  cout << "\n输入一串整数可任意数目的空格：";
  int i;
  while (cin >> i) {
    sum += i;
    while (cin.peek() == ' ') {
      cin.get();
    }
    if (cin.peek() == '\n') {
      break;
    }
  }
  cout << "结果是：" << sum << endl;
  return 0;
}

int main() {
  vector<int> a;
  for (int i; i<10; i++) {
    a.push_back(i);
  }
  //console out（控制台输出）
  cout << sum(a);

  inputSum();

  return 0;
} 