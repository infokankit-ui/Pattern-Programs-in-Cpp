// #include <iostream>
// using namespace std;
// int main() {
//     cout << "Hello, World!" << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     cout << "Namaste Mam" << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;    
// int main() {
//     int a,b;
//    cout << "Enter the number a=:";
//    cin >> a;
//    cout << "Enter the number b=:";
//    cin >> b;
//    if (a>b) {
//        cout << a << endl;
//    }
//    else {
//        cout << b<< endl;
//    }
//     return 0;
// }


// #include <iostream>
// using namespace std;    
// int main () {
//     int a,b;
//     cin >> a >> b;
//     cout << "The value of a="<< a << " The value of b="<< b << endl;
//     return 0;
// }



// #include <iostream>
// using namespace std;    
// int main () {
//     int a;
//     a=cin.get();
//     cout << a<< endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     char ch;
//     cout<< "enter the character="<<endl;
//     cin >> ch;
//     if(ch>=97 && ch<=122) {
//         cout<< "lower case"<<endl;
//     }
//     else if(ch>=65 && ch<=90) {
//         cout << "Upper case"<< endl;
//     }
//     else {
//         cout << "Numeric" << endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main() {
//     int num,sum=0,i;
//     cout<< "enter the number"<<endl;
//     cin >> num;
//     i=0;
//     while(i<=num) {
//         sum=sum+i;
//         i++;
//     }
// cout << sum << endl;
// return 0;}



// #include <iostream>
// using namespace std;
// int main() {
//     int num, sum = 0, i = 0;
//     cout << "Enter the integer = ";
//     cin >> num;
//     while (i <= num) {
//         if (i % 2 == 0) {
//             sum = sum + i;
//         }
//         i++;
//     }
//     cout << sum << endl;
//     return 0;
// }

//PRIME NUMBER
// #include <iostream>
// using namespace std;
// int main() {
// int num,count=0;
// cout << "Enter the number=" << endl;
// cin >> num;
// for(int i=1;i<=num;i++) {
// if(num%i==0) {
//     count++;
// }
// }
// if (count==2) {
//     cout<< "prime number ";
// }
// else {
//     cout << "Not prime";
// }
//     return 0;
// }

//  #include <iostream>
//  using namespace std;
//  int main() {
//     int i=1;
//     while(i<=5) {
//         cout << "* * * *" << endl;
//         i++;
//     }
//     return 0;
//  }



// #include <iostream>
// using namespace std;
// int main() {
// int rows;
// cout << "Enter the rows=" << endl; 
// cin >> rows;
// int i=1;
// while (i<=rows) { 
//     int j=1;
//     while(j<=rows) {
//         cout << "* ";
//         j++;
//     }
//     i++;
//     cout << endl; 
// }
// return 0;
//  }


// #include <iostream>
// using namespace std;
// int main() {
//     int rows;
//     cout << "Enter the rowa=" << endl;
//     cin >> rows;
//     int i=1;
//     while(i<=rows) {
//         int j=1;
//         while(j<=rows) {        
//             cout << i;
//             j++;
//         }
//         i++;
//         cout << endl;
//     }
// }



// 1 2 3
// 1 2 3
// 1 2 3
// #include <iostream>
// using namespace std;
// int main() {
// int rows;
// cout << "Enter the rows=" << endl;  
// cin >> rows;
// int i=1;
// while (i<=rows) { 
//     int j=1;
//     while(j<=rows) {
//         cout << j << " ";
//         j++;
//     }
//     i++;
//     cout << endl; }
//     return 0;
// }



// 3 2 1
// 3 2 1
// #include <iostream>
// using namespace std;
// int main() {
// int rows;
// cout << "Enter the rows=" << endl;  
// cin >> rows;
// int i=1;
// while (i<=rows) { 
//     int j=rows;
//     while(j>=1) {
//         cout << j << " ";
//         j--;
//     }
//     i++;
//     cout << endl; }
//     return 0;
// }


// 1 2 3 4 5
// 6 7 8 9 10
// #include <iostream>
// using namespace std;
// int main() {
// int rows,count=1;
// cout << "Enter the rows=" << endl;  
// cin >> rows;
// int i=1;
// while (i<=rows) { 
//     int j=1;
//     while(j<=rows) {
//         cout << count << " ";
//         count++;
//         j++;
//     }
//     i++;
//     cout << endl; }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
// int rows;
// cout << "Enter the rows=" << endl;  
// cin >> rows;
// int i=1;
// while (i<=rows) { 
//     int j=1;
//     while(j<=i) {
//         cout << "*"<< " ";
//         j++;
//     }
//     i++;
//     cout << endl; }
//     return 0; }



// 1
// 2 2
// 3 3 3
// #include <iostream>
// using namespace std;
// int main() {
// int rows;
// cout << "Enter the rows=" << endl;  
// cin >> rows;
// int i=1;
// while (i<=rows) { 
//     int j=1;
//     while(j<=i) {
//         cout << i<< " ";
//         j++;
//     }
//     i++;
//     cout << endl; }
//     return 0; }


