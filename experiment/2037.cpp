#include <bits/stdc++.h>
using namespace std;

// we need to make a permutation ( an array of elements) in range n : all the elements are in this array from 1 to n : in such a way that the sum of two adjacent numbers sum in array a composite, i.e the sum must have a factor other then 1 and the number

int main()
{
    // first lets have the elemetns

    vector<int> arr;  // totally sorted array
    int n;
    cin>>n;

    int front=0;
    int end = n +1;

    for (int i = 1; i <= n; i++)
    {   
        if(i% 2 == 0) // number is even put at last
        {
            arr.push_back(i);
            end--;

        }
        else
        {
            arr.insert(arr.begin(),i);  // odd push at end
            front++;
        }
    }


    if((arr[end]+arr[front])%2 == 0)
    {
        // return arr;
    }

    else
    {
        // while ()
        // {
        //     /* code */
        // }
        
    }

    // insert is done now we need to check if arr[front] + arr[end] == composite or not?? if not then go back in both sides and find a pair whose sum could be equal to even (odd + even)


    // now the vector arr has all the elements from which we need to make the permutation :

    // output the permutation that we made , if not possible then return -1

    // what if we place all odds at front and all even at last : then check for the meet if the meet is somehow able to be converted into a composite number


    // for(int x : arr)
    // {
    //     cout<<x<<endl;
    // }

    // cout<<front<<" "<<end;

    return 0;

}