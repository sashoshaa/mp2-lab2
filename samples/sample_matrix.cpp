// ННГУ, ВМК, Курс "Методы программирования-2", С++, ООП
//
// sample_matrix.cpp - Copyright (c) Гергель В.П. 07.05.2001
//   Переработано для Microsoft Visual Studio 2008 Сысоевым А.В. (20.04.2015)
//
// Тестирование верхнетреугольной матрицы

#include <iostream>
#include "utmatrix.h"
//---------------------------------------------------------------------------

void main()
{
    setlocale(LC_ALL, "Russian");
    TMatrix<int> q(3), w(3), e(3);
    int i, j;
    cout << "Тестирование программ поддержки представления матриц и операций над ними" 
        << endl;
    //cin >> q;
    //TMatrix<int> w(q);
    //cin >> w;
    for (i = 0; i < 3; i++)
        for (j = i; j < 3; j++)
        {
            q[i][j] = i;
            w[i][j] = i + 2;
        }
    e = q - w;
    cout << (q != w) << endl;
    cout << "Matrix q = " << endl << q << endl;
    cout << "Matrix w = " << endl << w << endl;
    cout << "Matrix e = q + w" << endl << e << endl;
    TVector<int> a(5), b(5), c(5);
    int s;
    cout << "Тестирование программ поддержки представления векторов и операций над ними" 
        << endl;
    for (int i = 0; i < 5; i++) {
        a[i] = i + 1;
        b[i] = (i + 1) * 2;
    }
    cout << "Vector a = " << endl << a << endl;
    cout << "Vector b = " << endl << b << endl;
    c = a + 4;
    cout << "Vector c = a + 4" << endl << c << endl;
    c = a - 2;
    cout << "Vector c = a - 2" << endl << c << endl;
    c = a * 7;
    cout << "Vector c = a * 7" << endl << c << endl;
    c = a + b;
    cout << "Vector c = a + b" << endl << c << endl;
    c = a - b;
    cout << "Vector c = a - b" << endl << c << endl;
    s = a * b;
    cout << "s = a * b" << endl << s << endl;
}