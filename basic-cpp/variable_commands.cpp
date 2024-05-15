#include <iostream>
using namespace std;

int main() {
    //カンマで区切られた複数の宣言とそのタスク
    int x = 5, y = 6, z = 50;
    cout <<"Sum dari 3 nomer adalah: "<<x + y + z<<"\n";

    //正しい変数を特定する
    int minutesPerHour = 60;
    int s = 60;

    cout <<"There are "<< minutesPerHour <<" minutes per hour\n";
    cout <<"There are "<< s <<" seconds in a minute\n";

    const int hoursPerDay = 24;

    /*この値は定数であるため、定数値を使用して再度実行できます。*/
    cout <<"There are " << hoursPerDay <<" hours in a day\n";
    int myAge = 16;

    //以前のユースケースと同様に cout ステートメントを使用して連結する
    cout <<"I am " << myAge <<" years old.";

    return 0;
}