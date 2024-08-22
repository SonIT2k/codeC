#include <stdio.h>

/* Hàm tính giai thừa */
int factorial(int n) {
  if (n == 0) return 1;
  return n * factorial(n - 1);
}

/* Hàm tính đạo hàm thứ k của f(x) tại x = X0 */
double f_k(int k, double x) {
  // Thêm mã để tính đạo hàm thứ k của f(x)
  // Ví dụ: return giá trị đạo hàm tại x, hoặc 0 nếu không biết hàm f(x)
  return 0;
}

/* Hàm nội suy f(x) */
double interpolate(double x, int n, double X[], double Y[]) {
  double f_value = 0;

  for (int i = 0; i < n; i++) {
    double f_i = Y[i];
    for (int j = 0; j < n; j++) {
      if (j != i) {
        f_i *= (x - X[j]) / (X[i] - X[j]);
      }
    }
    f_value += f_i;
  }

  return f_value;
}

int main() {
  // Nhập dữ liệu
  int n;
  scanf("%d", &n);
  
  if (n == 0) {
    printf("Khong co du lieu de tinh toan.\n");
    return 0;
  }

  double X[n], Y[n];
  for (int i = 0; i < n; i++) {
    scanf("%lf %lf", &X[i], &Y[i]);
  }

  // Tính gần đúng f(x*)
  double x_star;
  scanf("%lf", &x_star);

  double f_star = interpolate(x_star, n, X, Y);
  printf("%lf\n", f_star);

  return 0;
}
