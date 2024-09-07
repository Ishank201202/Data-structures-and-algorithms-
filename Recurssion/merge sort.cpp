class Solution
{
public:
    void merge(int arr[], int l, int m, int h)
    {
        // Your code here
        vector<int> temp;
        int p1 = l;
        int p2 = m + 1;
        while (p1 <= m && p2 <= h)
        {
            if (arr[p1] <= arr[p2])
            {
                temp.push_back(arr[p1]);
                p1++;
            }
            else
            {
                temp.push_back(arr[p2]);
                p2++;
            }
        }
        while (p1 <= m)
        {
            temp.push_back(arr[p1]);
            p1++;
        }
        while (p2 <= h)
        {
            temp.push_back(arr[p2]);
            p2++;
        }
        for (int i = l; i <= h; i++)
        {
            arr[i] = temp[i - l];
        }
    }

public:
    void mergeSort(int arr[], int l, int h)
    {
        // code here
        if (l >= h)
            return;
        int m = (l + h) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, h);
        merge(arr, l, m, h);
    }
};