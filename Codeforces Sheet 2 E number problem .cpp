#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<long long> numbers(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> numbers[i];
    }
    long long max_number = numbers[0];
    for (int i = 1; i < N; ++i)
    {
        if (numbers[i] > max_number)
        {
            max_number = numbers[i];
        }
    }
    cout << max_number << endl;
    return 0;
}
