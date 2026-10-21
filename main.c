#include <stdio.h>

int main() {
  float d; // khoảng cách giao hàng (km)
  double phi_giao_hang = 0;

  // nhập khoảng cách
  scanf ("%f", &d);
  if (d <= 0) {
    printf ("khoang cach khong hop le!\n");
    return 0;
    
  }
  if (d <= 1 ){
    phi_giao_hang = 15000;
    
  } else if ( d<=10) {
     phi_giao_hang = 15000+ (d-1)* 10000;
  }else{
    phi_giao_hang = 15000+9*10000+ (d-10)* 8000;
  }
    // in ra kết quả phí giao hàng ( lấy dạng số nguyên)
  printf("%.0lf\n", phi_giao_hang);
  return 0;
}