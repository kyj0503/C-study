// switch �� �̿��ϱ�
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
  int user_input;
  cout << "���� ������ ǥ�����ݴϴ�" << endl;
  cout << "1. �̸� " << endl;
  cout << "2. ���� " << endl;
  cout << "3. ���� " << endl;
  cin >> user_input;

  switch (user_input) {
    case 1:
      cout << "Psi ! " << endl;
      break;

    case 2:
      cout << "99 ��" << endl;
      break;

    case 3:
      cout << "����" << endl;
      break;

    default:
      cout << "�ñ��Ѱ� ������~" << endl;
      break;
  }
  return 0;
}