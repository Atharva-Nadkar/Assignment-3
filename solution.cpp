//  Created by Atharva Nadkar on 21/06/20.
//  Copyright © 2020 Atharva_Nadkar. All rights reserved.
//  Program for accesing array using pointer.

#include<algorithm>
#include<stdio.h>
#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
#include<sstream>

using namespace std;
 
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n;
    cout<<"enter the no. of elements user wants to input: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
        cin>>*(a+i);
    cout<<"You entered: ";
     for(int i=0;i<n;i++)
           cout<<*(a+i)<<endl;
    return 0;
}
