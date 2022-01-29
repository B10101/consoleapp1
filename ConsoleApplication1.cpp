

#include <iostream>
using namespace std;
#include <math.h>
 #include <iomanip>
 using std::setw;

void pesh();
void divide();
void evenorodd();
void leapyear();
void factors();
void primenumber();
void lcm();
void evenandodd();
void evenandoddwitharray();
void operations();
void operations2();
void positive();
void fibonacci();
int add(int a, int b);
void askeven();
void pointer();
void pointarr();
void pointersandfunctions0(int *start, int *end);
void pointersandfunctions1(const int *start, const int *end);
void pointersandfunctions2();
void primespec();


int main()

{   
    fibonacci();
    
    return 0;
}
int add(int a, int b) {
    int sum;
    sum = a + b;
    return sum;
    
}

void evenorodd() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0)
    {
        cout << "The number is even";


    }
    else
        cout << "the number is odd";



    cout << endl;
   
}

void leapyear() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                cout << year << " is a leap year";
            }
            else
                cout << year << "is not a leap year";
        }
        else
            cout << year << "is a leap year";

    }
    else
        cout << year << " is not a leap year";

}

void primenumber() {
    int i, number;
    bool Isprime = true;
    cout << "Enter a positive integer";
    cin >> number;

    if (number == 1 || number == 0) {
        Isprime = false;

    }
    else {
        for ( i = 1; i <= number/2; i++)
        {
            if (number % i == 0)
            {
                Isprime = false;

            }
            else
            {
                Isprime = true;
            }
        }

    }

    if (Isprime) {
        cout << number << "is prime";
    }
    else {
        cout << number << "is not prime";
    }


    
}

void factors() {
    int number, i;
    cout << "Enter a number: ";
    cin >> number;
    cout << "The factors of " << number << " are:"<< endl;
    for  (i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            cout << i << endl;
        }
    }


}

void lcm() {
    int num1, num2, max;
    cout << "Enter two numbers";
    cin >> num1 >> num2;

    max = (num1 > num2) ? num1 : num2;

    do
    {
        if (max % num1 == 0 && max % num2 == 0) {
            cout << "lcm is " << max;
        }
        else
        {
            max += 1;
        }

    } while (true);
}

void evenandodd() {
    int number, i;
    number = 100;
    
  
    for ( i = 0; i < number; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " is an even number "<<endl;
        }
        else
             cout << i << " is an odd number "<<endl;
    }
    
}

void evenandoddwitharray() 
{
    int numbers[101], even[50], odd[50], i, j = 0, k = 0;
    for (i = 0; i <101; i++)
    {
        numbers[i] = i;

    }
    cout << "\nStored Data in Array :: \n\n";
    for (i = 1; i < 101; i++)
    {
        cout << " " << numbers[i] << " ";
    }

    // separate even and odd numbers
    for ( i = 0; i <=100; i++)
    {
        if (numbers[i] % 2 ==0)
        {
            even[j] = numbers[i];
            j++;
        }
        else
        {
            odd[k] = numbers[i];
            k++;
        }
    }

    // display even and odd arrays
    cout << "\nElements in the even array are:: \n\n";
    for ( i = 0; i < j; i++)
    {
        cout << " " << even[i] << " ";
    }
    cout << "\n The elemens in the odd aray are:: \n\n";
    for (i = 0; i < k; i++) {
        cout << " " << odd[i] << " ";

    }
}

void operations() {
    char oper;
    int num1, num2;

    cout << "\n Enter an operator";
    cin >> oper;
    cout<<"\nEnter two numbers: \n";
    cin >> num1 >> num2;

    switch (oper)
    {
    case '+':
        cout << "\nThe sum of" << num1 << "and" << num2 << "is" << num1 + num2;
        break;
    case '-':
        cout << "\nThe diff of" << num1 << "and" << num2 << "is" << num1 - num2;
        break;
    case '*':
        cout << "\nThe mult of" << num1 << "and" << num2 << "is" << num1 * num2;
        break;
    default:
        break;
    }




}

