int firstocc(vector<int>& arr, int n, int key)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] > key)
        { // left jao
            e = mid - 1;
        }
        else
        { // right mein jao
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastocc(vector<int>& arr, int n, int key)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] > key)
        { // left jao
            e = mid - 1;
        }
        else
        { // right mein jao
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}




#include <bits/stdc++.h> 
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here

    pair<int,int> p;

    p.first=firstocc(arr,n,k);
    p.second=lastocc(arr,n,k);

    return p;
}