// 1
// 2 3
// 4 5 6
// #include <iostream>
// using namespace std;
// int main() {
// int rows,count=1;
// cout << "Enter the rows=" << endl;  
// cin >> rows;
// int i=1;
// while (i<=rows) { 
//     int j=1;
//     while(j<=i) {
//         cout << count << " ";
//         count++;
//         j++;
//     }
//     i++;
//     cout << endl; }
//     return 0;
// }


// 1
// 2 3
// 3 4 5
// #include <iostream>
// using namespace std;
// int main() {
// int rows;
// cout << "Enter the rows=" << endl;  
// cin >> rows;
// int i=1;
// while (i<=rows) { 
//     int j=1;
//     while(j<=i) {
//         cout << i+j-1 << " ";
//         j++;
//     }
//     i++;
//     cout << endl; }
//     return 0; }


// 1
// 2 1
// 3 2 1
// #include <iostream>
// using namespace std;
// int main() {
// int rows;
// cout << "Enter the rows=" << endl;  
// cin >> rows;
// int i=1;
// while (i<=rows) { 
//     int j=1;
//     while(j<=i) {
//         cout << i-j+1 << " ";
//         j++;
//     }
//     i++;
//     cout << endl; }
//     return 0; }


// A A A
// B B B
// #include <iostream>
// using namespace std;
// int main() {
// int rows;
// cout << "Enter the rows=" << endl;  
// cin >> rows;
// int i=1;
// while (i<=rows) { 
//     int j=1;
//     while(j<=rows) {
//         cout << char(i+64) << " ";
//         j++;
//     }
//     i++;
//     cout << endl; }
//     return 0; }


// A B C
// A B C
// #include <iostream>
// using namespace std;
// int main() {
// int rows;
// cout << "Enter the rows=" << endl;  
// cin >> rows;
// int i=1;
// while (i<=rows) { 
//     int j=1;
//     while(j<=rows) {
//         cout << char(j+64) << " ";
//         j++;
//     }
//     i++;
//     cout << endl; }
//     return 0; }

// A B C
// D E F
// #include <iostream>
// using namespace std;
// int main() {
// int rows,count=1;
// cout << "Enter the rows=" << endl;  
// cin >> rows;
// int i=1;
// while (i<=rows) { 
//     int j=1;
//     while(j<=rows) {
//         cout << char(count+64) << " ";
//         count++;
//         j++;
//     }
//     i++;
//     cout << endl; }
//     return 0; }


// A B C
// B C D
// #include <iostream>
// using namespace std;
// int main() {
// int rows;
// cout << "Enter the rows=" << endl;  
// cin >> rows;
// int i=1;
// while (i<=rows) { 
//     int j=1;
//     while(j<=rows) {
//         cout << char(i+j-1+64) << " ";
//         j++;
//     }
//     i++;
//     cout << endl; }
//     return 0; }


// A
// B B
// C C C
// #include <iostream>
// using namespace std;
// int main() {
// int rows;
// cout << "Enter the rows=" << endl;  
// cin >> rows;
// int i=1;
// while (i<=rows) { 
//     int j=1;
//     while(j<=i) {
//         cout << char(i+64) << " ";
//         j++;
//     }
//     i++;
//     cout << endl; }
//     return 0; }

// A 
// B C 
// D E F 
// G H I J 
// #include <iostream>
// using namespace std;
// int main() {
// int rows,count=1;
// cout << "Enter the rows=" << endl;  
// cin >> rows;
// int i=1;
// while (i<=rows) { 
//     int j=1;
//     while(j<=i) {
//         cout << char(count+64) << " ";
//         count++;
//         j++;
//     }
//     i++;
//     cout << endl; }
//     return 0; }


// A 
// B C 
// C D E 
// D E F G 
// E F G H I 
// F G H I J K 

// #include <iostream>
// using namespace std;
// int main() {
// int rows;
// cout << "Enter the rows=" << endl;  
// cin >> rows;
// int i=1;
// while (i<=rows) { 
//     int j=1;
//     while(j<=i) {
//         cout << char(i+j-1+64) << " ";
//         j++;
//     }
//     i++;
//     cout << endl; }
//     return 0; }


// D
// C D
// B C D
// A B C D
// #include <iostream>
// using namespace std;    
// int main() {
//     int rows;
//     cout << "Enter the rows=" << endl;  
//     cin >> rows;
//     int i=1;
//     while (i<=rows) { 
//         int j=1;
//         while(j<=i) {
//             cout << char(4-i+j+64) << " ";
//             j++;
//         }
//         i++;
//         cout << endl; }
//         return 0; }



//    *
//   **
//  ***
// ****
// #include <iostream>
// using namespace std;
// int main() {
//     int rows;
//     cout << "Enter the rows=" << endl;  
//     cin >> rows;
//     int i=1;
//     // space
//     while (i<=rows) { 
//         int j=1;
//         while(j<=rows-i) {
//             cout << " ";
//             j++;
//         }
//         // star
//         int k=1;
//         while(k<=i) {
//             cout << "*";
//             k++;
//         }
//         i++;
//         cout << endl; }
//         return 0; }



