#include <iostream>
#include <string>
using namespace std;

int main() {
    //変数の作成
    int myNum = 5;                    //整数
    float myFloatNum = 5.99;          //浮動小数点数
    double myDoubleNum = 9.98;        //浮動小数点数
    char myLetter = 'D';              //キャラクター
    bool myBoolean = false;           //ブール値
    string myString = "Hello, guys";  //弦

    //変数値を出力する
    cout <<"int: " << myNum << "\t\t\t" << "Size of Int: " <<sizeof(myNum)<< " bytes" << "\n";
    cout <<"myFloatNum: " << myFloatNum << "\t\t\t" << "Size of Float: " <<sizeof(myFloatNum)<< " bytes" << "\n";
    cout <<"double: " << myDoubleNum << "\t\t\t" << "Size of Double: " <<sizeof(myDoubleNum)<< " bytes" << "\n";
    cout <<"char: " << myLetter << "\t\t\t" << "Size of Charcter: " <<sizeof(myLetter)<< " bytes" << "\n";
    cout <<"bool: " << myBoolean << "\t\t\t" << "Size of Boolean: " <<sizeof(myBoolean)<< " bytes" << "\n";
    cout <<"string: " << myString << "\t\t\t" << "Size of String: " <<sizeof(myString)<< " bytes" << "\n";

    return 0;
}