// A character is entered through keyboard, WAP to determine whether the character is entered capital, small, digit or special character.
// #include <stdio.h>
// int main(){
//     char a;
//     printf("Enter a character: \n");
//     scanf("%c",&a);
//     if (a >='a' && a <= 'z'){
//         printf("Character entered is a small letter.");
//     }
//     else if (a>='A' && a<='Z'){
//         printf("Character entered is a capital letter.");
//     }
//     else if (a>='1' && a<='9'){
//         printf("Character entered is a number.");
//     }
//     else {
//         printf("Chracter entered is a special character.");
//     }
//     return 0;
// }

// WAP to find the largest of 3 nos. using conditional operators.
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter first number: ");
//     scanf("%d",&a);
//     printf("Enter second number: ");
//     scanf("%d",&b);
//     printf("Enter third number: ");
//     scanf("%d",&c);
//     ((a > b && a > c) ? printf("%d is greater",a) : ((b>a && b> c) ? printf("%d is greater",b) : printf("%d is greater",c)));
// }

// WAP to check whether a entered year is leap year or not.
// #include<stdio.h>
// int main(){
//     int year;
//     printf("Enter year: ");
//     scanf("%d",&year);
//     if (year % 4 == 0 && year % 100 !=0 || year % 400 == 0){
//         printf("Leap Year");
//     }
//     else{
//         printf("Not a leap year.");
//     }
//     return 0;
//     }

// WAP to calculate the Armstrong nos. b/w 1 and 500.
//  #include <stdio.h>
//  int main(){
//      int i=1;
//      while (i<500){
//      int n=i;
//      int temp=n;
//      int p=0;

//     while (n>0){
//         int rem=n%10;
//         p=p+(rem*rem*rem);
//         n=n/10;
//     }
//     if (temp==p){
//         printf("%d\n",p);
//     }
//     i=i+1;
//     }
//     return 0;
// }

//  WAP to determine if a no. is prime or not.
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number to check if prime or not:\n");
//     scanf("%d",&n);
//     int fact=0;
//     if (n==1){
//         printf("Not a prime number.");
//     }
//     else{
//     for (int i=1; i<=n; i++){
//         if (n%i==0){
//             fact=fact+1;
//         }
//     }
//     if (fact>2){
//         printf("No, its not a prime number.");
//     }
//     else{
//         printf("Yes, its a prime number.");
//     }
//     }

//     return 0;
// }

// WAP to find diameter, circumference and area of a circle using functions
// #include<stdio.h>
// float diameter(float *d, float r){
//     *d=r*2;
//     }
// float area(float *a,float r){
//     *a=3.14*r*r;
// }
// int main(){
//     float r , a, d;
//     printf("Enter radius of circle: ");
//     scanf("%f",&r);
//     diameter(&d, r);
//     area(&a, r);
//     printf("Diameter = %f\n",d);
//     printf("Area = %f\n",a);

//     return 0;
// }

// Q7 WAP to find max and min element of array
// #include <stdio.h>
// int main(){
//     int n,i;
//     printf("Enter length of array : \n");
//     scanf("%d",&n);
//     int arr[n];
//     //entry
//     for (i=0;i<n;i++){
//         printf("Enter value for %d \n", i);
//         scanf("%d",&arr[i]);
//     }
//     int max=arr[0];
//     int min=arr[0];
//     //printing
//     for (int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     for (int i=0;i<n;i++){
//         if (arr[i]>max){
//             max=arr[i];
//         }
//     }
//     for (int i=0;i<n;i++){
//         if (arr[i]<min){
//             min=arr[i];
//         }
//     }
//     printf("\n%d is MAXIMUM element in the array.\n",max);
//     printf("%d is MINIMUM element in the array.\n",min);
//     return 0;
// }

// Q8
//  A five digit no. is taken input from user, write a program to reverse that number and find sum of the digit of its digit too.
// #include<stdio.h>
// int main(){
//     int reverse=0;
//     int n;
//     printf("Enter a five digit number: \n");
//     scanf("%d",&n);
//     for (int i=5;i>0;i--){
//         reverse=reverse*10+n%10;
//         n=n/10;
//     }
//     printf("%d",reverse);
//     return 0;
// }

// Q9WAP to print the following pattern.
//  #include<stdio.h>
//  int main(){
//      for (int i=1;i<=5;i++){
//          for (int j=1;j<=i;j++){
//              printf("*");
//          }
//          printf("\n");
//      }
//      printf("\n");
//      for (int i=1;i<=5;i++){
//          for (int j=1;j<=i;j++){
//              printf("%d",j);
//          }
//          printf("\n");
//      }
//      printf("\n");

//     int p=5;
//     for (int i=1;i<6;i++){
//         for (int j=5;j>=i;j--){
//             printf("%d",p);
//         }
//         p=p-1;
//             printf("\n");
//     }
//     printf("\n");

//     for (int i=1;i<6;i++){
//         int a=65;
//         for (int j=1;j<=i;j++){
//             printf("%c",a++);
//         }
//         printf("\n");
//     }
// return 0;
// }

