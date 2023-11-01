#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;
int n;
const int N = 100010;
int q[N], tmp[N];
long long res;
void merge_sort(int l, int r)
{
    if (l >= r) return;
    int mid = l + r >> 1;
    merge_sort(l, mid);
    merge_sort(mid + 1, r);
    int k = 0, i = l, j = mid + 1;
    while (i <= mid && j <= r)
    {
        if (q[i] <= q[j]) tmp[k++] = q[i++];
        else
        {
            tmp[k++] = q[j++];
            res += mid - i + 1;
        }

    }
    while (i <= mid) tmp[k++] = q[i++];
    while (j <= r) tmp[k++] = q[j++];

    for (i = l, j = 0; i <= r; i++, j++) q[i] = tmp[j];
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++) cin >> q[i];
    merge_sort(0, n - 1);
    cout << res << endl;
    return 0;
}