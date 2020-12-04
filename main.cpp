#include <iostream>

using namespace std;

int main()
{
    int x;

    printf("enter a number: ");
    while (scanf("%d", &x) == 0){
        scanf("%*[^\n]");
        printf("enter a number again: ");
    }

    int odds = 0, digit_sum;
    while (x != 0){
        digit_sum = 0;
        while (x != 0){
            digit_sum += x % 10;
            x /= 10;
        }

        if (!(digit_sum % 2 == 0))
            odds++;
        printf("enter a number: ");
        while (scanf("%d", &x) == 0){
            scanf("%*[^\n]");
            printf("enter a number again: ");
        }
    }
    printf("given progression has %d numbers with their digits giving an odd sum", odds);
    return 0;
}
