// "Define a struct Product with price and discount. Write two functions: One that calculates discounted price (call by value).Another that updates the price in the original structure (call by address)."
#include <stdio.h>
typedef struct {
    float price;
    float disc;
} Product;

float getDiscountPrice(Product p) {
    float result;
    result = p.price - (p.price * p.disc / 100);
    return result;
}

void updatePrice(Product *p) {
    p->price = p->price - (p->price * p->disc / 100);
}

int main() {
    Product item;
    printf("Enter price: ");
    scanf("%f", &item.price);
    printf("Enter discount: ");
    scanf("%f", &item.disc);
    float finalPrice = getDiscountPrice(item);
    printf("\nAfter discount (value): %.2f\n", finalPrice);
    printf("Original price: %.2f\n", item.price);
    updatePrice(&item);
    printf("\nUpdated price (address): %.2f\n", item.price);
    return 0;
}