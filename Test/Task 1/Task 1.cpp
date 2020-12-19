#include <iostream>
using namespace std;

// функция проверки чётности числа с возвращением значения

int parity(int num) {

    int answer = num % 2;

    if (answer == 0) {
        cout << "The number is parity" << endl;
        cout  << sizeof(answer);
        return answer;
    }
    else {
        cout << "The number is not parity" << endl;
        cout  << sizeof(answer);
        return answer;
    }
}

// функция проверки чётности числа с возвращением логического значения
bool Is_parity(int num) {
    bool ans = num % 2;
    if (ans == 0) {
        cout << "The number is parity";
        cout << endl << sizeof(ans);
        return ans;
    }
    else {
        cout << "The number is not parity" << endl;
        cout << sizeof(ans);
        return ans;
    }

}




int main()
{
    int num;
    cin >> num;

    
    Is_parity(num);


    return 0;
}


