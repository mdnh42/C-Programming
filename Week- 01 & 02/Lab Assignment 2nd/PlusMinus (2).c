#include <stdio.h>
#include <string.h>

int main() {

    int n;
    scanf("%d", &n);
    char s[105];
    scanf("%s", s);
    int count = 1, maxi = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        if (s[i] == s[i + 1])
        {
            ++count;
        }
        else
        {
            if (maxi < count)
            {
                maxi= count;
            }
            count = 1;
        }
    }
    if (maxi < count)
    {
        maxi = count;
    }
    printf("%d\n", maxi);
    return 0;
}
