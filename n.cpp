#include <iostream>
#include <conio.h>
#include <locale.h> 

using namespace std; 

void main() { 
setlocale(LC_ALL, "RUS"); 
int sum = 0, n, i; 

cout << "������� n: "; 
cin >> n; 

for(i = 2; i <= n; i += 2) { 
sum += i;	
} 

cout << "����� ������ ����� �� 1 �� n: " << sum << endl; 
system("pause"); 
};