// Q10 PROG. TO PRINT SUM OF THE SERIES-“1-1/2+1/3-1/4…….n” terms.
//  #include <stdio.h>
//  int main(){
//      float sum=0;
//      int n;
//      printf("Enter no. of terms:");
//      scanf("%d",&n);
//      for (int i=1;i<=n;i++){
//          if (i%2==0){
//              sum=sum-(1.0/i);
//          }
//          else{
//              sum=sum+(1.0/i);
//          }
//      }
//      printf("Sum=%f",sum);
//      return 0;
//  }

// 11 PROG. TO FIND THE SUM OF SERIES-“X-X^3/3!+X^5/5!-
// X^7/7!+X^9/9!....n “terms.
// #include <stdio.h>
// #include <math.h>
// int main(){
//     float x;
//     int n;
//     float sum;
//     printf("Enter value of x");
//     scanf("%f",&x);
//     printf("Enter value of n");
//     scanf("%d",&n);

//     for (int i=1;i<n;i++){
//         int fact=1;
//         for (int j=1;j<=i;j++){
//             fact=fact*j;
//         }
//         sum=sum+pow(-1,i)*pow(x,i)/fact;
//     }
//     printf("Sum=%f",sum);
//     return 0;
// }

// 12 WAP to do Linear Search, Binary search, Bubble Sort, Selection Sort using menu driven program by using functions

// #include <stdio.h>
// int linearSearch(int arr[],int n,int x){
//     for (int i=0;i<n;i++){
//         if (arr[i] == x){
//             return i;
//         }
//     }
//     return -1;
// }

// int binarySearch(int arr[],int n,int x ){
//     int low, mid, high;
//     low=0;
//     high=n-1;
//     while (low<=high){
//         mid = (low + high)/2;
//         if (arr[mid]==x){
//             return mid;
//         }
//         if (arr[mid]<x){
//             low=mid+1;
//         }
//         else{
//             high=mid-1;
//         }
//     }
//     return -1;
// }

// int bubbleSort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         for (int j=0;j<n-1-i;j++){
//             if (arr[j]>arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
// }

// int selectionSort(int arr[],int n){
//     int indexOfMin;
//     for (int i=0;i<n-1;i++){
//         indexOfMin=i;
//         for (int j=i+1;j<n;j++){
//             if (arr[j]<arr[indexOfMin]){
//                 indexOfMin=j;
//             }
//         }
//         int temp=arr[i];
//         arr[i]=arr[indexOfMin];
//         arr[indexOfMin]=temp;
//     }
// }
// int main(){
//     int arr[10]={1,2,3,4,5};
//     int n=5;
//     while(1){
//         int ch=0;
//         printf("\n M \tE \tN \tU \n");
//         printf("1.Linear Search\n");
//         printf("2.Binary Search\n");
//         printf("3.Bubble Sort\n");
//         printf("4.Selection Sort\n");
//         printf("5.Exit\n");
//         printf("Enter yout choice: \n");
//         scanf("%d",&ch);

//         if (ch==1){
//             int x;
//             printf("Enter the number which you wanna find:\n");
//             scanf("%d",&x);
//             int result=linearSearch(arr,n,x);
//             if (result==-1){
//                 printf("Element not found at any index.\n");
//             }
//             else{
//                 printf("Element found at index %d",result);
//             }
//         }
//         else if (ch==2){
//             int x;
//             printf("Enter the number which you wanna find:\n");
//             scanf("%d",&x);
//             int result=binarySearch(arr,n,x);
//             if (result==-1){
//                 printf("Element not found.\n");
//             }
//             else{
//                 printf("Element found at index %d\n",result);
//             }
//         }
//         else if(ch==3){
//             bubbleSort(arr,n);
//             printf("Sorted array:\n");
//             for (int i=0;i<n;i++){
//                 printf("%d \t",arr[i]);
//             }
//         }
//         else if (ch==4){
//             selectionSort(arr,n);
//             printf("Sorted array:\n");
//             for (int i=0;i<n;i++){
//                 printf("%d \t",arr[i]);
//             }
//         }
//         else if (ch==5){
//             return 0;
//         }
//     }
//     return 0;
// }

// 13 WAP to print table of any no. entered by the user.
//  #include<stdio.h>
//  int main(){
//      int n;
//      printf("Enter a number whose table you want to print.\n");
//      scanf("%d",&n);
//      for (int i=1;i<=10;i++){
//          printf("%d * %d = %d\n",n,i,n*i);
//      }
//      return 0;
//  }

// 14 Wap to check whether the input character is a vowel or not using switch case.
//  #include<stdio.h>
//  int main(){
//      char c;
//      printf("Enter a character.\n");
//      scanf("%c",&c);
//      switch(c){
//          case 'a':
//          case 'e':
//          case 'i':
//          case 'o':
//          case 'u':
//          case 'A':
//          case 'E':
//          case 'I':
//          case 'O':
//          case 'U':
//          printf("%c is a vowel.\n",c);
//          break;
//          default:
//          printf("%c is a consonant.\n",c);
//      }
//      return 0;
//  }

// 15WAP to insert and delete an element to and from array at specified position
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Number of elements in array?\n");
//     scanf("%d",&n);
//     int arr[n];
//     //entering
//     for (int i=0;i<n;i++){
//         printf("Element %d \t",i);
//         scanf("%d",&arr[i]);
//     }
//     //printing
//     printf("Array:\n");
//     for (int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");

