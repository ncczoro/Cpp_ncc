#include<iostream>
#include<conio.h>
#include<string.h>
// LAM THEO C 
 using namespace std ;
 
int STRLEN(char *s)   // ham tinh do dai chuoi ma ko cung strlen
{    int dem = 0;
    while(s[dem] != '\0' )
    {            dem ++;
    }
    return dem ;
}
void STRCPY(char *s1, char *s2)  // ham sao chep chuoi s2 vao chuoi s1 
 {
    int dodai = STRLEN(s2) ;
    for ( int i = 0; i < dodai; i++)
    {
        s1[i] = s2[i] ;
        }
    s1[ STRLEN(s2) ] = '\0' ;
    
}
void viethoakitudau(char *s)
{
     int dodai = STRLEN(s);
     for(int i = 0; i < dodai; i++)
     {       if ( s[i] == ' ' && s[i  + 1] != ' ')
     {       if ( s[i + 1] >= 'a' && s[i + 1] <= 'z' )
     {          s[i + 1] -= 32 ;
     }}}}

void inhoa(char *s)
{
     int dodai = STRLEN(s);
     for(int i = 0; i <= dodai; i++)
     {
             if( s[i] >= 'a' && s[i] <= 'z' )
             {
                 s[i] -=32 ;
                 }
             if(s[0] >= 'a' && s[0] <= 'z')
             {
                     s[0] -=32 ;
                 }}  }
void xoa(char *a, int vitrixoa)  // xoa 1 ky tu o 1 vi tri
{   
     
     int dodai = STRLEN(a);
     for(int i = vitrixoa + 1; i < dodai ; i++)
     {      a[i-1] = a[i] ;
     }
     a[dodai - 1] = '\0' ;
     }


                 
                 
void xoakhoangtrangthua ( char *s)  // chuan hoa chuoi
{    
     int dodai = STRLEN (s) ;
     for (int i =0 ; i <= dodai; i++)
     {
         if(s[i] == ' ' && s[i+1] == ' ')
         {
                 xoa(s,i);
                 i--;
                 dodai--;
                 }}
     if(s[0] == ' ')             // xoa khoang trang vi tri dau tien
     {       xoa(s,0);
             dodai--;
     }
     if(s[dodai-1] == ' ')       // xoa cuoi
     { xoa(s,dodai-1);
       dodai--;
     }
     
}
     
     

main ()
{
     char s[50] ;  
     STRCPY(s, "cuong    dep   trai   ") ;
     cout<<s;
     int dodai = STRLEN(s) ;
     cout<<"\n do dai la : "<<dodai;
     viethoakitudau(s);
     cout<<"\n chuoi viet hoa ky tu dau :  "<<s;     
     inhoa(s);
     cout<<"\n IN HOA : "<<s;
      xoakhoangtrangthua(s);
     cout<<"\n chuoi sau khi chuan hoa : "<<s;
      cout<<"\n do dai la : "<<dodai;
     getch();
     return 0;
     }
 
