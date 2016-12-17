#include <iostream>
#include <conio.h>
#include <locale.h> 

using namespace std; 

void main() { 
setlocale(LC_ALL, "RUS"); 
int sum = 0, n, i; 

cout << "¬ведите n: "; 
cin >> n; 

for(i = 2; i <= n; i += 2) { 
sum += i;	
} 

cout << "—умма чЄтных чисел от 1 до n: " << sum << endl; 
system("pause"); 
};