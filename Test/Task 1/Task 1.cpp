#include <iostream>
using namespace std;

// функция проверки чётности числа с возвращением значения

int parity(int num) {

    int answer = num % 2;

    if (answer == 0) {
        cout << "The number is parity" << endl;
        cout  << "Size: " << sizeof(answer) << endl;
        return answer;
    }
    else {
        cout << "The number is not parity" << endl;
        cout << "Size: " << sizeof(answer) << endl;
        return answer;
    }
}

// функция проверки чётности числа с возвращением логического значения
bool Is_parity(int num) {
    bool ans = num % 2;
    if (ans == 0) {
        cout << "The number is parity" << endl;
        cout << "Size: " << sizeof(ans) << endl;
        return ans;
    }
    else {
        cout << "The number is not parity" << endl;
        cout << "Size: " << sizeof(ans) << endl;
        return ans;
    }

}




int main()
{
    int num, num_1;
    
    cin >> num >> num_1;

    parity(num);
    Is_parity(num_1);


    return 0;
}



