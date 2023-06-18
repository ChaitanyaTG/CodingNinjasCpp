//
//  main.cpp
//  CodingNinjasCpp
//
//  Created by Chaitanya Gadkari on 19/05/23.
//
/*
#include <iostream>
using namespace std;

int main() {
    int l, b;
    cin>>l>>b;
    int area;
    area = l*b;
    cout<<area;
    
    return 0;
}

#include<iostream>
#include<string>
using namespace std;

int main() {
    string name;
    int age;
    cin >> name >> age; // Taking name and age as input
    cout << "The name of the person is " << name << " and the age is " << age << ".";
    return 0;
}

#include <utility>

pair < int, int > swap(pair < int, int > swapValues) {
    int temp = swapValues.first;

    
    swapValues.first = swapValues.second;
    swapValues.second = temp;

    return swapValues;
}
 

#include <utility>
using namespace std;

pair <int, int> swap(pair < int, int> swapValues) {
    int temp = swapValues.first;
    swapValues.first = swapValues.second;
    swapValues.second = temp;
    
    return swapValues;
}
 

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 5;
    
    int c = a + b * 10;
    cout<<c;
    
    return 0;
}
 

#include <iostream>
using namespace std;

int main() {
    int x = 7--2;
    cout<<x;
    
    return 0;
}
 

#include<iostream>
using namespace std;

int main() {
    int principal, time, si;
    double rate;
    cin >> principal;
    cin >> rate;
    cin >> time;

    si = (principal * rate * time) / 100;
    cout << si;
    return 0;
}
 
#include <iostream>
using namespace std;

int main() {
    
    float num1, num2, result;
    char oper;
    
    cout<<"Enter First Number: "<<endl;
    cin>>num1;
    
    cout<<"Enter Second Number: "<<endl;
    cin>>num2;
    
    cout<<"Choose an operation to perform (+,-,*,/): "<<endl;
    cin>>oper;
    
    switch(oper) {
        case '+':
            result = num1 + num2;
            cout<<"The Result is: "<<num1<<" "<<oper<<" "<<num2<<" ="<<result<<endl;
            break;
            
        case '-':
            result = num1 - num2;
            cout<<"The Result is: "<<num1<<" "<<oper<<" "<<num2<<" ="<<result<<endl;
            break;
            
        case '*':
            result = num1 * num2;
            cout<<"The Result is: "<<num1<<" "<<oper<<" "<<num2<<" ="<<result<<endl;
            break;
            
        case '/':
            result = num1 + num2;
            cout<<"The Result is: "<<num1<<" "<<oper<<" "<<num2<<" = "<<result<<endl;
            break;
            
        default:
            cout<<"Invalid Operation "<<endl;
    }
    return 0;
}
#include<iostream>

using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << "1";
    } else if (ch >= 'a' && ch <= 'z') {
        cout << "0";
    } else {
        cout << "-1";
    }
    return 0;
}
 

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout<<"Enter a character";
    cin>>ch;
    
    if (ch >= 'A' && ch <= 'Z') {
        cout<<"1";
    }
    else if (ch >= 'a' && ch <= 'z') {
        cout<<"0";
    }
    else {
        cout<<"-1";
    }
    
    return 0;
}
 

#include<iostream>
#include <iomanip>

#include <cmath>

using namespace std;

int main() {
    double basic;
    cin >> basic;
    char grade;
    cin >> grade;

    double hra = 0.2 * basic;
    double da = 0.5 * basic;

    int allowance;
    if (grade == 'A') {
        allowance = 1700;
    } else if (grade == 'B') {
        allowance = 1500;
    } else {
        allowance = 1300;
    }

    double pf = 0.11 * basic;

    double totalSalary = basic + hra + da + allowance - pf;
    int ans = round(totalSalary); //An internal function implemented in <cmath> library to round off the decimal values
    cout << ans;
    return 0;
}
 

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double basic;
    cout<<"Enter basic salary "<<endl;
    cin>>basic;
    double grade;
    
    cin>>grade;
    
    double hra = 0.2 * basic;
    double da = 0.2 * basic;
    
    int allowance;
    if (grade == 'A') {
        allowance = 1700;
    }
    else if (grade == 'B') {
        allowance = 1500;
    }
    else {
        allowance = 1300;
    }
    
    double pf = 0.11 * basic;
    double totalsalary = basic + hra + da + allowance - pf;
    int ans = round(totalsalary);
    cout<<ans<<endl;
    return 0;
}
 

#include <cmath>
#include <iostream>
using namespace std;

int main() {
    //take the input
    double basic;
    cout<<"Enter basic salary"<<endl;
    char grade;
    cout<<"Enter grade"<<endl;
    cin >> basic >> grade;
    
    int totalSalary = round(1.59*basic);
    // use grade
    switch(grade){
        case 'A':
            totalSalary += 1700;
            break;
        case 'B':
            totalSalary += 1500;
            break;
        default:
            totalSalary += 1300;
    }

    cout << totalSalary << endl;

    return 0;
}

#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int largest;
    if (a >= b && a >= c)
        largest = a;

    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;

    cout << largest;

    return 0;
}
 <
include <iostream>
using namespace std;

int main() {
    int a, b , c;
    cout<<"Enter a, b & c "<<endl;
    cin>>a>>b>>c;
    int largest;
    if(a >= b && a >= c) {
        largest = a;
    }
    else if(b >= a && a >= c) {
        largest = b;
    }
    else {
        largest = c;
    }
    cout<<largest<<endl;
    return 0;
}
 
#include<iostream>
using namespace std;
int main() {

    int x, y;
    cin >> x >> y;
    if (x > 0 && y > 0)
        cout << "1st Quadrant";
    else if (x < 0 && y > 0)
        cout << "2nd Quadrant";
    else if (x < 0 && y < 0)
        cout << "3rd Quadrant";
    else if (x > 0 && y < 0)
        cout << "4th Quadrant";
    else if (x == 0 && y == 0)
        cout << "Origin";
    else if (x == 0 && y != 0)
        cout << "y axis";
    else
        cout << "x axis";
    return 0;
}
 
#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin>>x>>y;
    if (x > 0 && y > 0) {
        cout<<"1st Quadrant"<<endl;
    }
    else if (x < 0 && y > 0) {
        cout<<"2nd Quadrant"<<endl;
    }
    else if (x < 0 && y < 0 ) {
        cout<<"3rd Quadrant"<<endl;
    }
    else if (x > 0 && y < 0) {
        cout<<"4th Quadrant"<<endl;
    }
    else if (x == 0 && y == 0) {
        cout<<"Origin"<<endl;
    }
    else if (x == 0 && y != 0) {
        cout<<"Y Axis"<<endl;
    }
    else {
        cout<<"X axis"<<endl;
    }
    return 0;
}
 

#include<iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int sum = 0;

    for (int i = 0; i <= n; i++) {
        if (i % 2 == 0)
            sum += i;
    }

    cout << sum;

}
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int sum = 0;
    for (int i = 0; i<= n; i++) {
        if(i % 2 == 0) {
            sum += i;
        }
    }
    cout<<sum<<endl;
    return 0;
}
 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    
    int sum = 0;
    for (int i = 0; i<=n; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    cout<<sum<<endl;
    return 0;
}
 

#include <iostream>
using namespace std;
int main() {

    int start, end, step;
    cin >> start >> end >> step;

    for (int currentFahrenhietValue = start; currentFahrenhietValue <= end; currentFahrenhietValue += step)

    {
        int celsiusValue = (int)((5.0 / 9) * (currentFahrenhietValue - 32));
        cout << currentFahrenhietValue << "\t" << celsiusValue << endl;;
    }
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int start, end, step;
    cin>>start>>end>>step;
    
    for (int currentFarhenheitValue = start; currentFarhenheitValue <= end; currentFarhenheitValue += step) {
        int celsiusValue = (int) ((5.0/9) * (currentFarhenheitValue - 32));
        cout<<currentFarhenheitValue<<"\t"<<celsiusValue<<endl;
    }
    return 0;
}
 
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int evenSum = 0, oddSum = 0;

    while (n > 0) {
        int last = n % 10;
        if (last % 2 == 0) {
            evenSum += last;
        } else {
            oddSum += last;
        }
        n = n / 10;
    }

    cout << evenSum << " " << oddSum;

}

 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    
    int evenSum = 0, oddSum = 0;
    
    while (n > 0) {
        int last = n % 10;
        if(last % 2 == 0) {
            evenSum += last;
        }
        else {
            oddSum += last;
        }
        n = n/10;
    }
    cout<<evenSum<<" "<<oddSum<<endl;
    
    return 0;
}
 

#include<iostream>

using namespace std;

int main() {
    int x, n;
    cin >> x >> n;
    int ans = 1;
    while (n > 0) {
        ans *= x;
        n--;
    }
    cout << ans;
}


#include <iostream>
using namespace std;

int main() {
    int x,n;
    cout<<"Enter x & n "<<endl;
    cin>>x>>n;
    int ans = 1;
    while (n > 0) {
        ans *= x;
        n--;
    }
    cout<<ans<<endl;
    
    return 0;
}
 

#include <iostream>
using namespace std;

int main() {
    int x, n;
    cout<<"Enter x & n "<<endl;
    cin>>x>>n;
    int ans = 1;
    while (n > 0) {
        ans *= x;
        n--;
    }
    cout<<ans<<endl;
    
    return 0;
}
 

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n < 0)
        cout << "Error";
    else if (n == 0)
        cout << 1;
    else {
        int i = n, fact = 1;
        while (n / i != n) {
            fact = fact * i;
            i--;
        }
        cout << fact;

    }

    return 0;
}
 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number ";
    cin>>n;
    if(n < 0) {
        cout<<"error";
    }
    else if (n == 0) {
        cout<<1;
    }
    else {
        int i = n, fact = 1;
        while(n / i != n){
            fact = fact * i;
            i--;
        }
        cout<<fact;
    }
    return 0;
}
 /*
    Time Complexity: O(2^N).
    Space Complexity: O(N).

    Where 'N' is the given integer.


int fibonacciNumber(int n){
    const int mod = 1e9 + 7;
        
    // Base Case.
    if (n <= 1){
        return n;
    }
    
    // Recursive call.
    return (fibonacciNumber(n - 1) + fibonacciNumber(n - 2)) % mod;
}
 

int fiboncciNumber (int n) {
    const int mod = 1e9 + 7;
    
    if (n <= 1) {
        return n;
    }
    
    return (fiboncciNumber(n - 1) + fiboncciNumber(n - 2)) % mod;
}
 

#include <iostream>
using namespace std;

void myFunction() {
    cout<<"Hello World"<<endl;
}

int main() {
    myFunction();
    
    return 0;
}

 
#include <iostream>

using namespace std;

// function to print the divisors
void printDivisors(int n) {
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            cout << i << ' ';
}

int main() {
    int n;
    cin >> n;
    printDivisors(n);
    return 0;
}
 
#include <iostream>
using namespace std;

void printDivisors(int n) {
    for(int i = 1; i <= n; i++) {
        if (i % n == 0) {
            cout<<i<<" ";
        }
    }
}
int main() {
    int n;
    cin>>n;
    printDivisors(n);
    
    return 0;
}
 
#include <iostream>

using namespace std;
int countBits (int &n) {
    int sum = 0;
    while(n > 0) {
        sum = sum + (n&1);
        n /= 2;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    cout<<countBits(n);
    return 0;
}
 

#include <iostream>
using namespace std;

int countbits (int &n) {
    int sum = 0;
    while (n > 0) {
        sum = sum + (n+1);
        n /= 2;
    }
    return sum;
}
int main() {
    int n;
    cin>>n;
    countbits(n);
    return 0;
}

#include <iostream>

using namespace std;
int totalPrime(int S, int E) {

    int count = 0;
    int flag;

    for (int i = S; i <= E; i++) {
        if (i == 1 || i == 0)
            continue;

        flag = 1;
        for (int j = 2; j <= i / 2; ++j) {

            
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            count++;
    }
    return count;
}

int main() {
    int S, E;
    cin >> S >> E;
    cout << totalPrime(S, E);
    return 0;
}
 
#include <iostream>
using namespace std;

// Function for finding first occurrence
void firstIndex(int arr[], int n, int x) {
    int first = -1;
    for (int i = 0; i < n; i++) {
        if (x == arr[i]) {
            first = i;
            break;
        }
    }
    cout << first;
}

int main() {
    int n; //no. of elements
    cin >> n;
    int arr[n];
    //initializing array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x; //element whose index to be searched
    cin >> x;
    firstIndex(arr, n, x);
    return 0;
}



#include <iostream>

using namespace std;

 

int main() {

    //Write your code here

    int n,i,x,a;

    cin>>n;

    int arr[n];

    for(i=0;i<n;i++)

     cin>>arr[i];

    cin>>x;

    for(i=0,a=0;i<n;i++)

    {

        if(arr[i] == x)

         a=i;

    }

    if(a==0)

     cout<<-1<<endl;

    else

     cout<<a<<endl;

 

    return 0;

}
 
#include <iostream>
using namespace std;

int main() {
    int n, i;
    cin>>n;
    int arr[n];
    for(i = 0; i < n; i++) {
        cout<<arr[i]<<endl;
    }
    for(i = n - 1; i >= 0; i--) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
 
#include <iostream>
using namespace std;

int main() {
    int n, i;
    cin>>n;
    int arr[n];
    for(i = 0; i < n; i++) {
        cout<<arr[i]<<endl;
    }
    for(i = n - 1; i >= 0; i--) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

 

void rotateArray(vector<int> &a, int n, int d) {

    reverse(a.begin(), a.begin()+d);

    reverse(a.begin()+d, a.end());

    reverse(a.begin(), a.end());

}

 

int main() {

    int n, d;

    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; ++i) cin >> a[i];

    cin >> d;

    

    rotateArray(a, n, d);

    for(auto it: a) {

        cout << it << " ";

    }

 

    return 0;

}

#include <bits/stdc++.h>

#include <iostream>

#include <algorithm>

using namespace std;
void Duplicates(int *arr,int &n)

{

  int j = 0;

  int temp[n];

  for(int i = 0; i < n-1; i++)

  {

    if (arr[i] != arr[i + 1]) {

      temp[j++] = arr[i];

    }

  }

  temp[j++] = arr[n-1];

  for (int i = 0; i < j; i++)

  {

    arr[i] = temp[i];

  }

  n = j;

}

void kthSmallestLargest(int arr[], int &n, int k)

{

  sort(arr, arr + n);

  Duplicates(arr,n);

  int Large = -1;

  int Small = -1;

  if (k <= n)

  {

    Large = arr[n - k];

    Small = arr[k - 1];

  }

  cout << Large <<" "<< Small << endl;

}

int main()

{

  int t;

  cin >> t;

  while (t > 0)

  {

    int n, k;

    cin >> n >> k;

    int arr[n];

    for (int i = 0; i < n; i++)

    {

      cin >> arr[i];

    }

    kthSmallestLargest(arr, n, k);

    t--;

  }

  return 0;

}
 */
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Codign Ninjas";
    cout<<
}