//     //delete
//     int index;
//     printf("Enter element index to delete:\n");
//     scanf("%d",&index);
//     for (int i=index;i<n;i++){
//         arr[i]=arr[i+1];
//     }
//     n=n-1;
//     //printing
//     printf("Array:\n");
//     for (int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");

//     //insert
//     int element;
//     printf("Element to be inserted\n");
//     scanf("%d",&element);
//     printf("Index at which you want to insert\n");
//     scanf("%d",&index);
//     n=n+1;
//     for (int i=n-1;i>=index;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[index]=element;
//     //printing
//     printf("Array:\n");
//     for (int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");

//     return 0;
// }

// 16)WAP to print first 20 nos. of fibonacci series.
// #include<stdio.h>
// int main(){
//     int first=0;
//     int second=1;
//     for (int i=0;i<20;i++){
//         printf("%d \n",first);
//         int next=first+second;
//         first=second;
//         second=next;
//     }
//     printf("\n");
//     return 0;
// }

// 17)
// #include<stdio.h>

// void sum(int arr1[][2],int arr2[][2],int arr3[][2], int size){
//     for (int i=0;i<size;i++){
//         for (int j=0;j<size;j++){
//             arr3[i][j]=arr1[i][j]+arr2[i][j];
//         }
//     }
// }
// void multiply(int arr1[][2],int arr2[][2],int arr3[][2], int size){
//     for (int i=0;i<size;i++){
//         for (int j=0;j<size;j++){
//             arr3[i][j]=0;
//             for (int k=0;k<size;k++){
//                 arr3[i][j]=arr3[i][j]+(arr1[i][k]*arr2[k][j]);
//             }
//         }
//     }
// }

// int main(){
//     int size;
//     printf("Enter size of matrix\n");
//     scanf("%d",&size);
//     int arr1[size][size],arr2[size][size],arr3[size][size];

//     //entry for 1st matrix
//     for (int i=0;i<size;i++){
//         for (int j=0;j<size;j++){
//             printf("Element %d %d:\t",i,j);
//             scanf("%d",&arr1[i][j]);
//         }
//     }

//     //printing
//     printf("Matrix 1:\n");
//     for (int i=0;i<size;i++){
//         printf("\n");
//         for (int j=0;j<size;j++){
//             printf("%d\t",arr1[i][j]);
//         }
//     }

//     printf("\n\n");

//     //entry matrix 2
//     for (int i=0;i<size;i++){
//         for (int j=0;j<size;j++){
//             printf("Element %d %d\t",i,j);
//             scanf("%d",&arr2[i][j]);
//         }
//     }

//     //printing
//     printf("Matrix 2:\n");
//     for (int i=0;i<size;i++){
//         printf("\n");
//         for (int j=0;j<size;j++){
//             printf("%d\t",arr2[i][j]);
//         }
//     }

//         printf("\n\n");
// while(1){
//     int ch;
//     printf("\n\tM\t E\t N\t U\t\n");
//     printf("1.SUM\n");
//     printf("2.Multiply\n");
//     scanf("%d",&ch);
//     if (ch==1){
//         sum(arr1,arr2,arr3,size);
//     }
//     else if(ch==2){
//         multiply(arr1,arr2,arr3,size);
//     }

//     //printing
//     printf("Matrix :\n");
//     for (int i=0;i<size;i++){
//         printf("\n");
//         for (int j=0;j<size;j++){
//             printf("%d\t",arr3[i][j]);
//         }
//     }

// }
// printf("\n\n");
//     return 0;
// }

// 18)
// //18.WAP to find the LCM and GCF of 2 entered numbers.
// #include<stdio.h>
// int main(){
//    int first,second,gcd;
//    printf("Enter first number.\n");
//    scanf("%d",&first);
//    printf("Enter second number.\n");
//    scanf("%d",&second);
//    for (int i=1;i<=first && i<=second;i++){
//        if (first%i==0 && second%i==0){
//            gcd=i;
//        }
//    }
//    int lcm=first*second/gcd;
//    printf("LCM and GCF of %d and %d are %d and %d respectively.\n",first,second,lcm,gcd);
//    return 0;
// }

// 19)
// // 19 WAP to swap 2 names using array of pointers.
// #include<stdio.h>
// int main(){
//    char name1[10],name2[10];
//    char *names[]={name1,name2};
//    printf("Enter first name: \n");
//    scanf("%s",name1);
//    printf("Enter second name: \n");
//    scanf("%s",name2);

//    char *temp=names[0];
//    names[0]=names[1];
//    names[1]=temp;
//    printf("%s %s",names[0],names[1]);
//    return 0;

// }

