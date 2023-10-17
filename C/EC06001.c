#include <stdio.h>
#include <string.h>

int demSoTu(char *chuoi) {
    int dem = 0;
    int trong_tu = 0;

    for (int i = 0; chuoi[i] != '\0'; i++) {
        if (chuoi[i] != ' ' && !trong_tu) {
            trong_tu = 1;
            dem++;
        } else if (chuoi[i] == ' ') {
            trong_tu = 0;
        }
    }

    return dem;
}

int main() {
    int so_luong_truong_hop;
    scanf("%d", &so_luong_truong_hop);

    for (int i = 0; i < so_luong_truong_hop; i++) {
        char chuoi[201]; // Đảm bảo đủ kích thước cho chuỗi

        // Đọc chuỗi từ input
        scanf(" %[^\n]s", chuoi);

        int ket_qua = demSoTu(chuoi);
        printf("%d\n", ket_qua);
    }

    return 0;
}
