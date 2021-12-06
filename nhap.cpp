#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> A; // Khởi tạo một map A

    // Thêm vào map A một số phần tử.
    A["One"] = 1;
    A["Two"] = 2;
    A["Three"] = 3;

    // Duyệt và xuất ra từng cặp giá trị key: value của mỗi phần tử trong map A
    map<string, int>::iterator it;
    for (it = A.begin(); it != A.end(); it++) {
        cout << it->first << ": " << it->second << endl;
    }
}