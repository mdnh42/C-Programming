#include<stdio.h>

struct Food
{
    char name[100];
    double price;
    double tax;
    int f_code;
};

struct Food input_foods()
{
    struct Food single_fod;
    printf("Enter foo_name, prime, food_code: ");
    scanf(" %s %lf %d ", &single_fod.name, &single_fod.price, &single_fod.f_code);
    single_fod.tax = single_fod.price * 5;
    return single_fod;
};
void display_foods(struct Food f[], int sz)
{
    for(int i =0; i<sz; i++)
    {
        printf("%s", f[i].name);
        printf("%lf", f[i].price);
        printf("%lf", f[i].tax);
        printf("%d", f[i].f_code);
    }
}
int main()
{
    printf("Food Input How Much: ");
    int n;
    scanf("%d", &n);

    struct Food food_items[n];

    for(int i=0; i<n; i++)
    {
        food_items[i] = input_foods();
    }
    display_foods(food_items, n);
    return 0;
}
