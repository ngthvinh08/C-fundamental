#include <stdio.h>

// Macro: Thay thế văn bản
#define MAX_VALUE 100
#define SQUARE(x) ((x) * (x)) // Luôn dùng dấu ngoặc đơn!

// Const: Biến có giá trị không đổi, được kiểm soát bởi compiler
const int BUFFER_SIZE = 50; // Const toàn cục
const float PI = 3.14159f;

void processData(const int* data_ptr) { // const ở đây ngăn hàm sửa đổi giá trị mà data_ptr trỏ tới
    // *data_ptr = 10; // Lỗi biên dịch: Cannot assign to a variable with const-qualified type
    printf("Processing data: %d\n", *data_ptr);
}

void exampleFunction() {
    const int localConst = 20; // const cục bộ, chỉ có hiệu lực trong exampleFunction()
    // localConst = 30; // Lỗi biên dịch: assignment of read-only variable 'localConst'

    printf("Local const: %d\n", localConst);
    // printf("Macro MAX_VALUE: %d\n", MAX_VALUE); // MAX_VALUE có hiệu lực ở đây
}

int main() {
    printf("Global const BUFFER_SIZE: %d\n", BUFFER_SIZE);
    printf("Macro MAX_VALUE: %d\n", MAX_VALUE);

    int num = 5;
    printf("Square of 5 (using macro): %d\n", SQUARE(num)); // SQUARE(num) thành ((num) * (num))

    processData(&num); // Truyền địa chỉ của num vào hàm

    // printf("Local const: %d\n", localConst); // Lỗi biên dịch: 'localConst' undeclared here (not in scope)

    return 0;
}