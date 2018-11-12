#include<iostream>
#include<conio.h>
#include<string>
// doi chu hoa sang chu thuong : + 32, nguoc lai.
// doi ky tu sang so : - 48 , nguoc lai.
// LAM THEO C++
using std::string ;
 using namespace std ;
int  demsotu(string s)
 {   
     int dem =0 ;
      int dodai = s.size() ;      // tinh do dai cua chuoi
          
          if (s[0] != ' ')          // [] la toan tu lay chi so
          {
                   dem = 1;
                   dodai --;
          }
      for (int i = 0; i < dodai - 1  ; i++)
      {
          if(s[i] == ' ' && s[i + 1] != ' ' )
          {
                  dem ++ ;
          }
      }
      return dem ;
}

main () 
{
     string s;
     getline(cin,s);
     cout<<"chuoi vuan nhap : \n"<< s;
     int cc = demsotu(s);
     cout<<"\nso tu la : "<<cc<<"\n";
     
     system("pause");
}
    /*     ====XOA====        
 str.erase(x,y); =>> xoa di y ky tu bat dau tai vi tri x.
 str.srase(str.begin() + x); =>>xoa di ky tu tai vi tri x.
 str.erase(str.begin() + x, str.begin() + y); =>>xoa di cac ky tu tu vi tri x den y-1
        ========THEM======
 str.insert(x,"y"); =>> them chuoi y vao vi tri x
 str.insert(x."y",z); =>> them z ky tu tu chuoi y vao vi tri x. Neu z co do dai lon hon do dai chuoi y thi
                        tiep tuc them vao mot khong trang va sau do lai tiep tuc bat dau them vao cac ky tu 
                        cua chuoi tu vi tri 0-> du z thi thoi
 str.insert(x,y,'z'); =>> them y lan ky tu z vao vi tri x.
        ======LAY CHUOI CON=======
 string str2 = str.sunstr(x,Y); =>> lay chuoi con cua chuoi str bat dau tu vi tri x va lay ra y ky tu.
 string str2 = str.sunstr(x);   =>> lay chuoi con cua chuoi str bat dau tu vi tri x cho den cuoi chuoi.
 
 'a' => 97
 'A' => 65
 muon chuyen tu hoa sanag thuong thi + 32 va nguoc lai.
 
 ** dem cac tu trong chuoi : dua ve chuoi~ chuan hoa roi tinh dau ' ' + 1 = so tu .
 
 
 */