/*  ****
    *** 
    **  
    *   */

// #include<iostream>
// using namespace std;
// int main()
// {
//  int i=1;
//  while (i<=4) {
//  int j=4;
//  while(j>=i) {
//  cout <<"*"<< " ";
//  j--; } 
//  cout << endl;
//  i++; }
//     return 0;
// }


//****
// ***
//  **
//   *
// #include <iostream>
// using namespace std;
// int main() {
//     int rows;
//     cout << "Enter the rows=" << endl;  
//     cin >> rows;
//     int i=1;
//     while (i<=rows) { 
//         int j=1;
//         while(j<i) {
//             cout << " ";
//             j++;
//         }
//         int k=1;
//         while(k<=rows-i+1) {
//             cout << "*";
//             k++;
//         }
//         i++;
//         cout << endl; }
//         return 0; }



// 1 1 1 1
//   2 2 2
//     3 3
//       4

// #include <iostream>
// using namespace std;
// int main() {
//     int rows;
//     cout << "Enter the rows=" << endl;  
//     cin >> rows;
//     int i=1;
//     while (i<=rows) { 
//         int j=1;
//         while(j<i) {
//             cout << " ";
//             j++;
//         }
//         int k=1;
//         while(k<=rows-i+1) {
//             cout << i;
//             k++;
//         }
//         i++;
//         cout << endl; }
//         return 0; }


//    1
//   22
//  333
// 4444

// #include <iostream>
// using namespace std;
// int main() {
// int rows;
// cout << "Enter the rows=";
// cin >> rows;
// int i=1;
// while (i<=rows) {
// // space
// int j=1;
// while(j<=rows-i) {
// cout << " ";
// j++; }
// // star
// int k=1;
// while(k<=i) {
// cout << i ;
// k++;
// }
// i++;
// cout << endl; }
// return 0; }






// 1 2 3 4
//  2 3 4
//   3 4
//    4

// #include <iostream>
// using namespace std;
// int main() {
//     int rows;
//     cout << "Enter the rows=" << endl;  
//     cin >> rows;
//     int i=1;
//     while (i<=rows) { 
//         int j=1;
//         while(j<i) {
//             cout << " ";
//             j++;
//         }
//         int k=1;
//         while(k<=rows-i+1) {
//             cout << k+i-1 << " ";
//             k++;
//         }
//         i++;
//         cout << endl; }
//         return 0; }



//    1
//   23 
//  456
// 78910
// #include <iostream>
// using namespace std;
// int main() {
// int rows,count=1;
// cout << "Enter the rows=";
// cin >> rows;
// int i=1;
// while (i<=rows) {
// // space
// int j=4;
// while(j>i) {
// cout << " ";
// j--; }
// // pattern
// int k=1;
// while(k<=i) {
// cout << count;
// count++;
// k++;
// }
// i++;
// cout << endl; }
// return 0; }


//    1
//  121
// 12321
//1234321
// #include <iostream>
// using namespace std;
// int main() {
//     cout << "Enter the number=" << endl;
//     int num;
//     cin >> num; 
//     int i=1;
//     while(i<=num) {
//         // space
//         int j=4;
//         while(j>i) {
//             cout  << " ";
//             j--;
//         }
//         // first pattern
//         int k=1;
//         while(k<=i) {
//             cout << k;
//             k++;
//         }
//         // second pattern
//         int l=i-1;
//         while(l>=1) {
//             cout  << l;
//             l--;
//         }
//         i++;
//         cout << endl; }
//     }

// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
// #include <iostream>
// using namespace std;
// int main() {
//     int rows;
//     cout << "Enter the rows=" << endl;
//     cin >> rows;
//     int i=1;
//     while(i<=rows) {
//         int j=1;
//         while(j<=rows-i+1) {
//             cout << j << " ";
//             j++;
//         }
//         i++;
//         cout << endl; }
//     return 0; }



// 1234554321
// 1234**4321
// 123****321    
// 12******21
// 1********1

#include <iostream>
using namespace std;
int main() {
    int rows;
    cout << "Enter the rows=" << endl;
    cin >> rows;
    int i=1;
    while(i<=rows) {
        // first pattern
        int j=1;
        while(j<=rows-i+1) {
            cout << j;
            j++;
        }
        // second pattern
        int k=1;
        while(k<=2*i-2) {
            cout << "*";
            k++;
        }
        // third pattern
        int l=rows-i+1;
        while(l>=1) {
            cout << l;
            l--;
        }
        i++;
        cout << endl; }
    return 0; } 


//pyramid structure 
    *
   ***
  *****
 *******
*********


#include <iostream>
using namespace std;
int main() {
    int rows;
    cout << "Enter the rows = ";
    cin >> rows;
    int i = 1;
    while(i <= rows) {
        // spaces
        int j = 1;
        while(j <= rows - i) {
            cout << " ";
            j++;
        }
        // stars
        int k = 1;
        while(k <= 2*i - 1) {
            cout << "*";
            k++;
        }

        cout << endl;
        i++;
    }

    return 0;
}