// 20)
//  #include<stdio.h>
//  int main(){
//      int n;
//      int flag=1;
//      printf("Enter length of the word.");
//      scanf("%d",&n);
//      char word[n];
//      printf("Enter word=>\n");
//      scanf("%s",word);
//      for (int i=0;i<n/2;i++){
//          if (word[i]==word[n-i-1]){
//              flag=1;
//          }
//          else{
//              flag=0;
//              break;
//          }
//      }
//      if (flag==1){
//          printf("Yes, its a pallindrome.");
//      }
//      else{
//          printf("No,not a pallindrome.");
//      }
//      return 0;
//  }
// 21
//  //WAP to find a no of words in a string.
//  #include<stdio.h>
//  int main(){
//      char str[50];
//      printf("Enter a string.");
//      fgets(str,sizeof(str),stdin);
//      int count=0;
//      for (int i=0; str[i] !='\0';i++){
//          if (str[i]==' ' || str[i]=='\n' || str[i]=='\t'){
//              count=count+1;
//          }
//      }
//      printf("No.of words=%d\n",count);
//      return 0;
//  }

// 22. WAP to reverse a string, concatenate two strings, length of a string, copy one
// string to other using a user defined function and menu driven program.
// #include <stdio.h>
// #include <string.h>

// void reverseString(char *str);
// void concatenateStrings(char *str1, char *str2);
// int stringLength(char *str);
// void copyString(char *str1, char *str2);

// int main() {
//     int choice;
//     char str1[100], str2[100];

//     do {
//         printf("Menu:\n");
//         printf("1. Reverse a string\n");
//         printf("2. Concatenate two strings\n");
//         printf("3. Length of a string\n");
//         printf("4. Copy one string to other\n");
//         printf("5. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch(choice) {
//             case 1:
//                 printf("Enter a string: ");
//                 scanf("%s", str1);
//                 reverseString(str1);
//                 printf("Reversed string: %s\n", str1);
//                 break;
//             case 2:
//                 printf("Enter first string: ");
//                 scanf("%s", str1);
//                 printf("Enter second string: ");
//                 scanf("%s", str2);
//                 concatenateStrings(str1, str2);
//                 printf("Concatenated string: %s\n", str1);
//                 break;
//             case 3:
//                 printf("Enter a string: ");
//                 scanf("%s", str1);
//                 printf("Length of the string: %d\n", stringLength(str1));
//                 break;
//             case 4:
//                 printf("Enter a string: ");
//                 scanf("%s", str1);
//                 copyString(str1, str2);
//                 printf("Copied string: %s\n", str2);
//                 break;
//             case 5:
//                 printf("Exiting...\n");
//                 break;
//             default:
//                 printf("Invalid choice. Please try again.\n");
//         }
//     } while(choice != 5);

//     return 0;
// }

// void reverseString(char *str) {
//     int len = strlen(str);
//     for(int i=0, j=len-1; i<j; i++, j--) {
//         char temp = str[i];
//         str[i] = str[j];
//         str[j] = temp;
//     }
// }

// void concatenateStrings(char *str1, char *str2) {
//     strcat(str1, str2);
// }

// int stringLength(char *str) {
//     return strlen(str);
// }

// void copyString(char *str1, char *str2) {
//     strcpy(str2, str1);
// }
// 23. In a company an employee is paid as under:
// If his basic salary is less than Rs. 1500, then HRA = 10% of basic salary and
// DA = 90% of basic salary. If his salary is either equal to or above Rs. 1500,
// then HRA = Rs. 500 and DA = 98% of basic salary.
// #include <stdio.h>

// int main() {
//     float basicSalary, grossSalary, hra, da;

//     printf("Enter basic salary: ");
//     scanf("%f", &basicSalary);

//     if(basicSalary < 1500) {
//         hra = 0.1 * basicSalary;
//         da = 0.9 * basicSalary;
//     } else {
//         hra = 500;
//         da = 0.98 * basicSalary;
//     }

//     grossSalary = basicSalary + hra + da;

//     printf("Gross salary: %.2f\n", grossSalary);

//     return 0;
// }
// 24. WAP to find the sum of the elements of array using pointers
// #include <stdio.h>

// int main() {
//     int arr[10], *ptr, sum = 0;

//     printf("Enter 10 integers: ");

//     for(int i=0; i<10; i++)
//         scanf("%d", &arr[i]);

//     ptr = &arr[0]; // pointing to the first element of the array

//     for(int i=0; i<10; i++) {
//         sum += *ptr;
//         ptr++; // moving the pointer to point to the next element
//     }

//     printf("Sum of array elements: %d\n", sum);

//     return 0;
// }
// 25. WAP to check whether a given number is perfect number or not
// #include <stdio.h>

// int main() {
//     int num, sum = 0;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     for(int i=1; i<num; i++) {
//         if(num % i == 0) {
//             sum += i;
//         }
//     }

//     if(sum == num) {
//         printf("%d is a perfect number.\n", num);
//     } else {
//         printf("%d is not a perfect number.\n", num);
//     }

//     return 0;
// }
// 26. WAP to calculate factorial of a number using recursion
// #include <stdio.h>

// int factorial(int n);

// int main() {
//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     printf("Factorial of %d = %d\n", num, factorial(num));

//     return 0;
// }

// int factorial(int n) {
//     if(n == 0 || n == 1) {
//         return 1;
//     } else {
//         return n * factorial(n - 1);
//     }
// }

// 27. Write a program in C to swap elements using call by reference
// #include <stdio.h>

// void swap(int *x, int *y);

// int main() {
//     int arr[2];

