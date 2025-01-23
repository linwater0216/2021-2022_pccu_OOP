/*
請設計一程式，讓使用者輸入姓名、體重、身高，之後輸出姓名和BMI。

BMI = 體重 (公斤) / (身高 * 身高) (公尺)

輸入說明：輸入三個值，分別為姓名(string)、體重(double)、身高(double)，請不須考慮例外狀況。

輸出說明：根據上方公式計算 BMI 至小數點後第 2 位，並印出姓名與BMI。

範例輸入：陳時中 80 1.7

範例輸出：陳時中 27.68

※ 提示：使用 setprecision 設定小數點位數，並自行加入所需的函式庫。

*/ 

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	string a;
    double bmi,hi,fa;
    cin>>a;
	cin>>fa>>hi;
    bmi=fa/(hi*hi);
    cout<<a<<fixed<<setprecision(2)<<bmi;
    return 0;
}
