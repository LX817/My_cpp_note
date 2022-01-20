#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

void Cin() {
  char p;
  cout << "请输入一段文本：\n";

  //peek 挑取字符
  //查看输入流中的下一个字符并返回
  while ( cin.peek() != '\n' ) {
    //获取字符给 p
    p = cin.get();
    cout << p;
  }
  cout << endl;
}

void eg3() {

  const int size = 50;
  char buf[size];

  cout << "输入一段文本：";
  cin.read(buf, 20);

  //数字符个数
  cout << "字符串收集到的字符数为："
      << cin.gcount() << endl;

  cout << "输入的文本信息是：";
  cout.write(buf, 20);
  cout << endl;
}

void eg4() {
  double result = sqrt(3.0);
  cout << "对 3 开方保留小数点后0 ~ 9 位，结果如下： \n" << endl;
  
  for ( int i=0; i <= 9; i++) {
    cout.precision(i);
    cout << result << endl;
  }
  cout << "当前输出精度为：" << cout.precision() << endl;
}

void eg5() {
  int width = 4;
  char str[20];

  cout << "输入一段文本： \n";
  cin.width(5);

  while (cin >> str) {
    cout.width(width++);
    cout << str << endl;
    cin.width(5);
  }
}

int main() {
  char buf[20];
  cin.ignore(7);
  //字符串以0结尾
  //输出结果自动添上一个0
  cin.getline(buf, 10);
  cout << buf << endl;

  Cin();

  eg3();

  eg4();

  eg5();
  
  return 0;
} 