//     printf("Enter two integers: ");
//     scanf("%d %d", &arr[0], &arr[1]);

//     printf("Before swapping: a = %d, b = %d\n", arr[0], arr[1]);

//     swap(&arr[0], &arr[1]);

//     printf("After swapping: a = %d, b = %d\n", arr[0], arr[1]);

//     return 0;
// }

// void swap(int *x, int *y) {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }

// 28. Write a program in C to store n elements in an array and print the elements
// using pointer.
// #include <stdio.h>

// int main() {
//     int n, i;
//     int arr[100];

//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     printf("Enter %d integers:\n", n);
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("Elements in the array are: ");
//     for(i = 0; i < n; i++) {
//         printf("%d ", *(arr + i));
//     }
//     printf("\n");

//     return 0;
// }

// 29. Write a program in C to find the largest element in an array using Dynamic
// Memory Allocation(malloc() and free() functions).
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int n, i, *arr;
//     int largest;

//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     arr = (int*) malloc(n * sizeof(int)); // dynamically allocate memory

//     printf("Enter %d integers:\n", n);
//     for(i = 0; i < n; i++) {
//         scanf("%d", arr + i);
//     }

//     largest = *arr; // assume first element is the largest
//     for(i = 1; i < n; i++) {
//         if(*(arr + i) > largest) {
//             largest = *(arr + i);
//         }
//     }

//     printf("Largest element in the array is %d\n", largest);

//     free(arr); // free dynamically allocated memory

//     return 0;
// }

// 30. Write a program in C to print a string in reverse using a pointer.
//  #include <stdio.h>

// int main() {
//     char str[100], *ptr;
//     int len, i;

//     printf("Enter a string: ");
//     gets(str); // read the string from the user

//     len = strlen(str); // find the length of the string

//     ptr = str + len - 1; // initialize pointer to the last character of the string

//     printf("The reverse of the string is: ");
//     for(i = 0; i < len; i++) {
//         printf("%c", *ptr); // print the character pointed to by the pointer
//         ptr--; // move the pointer to the previous character
//     }
//     printf("\n");

//     return 0;
// }
// 31. Write a program in C to count the number of vowels and consonants in a string
// using a pointer.
// #include <stdio.h>

// int main() {
//     char str[100], *ptr;
//     int vowels = 0, consonants = 0;

//     printf("Enter a string: ");
//     gets(str); // read the string from the user

//     ptr = str; // initialize pointer to the first character of the string

//     while(*ptr != '\0') { // loop until end of string is reached
//         if(*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' ||
//            *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U') {
//             vowels++; // increment vowel count if character is a vowel
//         }
//         else if((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z')) {
//             consonants++; // increment consonant count if character is a consonant
//         }
//         ptr++; // move the pointer to the next character
//     }

//     printf("Number of vowels in the string: %d\n", vowels);
//     printf("Number of consonants in the string: %d\n", consonants);

//     return 0;
// }

// 32. WAP to read and print employee details like Employee ID, EName, salary
// using structures
// #include <stdio.h>

// struct employee {
//     int id;
//     char name[50];
//     float salary;
// };

// int main() {
//     struct employee emp;

//     printf("Enter employee ID: ");
//     scanf("%d", &emp.id);

//     printf("Enter employee name: ");
//     scanf("%s", emp.name);

//     printf("Enter employee salary: ");
//     scanf("%f", &emp.salary);

//     printf("\nEmployee ID: %d", emp.id);
//     printf("\nEmployee Name: %s", emp.name);
//     printf("\nEmployee Salary: %.2f", emp.salary);

//     return 0;
// }

// 33. Create a structure item (char item_name[10],int qty,float price,float total_amt)
// . Enter details regarding items. Create a pointer variable *pitem of a structure
// item and access the elements or members of a structure using pointer variable
// by using -> operator.
// #include <stdio.h>

// struct item {
//     char item_name[10];
//     int qty;
//     float price;
//     float total_amt;
// };

// int main() {
//     struct item itm;
//     struct item *pitem;

//     pitem = &itm;

//     printf("Enter item name: ");
//     scanf("%s", pitem->item_name);

//     printf("Enter item quantity: ");
//     scanf("%d", &pitem->qty);

//     printf("Enter item price: ");
//     scanf("%f", &pitem->price);

//     pitem->total_amt = pitem->qty * pitem->price;

//     printf("\nItem Name: %s", pitem->item_name);
//     printf("\nQuantity: %d", pitem->qty);
//     printf("\nPrice: %.2f", pitem->price);
//     printf("\nTotal Amount: %.2f", pitem->total_amt);

//     return 0;
// }

// 34. Create a structure student (charname[10],int marks[3],,int total and float
// percentage). Enter the marks of 5 students in 3 subjects and calculate the
// percentage .(Hint:Use the concept of array of structure).#include <stdio.h>

// #include <stdio.h>

// struct student {
//     char name[10];
//     int marks[3];
//     int total;
//     float percentage;
// };

// int main() {
//     struct student students[5];

//     for(int i=0; i<5; i++) {
//         printf("Enter the name of student %d: ", i+1);
//         scanf("%s", students[i].name);

//         printf("Enter marks in three subjects for student %d:\n", i+1);
//         scanf("%d %d %d", &students[i].marks[0], &students[i].marks[1], &students[i].marks[2]);

