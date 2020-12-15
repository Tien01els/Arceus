#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
/*string maxNumberKth(string n, long long k)
{
    int x = n.size(), i = 0, j = 0;
    vector<int> a;
    int* b = &a[0];
    while (i < x)
    {
        while (i < x && !isdigit(n[i])) ++i;
        long long sum = 0, q = 0;
        while (i < x && isdigit(n[i])) {
            sum = sum * 10 + n[i] - 48;
            ++i;
        }
        *(b + j) = sum;
        ++j;
    }
    sort(a.rbegin(), a.rend());
    if (j == 0 || j < k)
        return to_string(-1);
    for (long long i = 0; i < j - 1; ++i)
    {
        if (a[i] != a[i + 1])
            k--;
        if (k == 0)
            return to_string(a[i]);
    }
    return to_string(a[j - 1]);
}*/
int main()
{
    int a[1000], n = 0;
    for (int i = 1; i < 10; ++i) {
        for (int j = 0; j < 10; ++j)
            if (i * j == 2 * (i + j))
                a[n++] = i * 10 + j;
    }
    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";
	return 0;
}
