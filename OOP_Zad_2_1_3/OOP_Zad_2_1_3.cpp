#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "RevArr.h"
using namespace std;

int main()
{
    int n_arr;
    cin >> n_arr;
    RevArr a1(n_arr);
    a1.getElms();
    cout << endl;
    a1.revElms();
    a1.getElms();
    return 0;
}