//         students[i].total = students[i].marks[0] + students[i].marks[1] + students[i].marks[2];
//         students[i].percentage = (float) students[i].total / 3;
//     }

//     printf("\nName\tTotal\tPercentage\n");
//     for(int i=0; i<5; i++) {
//         printf("%s\t%d\t%.2f%%\n", students[i].name, students[i].total, students[i].percentage);
//     }

//     return 0;
// }

// 35. Create a structure Distance (int feet and float inch). Take two distances as
// input from user and add them (inch and feet separately). Display total distance
// in feets and inches.
// #include <stdio.h>

// struct Distance {
//     int feet;
//     float inch;
// };

// int main() {
//     struct Distance d1, d2, total;

//     // Read first distance
//     printf("Enter first distance:\n");
//     printf("Feet: ");
//     scanf("%d", &d1.feet);
//     printf("Inches: ");
//     scanf("%f", &d1.inch);

//     // Read second distance
//     printf("\nEnter second distance:\n");
//     printf("Feet: ");
//     scanf("%d", &d2.feet);
//     printf("Inches: ");
//     scanf("%f", &d2.inch);

//     // Add distances
//     total.inch = d1.inch + d2.inch;
//     total.feet = d1.feet + d2.feet;

//     // Convert excess inches to feet
//     if(total.inch >= 12.0) {
//         total.inch -= 12.0;
//         total.feet++;
//     }

//     // Print total distance
//     printf("\nTotal distance: %d feet %.2f inches\n", total.feet, total.inch);

//     return 0;
// }

// 36. Create a union union Data { int i;float f;char str[20]}.WAP to show how to
// access and print members of union and also print the maximum memory
// occupied by union members.
// #include <stdio.h>
// #include <string.h>

// union Data {
//     int i;
//     float f;
//     char str[20];
// };

// int main() {
//     union Data data;

//     // Print size of union
//     printf("Size of union Data: %lu bytes\n", sizeof(union Data));

//     // Initialize union members
//     data.i = 10;
//     printf("data.i: %d\n", data.i);

//     data.f = 3.14;
//     printf("data.f: %.2f\n", data.f);

//     strcpy(data.str, "Hello");
//     printf("data.str: %s\n", data.str);

//     // Print maximum memory occupied by union members
//     printf("Maximum memory occupied by union members: %lu bytes\n", sizeof(data));

//     return 0;
// }

// 37. WAP to add two numbers with the help of command line arguments

// 38. Write a program in C to create and store information in a text file(using fprintf
// and fscanf functions)
// #include <stdio.h>

// struct Employee {
//     char name[50];
//     int id;
//     float salary;
// };

// int main() {
//     int n;
//     struct Employee emp;
//     FILE *file;

//     // Open the file in write mode
//     file = fopen("employee.txt", "w");

//     // Get number of employees from user
//     printf("Enter number of employees: ");
//     scanf("%d", &n);

//     // Write employee data to the file
//     for (int i = 0; i < n; i++) {
//         printf("Enter employee name: ");
//         scanf("%s", emp.name);
//         printf("Enter employee ID: ");
//         scanf("%d", &emp.id);
//         printf("Enter employee salary: ");
//         scanf("%f", &emp.salary);
//         fprintf(file, "%s %d %.2f\n", emp.name, emp.id, emp.salary);
//     }

//     // Close the file
//     fclose(file);

//     // Reopen the file in read mode
//     file = fopen("employee.txt", "r");

//     // Read and print employee data from the file
//     printf("\nEmployee details:\n");
//     while (fscanf(file, "%s %d %f", emp.name, &emp.id, &emp.salary) != EOF) {
//         printf("Name: %s, ID: %d, Salary: %.2f\n", emp.name, emp.id, emp.salary);
//     }

//     // Close the file
//     fclose(file);

//     return 0;
// }

// 39. Write a program in C to create and store information in a binary file(using
// fread and fwrite functions)
// #include <stdio.h>
// #include <stdlib.h>

// typedef struct {
//     int id;
//     char name[20];
//     float salary;
// } Employee;

// int main() {
//     Employee emp1, emp2;
//     FILE *fp;

//     // Open file for writing in binary mode
//     fp = fopen("employees.bin", "wb");
//     if (fp == NULL) {
//         printf("Error opening file!");
//         exit(1);
//     }

//     // Store employee 1 details in struct
//     emp1.id = 1;
//     strcpy(emp1.name, "John");
//     emp1.salary = 5000.50;

//     // Write employee 1 details to file
//     fwrite(&emp1, sizeof(Employee), 1, fp);

//     // Store employee 2 details in struct
//     emp2.id = 2;
//     strcpy(emp2.name, "Mary");
//     emp2.salary = 6000.75;

//     // Write employee 2 details to file
//     fwrite(&emp2, sizeof(Employee), 1, fp);

//     // Close the file
//     fclose(fp);

//     // Open file for reading in binary mode
//     fp = fopen("employees.bin", "rb");
//     if (fp == NULL) {
//         printf("Error opening file!");
//         exit(1);
//     }

