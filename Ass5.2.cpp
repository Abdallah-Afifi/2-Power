


#include <iostream>
#include <cmath>  //including math libarary to use power function

using namespace std;

int main()
{
    int n, num=2;  //declaring two variables with initialzing num with two for default case 

    do {
          cout << "Enter an integer > 0 : ";  //prompting the user to enter an integar
          cin >> n;  //getting input from the user
    } while (n <= 0); {   
        for (int i = 0; i <= n; i++) {  //iritating n times to calculate and print the numbers
            cout << pow(num, i) << "  ";     //printing num to power i with space for n times
        }

    }
    return 0;
}

