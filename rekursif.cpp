//
// Created by f0ursecond on 29/12/2024.
//

#include <iostream>
using namespace std;


int Kali(int a,int b);
int pangkat(int a,int b);
int faktorial(int a);
int fibbonaci(int a);
int isPrime(int a,int num);
int sum_array(int data[], int s);
void print_array(int data[], int start , int s);

int main(int argc, char *argv[]) {

    cout << "3 * 4 = " << Kali(3,4) << endl;

    cout << "2 * 3 = " << pangkat(2,3) << endl;

    cout << "Faktorial 3 = " << faktorial(3) << endl;

    cout << "Fibbonacci 4 = " << fibbonaci(4) << endl;

    cout << "Is Prime 2,4 = " << isPrime(2,4) << endl;

    cout << "Is Prime 2,5 = " << isPrime(2,5) << endl;

    int data1[]  = {2,5,7};

    int size_data1 = sizeof(data1)/sizeof(data1[0]);

    cout << "sum array data1,3 = " << sum_array(data1,size_data1) << endl;

    print_array(data1,0,size_data1);

    return 0;
}

int Kali(int a , int b) {
    if (b == 1) {
        return a;
    } else {
        return a + Kali(a,b - 1);
    }
}


int pangkat(int a , int b) {
    if (b == 1) {
        return a;
    } else {
        return a * pangkat(a, b - 1 );
    }
}

int faktorial(int a) {
    if (a == 1) {
        return a;
    } else {
        return a + faktorial(a - 1);
    }
}

int fibbonaci (int a) {
    if (a == 0 || a == 1) {
        return a;
    } else {
        return fibbonaci(a - 1) + fibbonaci(a - 2);
    }
}

int isPrime(int a, int num) {
    if (num <= 1) {
        return 0;
    }
    if (a * a > num) {
        return 1;
    }
    if (num % a == 0) {
        return 0;
    }
    return isPrime(a + 1, num);
}

int sum_array(int data[], int s) {
    if (s <= 0) {
        return 0;
    } else {
        return sum_array(data, s-1) + data[s-1];
    }
}

void print_array(int data[],int start , int s) {
    if (start  == s) {
        return;
    } else {

        cout <<     data[start] << " ";
        print_array(data,start +1,s);
    }
}
