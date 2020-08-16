#include<iostream>
#include<cmath>
using namespace std;
int fib(int n);
int factorial(int n);
int sum(int num);
int findMinRec(int A[], int n);
int DecToBin(int decimalNumber);
double fun(double n);

int main()
{
    // Problem 1
    int n,num, result, result1;
    cout<<"Inter a n'th Number : "<<endl;
    cin>>n;
    cout<<"The "<<n<<" th fibonacci number from the Fibonacci series is "<<fib(n)<<endl;


    // Problem 2
    cout<<"Enter a number to find it's Factorial: "<<endl;
    cin>>num;
    if (num < 0)
    {
        cout<<"Factorial of negative number not possible"<<endl;
    }
    else
    {
        result = factorial(num);
        cout<<"The Factorial of "<< num<<" is "<<result<<endl;
    }

    // Problem 3

    cout<<"Enter the number: "<<endl;
    cin>>num;
    result1 = sum(num);
    cout<<"Sum of digits in " <<num<<" is " <<result1<<endl;


    // Problem 4
    int  n1;
    cout<<"How many Numbers are you taken ?"<<endl;
    cin>>n1;
    int A[n1];
    for(int i = 0; i<n1 ;i++)
    {
        cin>>A[i];
    }
   // int p = sizeof(A)/sizeof(A[0]);
    cout <<  "Minimum Number in the array is "<<findMinRec(A, n)<<endl;


    //Problem 5
    int decimal_number;
    cout<<"Enter a Decimal Number : "<<endl;
    cin>>decimal_number;
    cout<<DecToBin(decimal_number) <<" is Binary of "<<decimal_number<<endl;


    //Problem 6
    double d;
    cout<<"Take any Number "<<endl;
    cin>>d;
	cout << "Sum of the series is "<<fun(d) << endl;
    return 0;
}


int fib(int n)
{
   if (n <= 1)
      return n;
   return fib(n-1) + fib(n-2);
}
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return(n * factorial(n - 1));
    }
}

int sum (int num)
{
    if (num != 0)
    {
        return (num % 10 + sum (num / 10));
    }
    else
    {
       return 0;
    }
}
 int findMinRec(int A[], int n)
{
    if (n == 1)
        return A[0];
    return min(A[n-1], findMinRec(A, n-1));
}

int DecToBin(int decimalNumber)
{
    if (decimalNumber == 0)
        return 0;
    else
        return (decimalNumber % 2 + 10 * DecToBin(decimalNumber / 2));
}

double fun(double n) {
	double value = 0;
	if(n==1) {
		return n;
	}
	else {
		value = 2 - pow(2,1-n);
		return value;
	}
	return value;
}



