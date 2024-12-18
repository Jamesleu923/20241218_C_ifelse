// 20241218_C_ifelse.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
int main()
{

    //讓使用者自己輸入年紀,存入到age變數中.
    float age=0;
    cout << "請輸入年紀來決定買什票?" << endl;
    cin >> age;
    printf("你輸入的年紀為%.2f\n", age);
    if (age <= 0)
        return -1;


    //判別開始.....
    if (age < 6) {
        cout << "不用錢!" << endl;
        return 0;
    } 
    else  //6 以上
    {

        if ((age >= 6) && (age < 12)) {
            cout << "半票!" << endl;
            return 0;
        }
        else {

            if ((age >= 12) && (age < 18)) {
                cout << "學生票!" << endl;
                return 0;
            }
            else {
                cout << "全票!" << endl;
                return 0;
            }
        }
    }


 

}
void test4() {
    // if ...else if ..else if ...else
    if (true) {
        //
    }
    else if (true) {

    }
    else if (true) {

    }
    else if (true) {

    }
    else
    {

    }

}
void test3() {
    int k = -2;
    //案例 三
    if (k > 0) {
        printf("程式為正值\n");


        printf("K值為%d\n", k);
        printf("程式結束!\n");
    }
}
void test2() {
    int k = 2;
    //案例 二
    if (k > 0) {
        printf("程式為正值\n");
        printf("K值為%d\n", k);
    }

    printf("程式結束!\n");
}
void test1() {
    int k = 1;
    //案例 一
    if (k < 0) //因為if沒有用 {  }框住區塊作用程式碼,所以只限其下方第一列為作用範圍
        printf("程式為負值\n");
    printf("程式結束!");
}