//     // Read and display employee 1 details
//     fread(&emp1, sizeof(Employee), 1, fp);
//     printf("Employee ID: %d\n", emp1.id);
//     printf("Employee Name: %s\n", emp1.name);
//     printf("Employee Salary: %0.2f\n", emp1.salary);

//     // Read and display employee 2 details
//     fread(&emp2, sizeof(Employee), 1, fp);
//     printf("Employee ID: %d\n", emp2.id);
//     printf("Employee Name: %s\n", emp2.name);
//     printf("Employee Salary: %0.2f\n", emp2.salary);

//     // Close the file
//     fclose(fp);

//     return 0;
// }

// 40. Write a program in C to create and store information in a data file(using getc
// and putc functions)
// #include <stdio.h>

// int main() {
//    FILE *fp;
//    char filename[] = "data.txt";
//    char c;

//    // Open file for writing
//    fp = fopen(filename, "w");

//    // Check if file was opened successfully
//    if (fp == NULL) {
//       printf("Error opening file %s\n", filename);
//       return 1;
//    }

//    // Get data from user and store it in the file
//    printf("Enter data: ");
//    while ((c = getchar()) != '\n') {
//       putc(c, fp);
//    }

//    // Close the file
//    fclose(fp);

//    printf("Data saved in file %s\n", filename);
//    return 0;
// }

// 41. Write a program in C to create and store information in a data file(using fgets
// and fputs functions)
// #include <stdio.h>

// int main() {
//    FILE *fp;
//    char filename[] = "data.txt";
//    char input[100];

//    // Open file for writing
//    fp = fopen(filename, "w");

//    // Check if file was opened successfully
//    if (fp == NULL) {
//       printf("Error opening file %s\n", filename);
//       return 1;
//    }

//    // Get data from user and store it in the file
//    printf("Enter data: ");
//    fgets(input, 100, stdin);
//    fputs(input, fp);

//    // Close the file
//    fclose(fp);

//    printf("Data saved in file %s\n", filename);
//    return 0;
// }

// 42. Write a program in C to create and store information in a data file(using getw
// and putw functions)
// #include <stdio.h>

// int main() {
//    FILE *fp;
//    char filename[] = "data.txt";
//    int input;

//    // Open file for writing
//    fp = fopen(filename, "wb");

//    // Check if file was opened successfully
//    if (fp == NULL) {
//       printf("Error opening file %s\n", filename);
//       return 1;
//    }

//    // Get data from user and store it in the file
//    printf("Enter data: ");
//    scanf("%d", &input);
//    putw(input, fp);

//    // Close the file
//    fclose(fp);

//    printf("Data saved in file %s\n", filename);
//    return 0;
// }

// 43. WAP in C to show the functionality of fseek function.
// #include <stdio.h>

// int main() {
//    FILE *fp;
//    char filename[] = "data.txt";
//    int num1, num2, sum;

//    // Open file for reading and writing
//    fp = fopen(filename, "r+");

//    // Check if file was opened successfully
//    if (fp == NULL) {
//       printf("Error opening file %s\n", filename);
//       return 1;
//    }

//    // Read two numbers from the file
//    fscanf(fp, "%d %d", &num1, &num2);
//    printf("Numbers read from file: %d, %d\n", num1, num2);

//    // Move the file pointer to the beginning of the file
//    fseek(fp, 0, SEEK_SET);

//    // Calculate the sum of the two numbers and write it to the file
//    sum = num1 + num2;
//    fprintf(fp, "%d", sum);

//    // Close the file
//    fclose(fp);

//    printf("Sum of the numbers written to file: %d\n", sum);
//    return 0;
// }

// 44. Write a program in C to count a number of words and characters in a file.
// #include <stdio.h>

// int main() {
//    FILE *fp;
//    char filename[] = "data.txt";
//    int characterCount = 0, wordCount = 0;
//    char ch;

//    // Open file for reading
//    fp = fopen(filename, "r");

//    // Check if file was opened successfully
//    if (fp == NULL) {
//       printf("Error opening file %s\n", filename);
//       return 1;
//    }

//    // Loop through the file character by character
//    while ((ch = fgetc(fp)) != EOF) {
//       characterCount++;

//       // If current character is whitespace or newline, increment word count
//       if (ch == ' ' || ch == '\n' || ch == '\t') {
//          wordCount++;
//       }
//    }

//    // Increment word count one more time for the last word in the file
//    if (characterCount > 0) {
//       wordCount++;
//    }

//    // Close the file
//    fclose(fp);

//    printf("Number of characters in file: %d\n", characterCount);
//    printf("Number of words in file: %d\n", wordCount);
//    return 0;
// }

// 45. Write a program in C to merge two files and write it in a new file.
// #include <stdio.h>

// int main() {
//    FILE *fp1, *fp2, *fp3;
//    char file1[] = "file1.txt";
//    char file2[] = "file2.txt";
//    char file3[] = "file3.txt";
//    char ch;

//    // Open the first file for reading
//    fp1 = fopen(file1, "r");
//    if (fp1 == NULL) {
//       printf("Error opening file %s\n", file1);
//       return 1;
//    }

//    // Open the second file for reading
//    fp2 = fopen(file2, "r");
//    if (fp2 == NULL) {
//       printf("Error opening file %s\n", file2);
//       return 1;
//    }

