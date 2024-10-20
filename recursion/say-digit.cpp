/*Write a program in C++ to say digits using recursion*/
#include<iostream>
using namespace std;
void sayDigit(int n , string arr[]){
      if (n == 0)  // base case
            return;

        int rem = n % 10;
        int nextDigit = n / 10;

        sayNumber(nextDigit, arr); // recursive relation

        System.out.print(arr[rem] + " ");
}
int main()
{
    
}