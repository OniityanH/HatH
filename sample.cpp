// Creating and writing to a file - C++
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <windows.h>
using namespace std;

int main () {

  std::string line_;
  ifstream file_("C:\\Users\\Allen Zhu\\Desktop\\P.txt");
  ofstream file("C:\\Users\\Allen Zhu\\Desktop\\Final.txt",ios::app);
  ofstream file1("C:\\Users\\Allen Zhu\\Desktop\\P.txt",ios::app);
  SYSTEMTIME sys;
  GetLocalTime( &sys );
  int number=0;
  int block=1;
  if(file_.is_open()){
        while(getline(file_,line_)){
            if (number!=19){
                file<<line_<<",";
                cout<<line_<<",";
                number=number+1;
            }
            else {
                number=0;
                file<<line_<<endl;
                file<<endl;
                file<<"----------------------------------     "<<20*block<<"     ----------------------------------"<<endl;
                file<<endl;
                block=block+1;
            }
        }
  }
  else{
    std::cout<<"file is not open"<<endl;
    exit(1);
  }
  file<<"\n\n"<<endl;
  file1<<"============   ";
  file1<<sys.wYear<<"/"<<sys.wMonth<<"/"<<sys.wDay<<"-"<<sys.wHour<<":"<<sys.wMinute<<":"<<sys.wSecond;
  file1<<"   ============"<<endl;
  file<<"\n\n"<<endl;

  file<<"\n\n"<<endl;
  file<<"============   "<<"SUM: "<<20*block+number<<" Doujins";
  file<<"   ============   ";
  file<<sys.wYear<<"/"<<sys.wMonth<<"/"<<sys.wDay<<"-"<<sys.wHour<<":"<<sys.wMinute<<":"<<sys.wSecond;
  file<<"   ============"<<endl;
  file<<"\n\n"<<endl;
  file_.close();
  file.close();
  file1.close();
  return 0;
}