//    // Open the third file for writing
//    fp3 = fopen(file3, "w");
//    if (fp3 == NULL) {
//       printf("Error opening file %s\n", file3);
//       return 1;
//    }

//    // Copy the contents of the first file to the third file
//    while ((ch = fgetc(fp1)) != EOF) {
//       fputc(ch, fp3);
//    }

//    // Copy the contents of the second file to the third file
//    while ((ch = fgetc(fp2)) != EOF) {
//       fputc(ch, fp3);
//    }

//    printf("Merged content of %s and %s into %s\n", file1, file2, file3);

//    // Close all the files
//    fclose(fp1);
//    fclose(fp2);
//    fclose(fp3);

//    return 0;
// }

// 46 WAP in C to show the functionality of ftell () and rewind() functions of file
// handling.
// #include <stdio.h>

// int main() {
//     FILE *fp;
//     char ch;

//     // Open a file in read mode
//     fp = fopen("sample.txt", "r");

//     if (fp == NULL) {
//         printf("Unable to open file!");
//         return 1;
//     }

//     // Print the current position of the file pointer
//     printf("Current position of the file pointer: %ld\n", ftell(fp));

//     // Read the first character from the file
//     ch = fgetc(fp);

//     // Print the first character and the current position of the file pointer
//     printf("First character: %c\n", ch);
//     printf("Current position of the file pointer: %ld\n", ftell(fp));

//     // Move the file pointer to the beginning of the file
//     rewind(fp);

//     // Print the current position of the file pointer after rewinding
//     printf("Current position of the file pointer after rewinding: %ld\n", ftell(fp));

//     // Close the file
//     fclose(fp);

//     return 0;
// }

// 47. WAP in C that takes the file name as an input from user, create a file “data” to
// store integer numbers from 1 to 10. Create two more files “even” and “odd” ,
// read the contents of “data” and check whether the number is even and odd and
// copied the same in to “ even” and “odd” file.
// #include <stdio.h>

// int main() {
//     FILE *data_file, *even_file, *odd_file;
//     char filename[100];
//     int i, num;

//     // Take filename as input from the user
//     printf("Enter filename: ");
//     scanf("%s", filename);

//     // Open "data" file for writing
//     data_file = fopen("data", "w");

//     // Write integers from 1 to 10 to "data" file
//     for (i = 1; i <= 10; i++) {
//         fprintf(data_file, "%d\n", i);
//     }

//     // Close "data" file
//     fclose(data_file);

//     // Open "data" file for reading
//     data_file = fopen("data", "r");

//     // Open "even" file for writing
//     even_file = fopen("even", "w");

//     // Open "odd" file for writing
//     odd_file = fopen("odd", "w");

//     // Read each integer from "data" file and copy it to "even" or "odd" file based on whether it is even or odd
//     while (fscanf(data_file, "%d", &num) != EOF) {
//         if (num % 2 == 0) {
//             fprintf(even_file, "%d\n", num);
//         } else {
//             fprintf(odd_file, "%d\n", num);
//         }
//     }

//     // Close all files
//     fclose(data_file);
//     fclose(even_file);
//     fclose(odd_file);

//     printf("Even and odd numbers written to 'even' and 'odd' files respectively.\n");

//     return 0;
// }

// 48. WAP in C to show the use of calloc() and Realloc() functions.
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int *arr;
//     int n, i;

//     // Take input for number of elements in the array
//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     // Allocate memory for n elements using calloc()
//     arr = (int *) calloc(n, sizeof(int));

//     // Print the initial array elements
//     printf("Initial array elements: ");
//     for (i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     // Change the size of the array using realloc()
//     n = n + 5;
//     arr = (int *) realloc(arr, n * sizeof(int));

//     // Initialize the new elements in the array
//     for (i = n-5; i < n; i++) {
//         arr[i] = i+1;
//     }

//     // Print the final array elements
//     printf("Final array elements: ");
//     for (i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     // Free the memory allocated using calloc() and realloc()
//     free(arr);

//     return 0;
// }

// 49. WAP TO SHOW THE USE OF FOLLOWING DIRECTIVES #IF, #ELSE
// AND #ENDIF IN C
// #include <stdio.h>

// #define MAX 10

// int main() {
//     int arr[MAX], i;

//     #if MAX > 5
//         printf("MAX is greater than 5\n");
//     #else
//         printf("MAX is less than or equal to 5\n");
//     #endif

//     for (i = 0; i < MAX; i++) {
//         #if i % 2 == 0
//             arr[i] = i;
//         #else
//             arr[i] = i * 2;
//         #endif
//     }

//     printf("Array elements: ");
//     for (i = 0; i < MAX; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }

// 50. WAP TO SHOW THE USE OF STRINGIZE (#) AND TOKEN PASTING
// (##) OPERATOR IN C.
// #include <stdio.h>
// #define STR_PRINT(x) #x
// #define STR_CONCAT(x, y) x##y
// main()
// {
//     printf(STR_PRINT(This is a string without double quotes));
//     printf("\n");
//     printf("%d", STR_CONCAT(20, 50));
//     printf("\n");
//     return 0;
// }
