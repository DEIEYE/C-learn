#include <stdio.h>
int main() {
    float price;
    int category;
    price = 299.9;
    category = 2;
    switch (category) {
        case 1: // 电子产品
            if (price < 500) {
                printf("电子产品价格较低，无优惠\n");
            } else if (price >= 500 && price < 1000) {
                printf("电子产品价格适中，享受5%%优惠\n");
                price = price * 0.95; // 应用5%优惠
            } else {
                printf("电子产品价格较高，享受10%%优惠\n");
                price = price * 0.90; // 应用10%优惠
            }
            break;
        case 2: // 服装
            if (price < 200) {
                printf("服装价格较低，无优惠\n");
            } else if (price >= 200 && price < 500) {
                printf("服装价格适中，享受8%%优惠\n");
                price = price * 0.92; // 应用8%优惠
            } else {
                printf("服装价格较高，享受15%%优惠\n");
                price = price * 0.85; // 应用15%优惠
            }
                break;
        default:
            printf("未知类别，无优惠\n");
            break;
    }
    printf("最终价格为: %.2f\n", price);
    return 0;
}