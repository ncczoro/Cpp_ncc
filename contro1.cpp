/*
con tr? là 1 bien bình thuong nhung có the tro di lung tung trong bo nho  .
tai sao lai co con tro ? su dung duoc  gi ?
=>vi co the chay lung tung trong bo nho nen viec su dung bo nho se linh hoat hon.
-ap dung cho mang dong.
CU PHAP :    <keiu du lieu> *<ten con tro>
             <kieu du lieu> bao gom nhung kieu du lieu co san (int, float, double, char, void) va kieu du lieu do nguoi dung tu dinh nghia.
             <ten con tro> phai theo quy tac dat ten trong lap trinh vd:int *a; con tro a co keiu int.
luu y:      int *a; // khai bao bien con tro
             int* TimMax(int *a, int*b); // khai bao ham tra ve 1 con tro
he dieu hanh 32 bits con tro ton 4 bytes 64 bits ton 8 bytes
LUU Y: <kieu du lieu> trong khai bao con tro ko phai la kieu du lieu cua no ma chi la kieu du lieu cua vung nho ma no dang tro den.
-void* : con tro co kieu co the nhan duoc moi kieu du lieu nhung phai ep lai
----------CAU TRUC BO NHO MAY TINH :-------------
Duoc chia lam 4 phan:
     1.code segmet
     => la noi luu tru ma~ may dang nhi phan.
     2.data segmet
     =>la noi chua cac bien tinh~(static) va bien toan cuc.
     3.heap
     =>la vung nho khong do CPU quan ly, nguoi lap trinh phai tu quan ly vung nho nay. vung nho nay danh cho con tro.
     4.stack
     =>la vung nho do CPU quan ly, nguoi lap trinh khong the can thiep vao vung nho nay. Neu co tinh can thiep se bi loi.
      Vung nho nay chua cac bien cuc bo
     ( bi baoo vay boi dau {} ). 
-1 bien binh thuong trong bo nho gom 2 phan:
        + dia chi cua bien.  ( vd int a=5 dia chi cua bien: &a dia chi gom 8 chu so dang hexa
        + gia tri cua bien.      gia tri cua bien: a )
DOI VOI 1 CON TRO gom 3 phan :
    +dia chi cua con tro
    +mien gia tri cua con tro (tuc la dia chi cua bien ma no dang tro toi).
    +gai tri cua con tro
    vd:
         int a=5;
         int *b=&a; // cho con tro b tro toi bien a
         *b la gia tri cua con tro b ma no dang tro toi a nen chinh la gia tri cua a
         &b :dia chi cua con tro b
         b: mien gia tri cua con tro b // chinh la dia chi cua a
         a thay doi thi *b cung thay doi va nguoc lai
         
CAC CO CHE CAP PHAT & GIAI PHONG 
  -TAI SAO CAN CAP PHAT CHO CON TRO
  ->NEU TA CAN NHAP DU LIEU TRUC TIEP CHO CON TRO THI TA CAN PHAI CAP PHAT BO NHO CHO NO
  + TRONG LAP TRINH C CO 3 CO CHE AP PHAT :
          -MALLOC(<SO BYTE CAN CAP PHAT CHO TOAN BO CHUONG TRINH>)     //HAM TRA VE 1 CAI DIA CHI DE CON TRO TRO TOI
          -CALLOC (<SO LUONG O CAN CAP PHAT>,<DO LON CUA 1 O>)    //HAM TRA VE 1 CAI DIA CHI
          -REALLOC CO 2 DANG :  //HAM TRA VE 1 CAI DIA CHI
          1/ DOI VOI VUNG NHO CHUA DUOC KHOI TAO THI REALLOC TAO MOI VUNG NHO CHO NO
          2/ DOI VOI VUNG NHO CO SAN THI GIA TANG HOAC GIAM BOT 1 SO O NHO
          
          
  =>> GIAI PHONG : FREE
  + TRONG LAP TRINH C++ :
          NEW       //LA 1 TOAN TU
  =>> GIAI PHONG : DELETE
  TAI SAO CAN GIAI PHONG CON TRO : 
      => BAN CHAT CUA VIEC GIAI PHONG CON TRO LA NO BAO CHO VUNG NHO BIET LA` VUNG` NHO' NAY` NE` , NO KHONG CON SU DUNG NUA,
      HE DIEU HANH CO THE SU DUNG NO CHO 1 TIEN TRINH KHAC .
      => NEU NHU NGAY SAU KHI GIAI PHONG CO 1 TIEN TRINH KHAC CHIEM HUU O NHO DO => GIA TRI HIEN TAI TREN O NHO DO SE KHONG CON NUA
      NEU NHU KHONG CO TIEN TRINH CHIEM HUU => GIA TRI HIEN TAI TREN O NHO VAN CON
  - NEU NGUOI LAP TRINH KHONG GIAI PHONG THI NO SE KO DUOC GIAI PHONG RA = > SAY RA HIEN TUONG TRAN BO NHO

*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>
using namespace std;
 int main ()
{
     int a = 5 ;
     int *b = &a;
     
     a--;
     (*b)--;
     
     cout<<"gia tri cua a = "<<a;
     cout<<"\n dia chi cua a = "<<&a;
     
     cout<<"\n gia tri cua con tro b la : "<<*b;
     cout<<"\n dia chi cua con tro b la : "<<&b;
     cout<<"\n mien gia tri cua cin tro b la : "<<b;
     
     
     getch();
     return 0;
     }












