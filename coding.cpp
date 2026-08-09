// #include<iostream>
// using namespace std;

// int main () {

//     int n = 45;
//     if(n>= 0) {
//         cout << "n is positive\n";
//     } else {
//         cout<< "n is negative\n";
//     }
   
//     return 0;
// }




// #include<iostream>
// using namespace std;

// int main () {
//     // int age ;
//     // cout <<"enter age : ";
//     // cin >> age;

//     // if (age >= 18) {
//     //     cout << "you can vote\n";
//     // } else {
//     //     cout <<"you cannot vote\n";

//     // }



//     char ch;
//     cout << "enter char : ";
//     cin >> ch;

//     if(ch >= 65 && ch <= 90) {
//         cout << "upper case\n";

//     } else {
//         cout << "lower case\n";

//     }
//     return 0;

// }





// #include<iostream>
// using namespace std;

// int main () {
//     int count = 1;

//     while (count <= 5) {
//         cout << count <<" ";
//         count++;

//     }
//     cout<<endl;
//     return 0;

// }





// #include<iostream>
// using namespace std;

// int main () {
//     int n;
//     cout<<"enter the number : ";
//     cin>>n;
//     int sum = 0;
  
//     for(int i = 1; i<=n; i++) {
//         sum += i;
//     }
//     cout <<"the sum is = " << sum <<endl;
//     return 0;

// }




#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"enter the number : ";
    cin>>n;
    int sum = 0;
    for (int i = 1; i<=n; i = i+2) {
        sum += i;
    } cout <<"the sum is : "<< sum << endl;
    return 0;

}