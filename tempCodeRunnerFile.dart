Mạnh Hùng
#include <iostream>
#include <windows.h>
#include <map>
#include <sstream>
using namespace std;

float itv1[7]={261.626,293.665,329.628,349.228,391.995,440,493.883};
float itv2[7]={523.251,587.33,659.255,698.456,783.991,880,987.767};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // Con mua qua em roi di
    Beep(itv1[4],400);
    Beep(itv1[4],400);
    Beep(itv1[4],400);
    Beep(itv1[3],400);
    Beep(itv1[2],500);
    Beep(itv1[4],500);
    Sleep(2500);
    // Con mua qua anh nhoe mi
    Beep(itv1[4],400);
    Beep(itv1[4],400);
    Beep(itv1[4],400);
    Beep(itv1[3],400);
    Beep(itv1[2],500);
    Beep(415.305,500);
    Sleep(2500);
    // Mong mot lan co duoc em
    Beep(415.305,400);
    Beep(415.305,400);
    Beep(415.305,400);
    Beep(itv2[1],400);
    Beep(itv1[6],500);
    Beep(itv2[0],500);
    Sleep(2500);
    //de that long cung nhau say dam
    Beep(itv1[4],400);
    Beep(itv2[0],400);
    Beep(itv2[0],400);
    Beep(itv2[0],400);
    Beep(itv2[1],400);
    Beep(itv2[2],500);
    Beep(itv2[3],500);
    Sleep(2500);
    // Hoa giac mo chua tung co
    Beep(itv2[2],400);
    Beep(itv2[2],400);
    Beep(itv2[0],400);
    Beep(itv2[0],400);
    Beep(itv1[5],400);
    Beep(itv2[2],600);
    Sleep(2000);
    // Bao gio gap go ?
    Beep(itv2[0],500);
    Beep(415.305,400);
    Beep(itv1[4],400);
    Beep(itv2[1],600);
    Sleep(2500);
    // Gio cuon van tho ...
    Beep(itv2[1],500);
    Beep(itv2[1],500);
    Beep(itv1[6],500);
    Beep(itv2[0],500);
    Sleep(2500);
    // Ve noi con tim gia buot bong thay nang trong long ...
    Beep(itv1[4],400);
    Beep(itv1[5],400);
    Beep(itv2[0],400);
    Beep(itv2[0],400);
    Beep(itv2[0],400);
    Beep(itv2[0],400);
    Beep(itv2[0],400);
    Beep(itv2[0],400);
    Beep(itv1[6],400);
    Beep(itv1[5],400);
    Beep(itv1[4],600);
    Sleep(3000);
     // Chi muon giu em canh ben
    Beep(itv1[4],400);
    Beep(itv1[4],400);
    Beep(itv1[4],400);
    Beep(itv1[3],400);
    Beep(itv1[2],500);
    Beep(itv1[4],500);
    Sleep(2500);
    // Hoen mi cay dung nhoe them
    Beep(itv1[4],400);
    Beep(itv1[4],400);
    Beep(itv1[4],400);
    Beep(itv1[3],400);
    Beep(itv1[2],400);
    Beep(415.305,500);
    Sleep(2500);
    // Mat troi la hoa huong duong
    Beep(415.305,400);
    Beep(415.305,400);
    Beep(415.305,400);
    Beep(itv1[6],400);
    Beep(itv2[1],500);
    Beep(itv2[0],500);
    Sleep(2500);
    //de that long cung nhau say dam
    Beep(itv1[4],400);
    Beep(itv2[0],400);
    Beep(itv2[0],400);
    Beep(itv2[0],400);
    Beep(itv2[1],400);
    Beep(itv2[2],500);
    Beep(itv2[3],500);
    Sleep(2500);
    // Hoa giac mo chua tung co
    Beep(itv2[2],400);
    Beep(itv2[2],400);
    Beep(itv2[0],400);
    Beep(itv2[0],400);
    Beep(itv1[5],400);
    Beep(itv2[2],600);
    Sleep(2000);
    // Bao gio gap go ?
    Beep(itv2[0],500);
    Beep(415.305,400);
    Beep(itv1[4],400);
    Beep(itv2[1],600);
    Sleep(2500);
    // Gio cuon van tho ...
    Beep(itv2[1],500);
    Beep(itv2[1],500);
    Beep(itv1[6],500);
    Beep(itv2[0],500);
    Sleep(2500);
    // Anh sao soi man dem ke ben nhau
    Beep(itv2[4],400);
    Beep(itv2[3],400);
    Beep(itv2[3],400);
    Beep(itv2[2],400);
    Beep(itv2[3],400);
    Beep(itv2[2],400);
    Beep(itv2[3],400);
    Beep(itv2[3],800);
    Sleep(3000);
    // Pho da len den
    Beep(itv2[2],400);
    Beep(itv2[2],400);
    Beep(itv2[1],400);
    Beep(itv2[0],400);
    Sleep(2500);
    // Con duong co moi ke moi
    Beep(itv2[0],400);
    Beep(itv1[4],400);
    Beep(itv2[2],400);
    Beep(itv2[1],400);
    Beep(itv2[0],400);
    Beep(itv2[2],400);
    Sleep(2500);
    // Pho da len den
    Beep(itv2[2],400);
    Beep(itv2[2],400);
    Beep(itv2[1],400);
    Beep(itv2[0],400);
    Sleep(2500);
    // Ben nguoi anh thuong anh nho anh mong ...
    Beep(itv2[0],400);
    Beep(itv1[4],400);
    Beep(itv2[0],400);
    Beep(itv2[1],400);
    Beep(itv2[2],400);
    Beep(itv2[4],500);
    Beep(itv2[5],600);
    Beep(itv2[4],400);
    Beep(itv2[4],400);
    Sleep(2500);
    // Co nhac ben canh ai khong phieu 
    Beep(itv2[0],400);
    Beep(itv1[6],400);
    Beep(itv2[0],400);
    Beep(itv1[5],400);
    Beep(itv2[1],400);
    Beep(itv2[1],400);
    Beep(itv2[1],400);
    Sleep(2500);
    // Co em ben canh yeu khong phai
    Beep(itv2[0],400);
    Beep(itv1[5],400);
    Beep(itv1[5],400);
    Beep(itv1[4],400);
    Beep(itv1[6],400);
    Beep(itv1[6],400);
    Beep(itv2[0],400);
    Sleep(2500);
    // Tinh yeu nam ngang cua anh luon ngan nam ...
    Beep(itv1[5],400);
    Beep(itv2[0],400);
    Beep(itv1[5],400);
    Beep(itv2[0],400);
    Beep(itv1[5],400);
    Beep(itv2[0],400);
    Beep(itv2[1],400);
    Beep(itv2[0],400);
    Beep(itv2[1],600);
    Sleep(3000);

    // Pho da len den
    Beep(itv2[2],400);
    Beep(itv2[2],400);
    Beep(itv2[1],400);
    Beep(itv2[0],400);
    Sleep(2500);
    // Em nhin trai tim dai duong
    Beep(itv2[0],400);
    Beep(itv1[4],400);
    Beep(itv2[2],400);
    Beep(itv2[1],400);
    Beep(itv2[0],400);
    Beep(itv2[2],400);
    Sleep(2500);
    // Pho da len den
    Beep(itv2[2],400);
    Beep(itv2[2],400);
    Beep(itv2[1],400);
    Beep(itv2[0],400);
    Sleep(2500);
    // Di tim loi ca anh viet chan phuong
    Beep(itv2[0],400);
    Beep(itv1[4],400);
    Beep(itv2[0],400);
    Beep(itv2[1],400);
    Beep(itv2[2],400);
    Beep(itv2[4],500);
    Beep(itv2[5],600);
    Beep(itv2[4],400);
    Beep(itv2[4],400);
    Sleep(2500);
    // Mua roi choi voi con mo ve em
    Beep(itv2[0],400);
    Beep(itv2[0],400);
    Beep(itv2[0],400);
    Beep(itv2[0],400);
    Beep(itv1[5],400);
    Beep(itv2[0],400);
    Beep(itv1[5],400);
    Beep(itv2[1],500);
    Sleep(2500);
    // Nguyen ven cau chuyen ta tung xem
    Beep(itv1[6],400);
    Beep(itv1[4],400);
    Beep(itv1[6],400);
    Beep(itv1[4],400);
    Beep(itv1[6],400);
    Beep(itv1[4],400);
    Beep(itv2[0],700);
    Sleep(2500);
    // Khoang cach se khong xa
    Beep(itv1[4],400);
    Beep(itv2[2],400);
    Beep(itv1[2],400);
    Beep(itv2[1],400);
    Beep(itv2[1],400);
    Sleep(2500);
    // Neu nhu ... ta coi nhau la tat ca
    Beep(itv2[1],400);
    Beep(itv2[1],400);
    Sleep(2500);
    Beep(itv2[1],400);
    Beep(itv2[1],400);
    Beep(itv2[1],400);
    Beep(itv2[0],400);
    Beep(itv2[1],400);
    Beep(itv2[0],800);
    return 0;
}