void operations2() {
    char oper;
    int num1, num2;

    cout << "\n Enter an operator";
    cin >> oper;
    cout << "\nEnter two numbers: \n";
    cin >> num1 >> num2;

    if (oper == '+')
    {
        cout << "\nThe sum of" << num1 << "and" << num2 << "is " << num1 + num2;
    }
    else if (oper == '-')
    {
        cout << "\nThe diff of" << num1 << "and" << num2 << "is " << num1 - num2;
    }
    else if (oper == '*')
    {
        cout << "\nThe mult of" << num1 << "and" << num2 << "is " << num1 * num2;
    }
    else
        cout << "\nError!";
}

void positive() {
    int number;

    cout << "\nEnter a number: ";
    cin >> number;

    if (number >= 0)
    {
        cout << number << " is a positive integer";
    }
    else if (number <= 0)
    {
        cout << number << "\n is a negative intger";
    }
    else
        cout << "zero";

}

void fibonacci() {
    int i,n, t1 = 0, t2=1, next=0;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "\nFibonacci series";
    for ( i = 0; i <=n; i++)
    {
        if (i == 1) {
            cout << t1 << ",";
            continue;
        }
        if (i == 2) {
            cout << t2 << ",";
            continue;
        }
        next = t1 + t2;
        t1 = t2;
        t2 = next;

        cout << next << ",";
    }

}

void askeven() {
    int i, start, stop, even, sumeven = 0, sumodd = 0;
       
    cout << "Enter the start point: ";
    cin >> start;
    cout << "\nEnter the stopping point: ";
    cin >> stop;
    cout << "The even numbers from " << start << " to" << stop << " is: \n";
    for ( i = start; i <= stop; i++)
    {
        if (i % 2 == 0) {
            cout << i << ",";
            sumeven +=i;
        }
    }
    cout << "\n\n" << "The odd numbers from "<<start<<" to " <<stop<<" are: \n";
    for (i = start; i <= stop; i++) {
        if (i % 2 != 0) {
            cout  << i << ",";
            sumodd += i;
        }
    }
    cout << "\nsum of even is: " << sumeven;
    cout << " \nSum of odd is: " << sumodd;
}

void pointer() {
    int num1, num2, * p1, * p2;
    num1 = 5;
    num2 = 6;
    p1 = &num1;
    p2 = &num2;
    *p1 = 12;
    p1 = p2;
    *p1 = 10;

    cout << "\n" << num1;
    cout << "\n" << num2;
}

void pointarr() {
    int numbers[5], *p;
    // basic operations
    p = numbers;
    *p = 10;
    p++; // increase value of numbers[0] to numbers[1];
    *p = 20;
    p = &numbers[2]; // p = location of numbers[2]
    *p = 30;
    p = numbers + 3;
    *p = 40;
    p = numbers;
    *(p + 4) = 50;

    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i]<< ", ";
    }
}

// pointers and functions
void pointersandfunctions0(int *start, int *end){
    // incrementing functions
    int *current = start;
    while (current != end)
    {
        ++(*current);
        ++current;
    }

}

void pointersandfunctions1(const int *start, const int *end) {
    const int *current = start;
    while (current != end) {
        cout << *current<< "\n";
        ++current;
    }
}

void pointersandfunctions2() {
    int numbers[] = { 12, 22, 32 };
    pointersandfunctions0(numbers, numbers+3);
    pointersandfunctions1(numbers, numbers + 3);
}

void primespec() {



    int x = 500; //  Declaring a variable x

    cout << "Here is the list of all the prime numbers Between 100and 500 " << x << endl;
    for (int m = 100; m < x; m++) {     //implementing for loop to find out prime numbers
        for (int n = 2; n * n <= m; n++)
        {
            if (m % n == 0)
                break;
            else if (n + 1 > sqrt(m)) {
                cout << m << endl;
            }
        }
    }
}
void pesh() {
    int x;
    
    while (true)
    {
        cout << "Enter a value: \n";
        cin >> x;
        switch (x)
        {
        case 1:
            cout << "the value is 1 \n";
            break;
        case 2:
            cout << "the value is 2 \n";
            break;
        default:
            cout<< "Enter the right value: ";
            break;
        }
    }
}
void divide() {
    int i, j;
    auto ans=0;

    i = 12;
    j = 5;

    ans = i / j;
    cout << ans;
}
