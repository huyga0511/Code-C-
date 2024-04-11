/*
Bài 4: Viết chương trình nhập vào 1 chuỗi gồm các ký tự a -> z, A -> Z và có thể chưa khoảng trắng. Hãy chuẩn hóa chuỗi đó.
Gợi ý:

    Loại bỏ khoảng trắng đầu cuối.
    Loại bỏ khoảng trắng thừa ở giữa các từ.
    Viết hoa chữ cái đầu, các chữ còn lại viết thường.
Ví dụ:

    Nhap chuoi:    bUI   duC   LONG 
    Ket qua: Bui Duc Long
*/
#include <bits/stdc++.h>
#include <string>
using ll = long long;
using namespace std; 
/*
        - str.substr(x, y)
        - str.find(s)
        - str.erase(x, n)
        - str.replace(x, n, s)
        - str.compare(s)
        - str.insert(x, s)
        - str.size()
*/
int main(){
    string str; 
    getline(cin, str); 
    int i = 0; 
    //Xoá khoảng trắng ở đầu
    while(str[0] == ' '){
        str.erase(0, 1);
    }
    //Xoá khoảng trắng ở cuối
    while(str[str.size() - 1] == ' '){
        str.erase(str.size() - 1, 1);
    }
    //Xoá khoảng trắng ở giữa
    while(i < str.size()){
        if(str[i] == ' ' && str[i + 1] == ' '){
            str.erase(i, 1);
        }
        else ++i;
    }
    //Viết thường toàn bộ xâu
    for(int i = 0; i < str.size(); i++){
        str[i] = tolower(str[i]);
    }
    //Viết hoa chữ cái đầu mỗi từ
    for(int i = 0; i < str.size(); i++){
        if(str[i] == ' ' && str[i + 1] != ' '){
            str[i + 1] = toupper(str[i + 1]);
        }
    }
    str[0] = toupper(str[0]);
    cout << str;
}