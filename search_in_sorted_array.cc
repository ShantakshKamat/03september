int getpivot(vector<int>& arr, int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s; // or return esame thing
}

int binarySearch(vector<int>& arr, int s, int e, int key)
{
    int start = s;
    int end = e;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int findPosition(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int pivot = getpivot(arr, n);
    int K;
    if (k >= arr[pivot] && k <= arr[n - 1])
    {
        // apply bs on lineII
        K=binarySearch(arr, pivot, n - 1, k);
    }
    else
    {
        K=binarySearch(arr, 0, pivot - 1, k);
    }
    return K;
}
