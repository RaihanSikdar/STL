#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<iterator>
using namespace std;

int main()
{
    int n;
    vector <int> vec;
    vector <int> :: iterator it;

    for(int i =1;i<=5;i++)
    {
        cin>>n;
        vec.push_back(n);     // take user input
    }

    for(it = vec.begin(); it != vec.end(); it++)
    {
         cout<<*it<<" ";
    }


}

