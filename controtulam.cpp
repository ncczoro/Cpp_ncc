#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std ;

void xuatmang(int *a, int n)
{
     for(int i = 0; i < n; i++)
     {
             cout<<"\t"<<*(a+i);
             }
             cout<<endl;
             }
void nhapmang(int *a, int n)
{
     for(int i = 0; i < n; i++)
     {
             cout<<"\n nhap a["<<i<<"] = ";
           //  cin>>a[i];
             cin>>*(a+i);
             }
}
             
void themphantu(int *a, int &n, int vitrithem, int phantuthem)
{    
     realloc (a, (n + 1) * sizeof(int *));  // gia tang bo nho them 1 o nua.
   
     for(int i = n; i >= vitrithem + 1; i--)
     {       a[i] = a[i-1];
     }
     a[vitrithem] = phantuthem;
     n++;
}
void xoaphantu(int *a, int &n, int vitrixoa)
{    
     for(int i = vitrixoa+1; i < n; i++)
     {
             a[i - 1] = a[i];
             }
             n--;
          a = new int[n];
              
   //  realloc(a, n * sizeof(int *)); // bo o cuoi. Neu ko co realloc thi nhung o khac se ko lay duoc.
} 
 
int tinhtong(int *a, int n)
{   int tong = 0;
    for(int i = 0; i < n; i++)
    {       tong += a[i];
}
return tong;
}
                       
main ()
{
     int n;
     int phantuthem, vitrithem ;
     do{
         cout<<"\n nhap so phan tu cua mang: ";
         cin>>n;
         if(n < 0 )
         {
              cout<<"\n so phan tu khong hop le. Moi nhap lai";
              }
              }while(n < 0 );
              int *a = new int [n];
           //  int *a = (int *)malloc(n * sizeof(int *)); // cap phat theo malloc, phai de sau khi nhap n.
            //  int *a = (int *)calloc(n, sizeof(int *));
           //  int *a = (int *)realloc(0,n * sizeof(int *));
     nhapmang(a, n);
     cout<<"\n mang vua nhap la :\n ";
     xuatmang(a, n);
     int tong = tinhtong(a, n);
     cout<<"\n nhap vi tri them : ";
     cin>>vitrithem;
     cout<<"\n nhap phan tu them : ";
     cin>>phantuthem;
     themphantu(a, n, vitrithem, phantuthem);
     cout<<"\n tong = "<<tong;
     cout<<"\n mang sau khi them phan tu "<<phantuthem<<" la : \n";
     xuatmang(a,n);
     int vitrixoa;
     cout<<"\n nhap vi tri xoa :";
     cin>>vitrixoa;
     xoaphantu(a, n, vitrixoa);
     cout<<"\n mang sau khi xoa phan tu o vi tri "<<vitrixoa<<" la :\n";
     xuatmang(a, n);
     
     delete[] a;
    // free (a);
     getch();
     return 0;
}
     
     
