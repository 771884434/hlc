#include <stdio.h>
#include <WinSock2.h>

int main(int argc, char* argv[]){
	WORD sockVersion = MAKEWORD(2, 2);
	WSADATA wsaData;
	if (WSAStartup(sockVersion,&wsaData)!=0)
}