#include <bits/stdc++.h>
using namespace std;

// we are required to take n no of inputs, then for n in the input we need to calculate the no of divisors


int main()
{
    long n; // no of inputs

    vector <long> num;
    long number;
    long count;
    cin>>n;


    // brute force :

    for (int i = 0; i < n; i++)
    {
        cin>>number;
        num.push_back(number);
    }
    

    for (auto j = 0; j < num.size(); j++)
    {
        count = 0;
        for (auto k = 1; k <= num[j]; k++)
        {
            if (num[j]%k==0)
            {
                count++;
            }
        }
        cout<<count<<endl;
        
    }
    

    
    return 0;
}