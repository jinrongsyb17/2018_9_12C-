#include "client.h"
#include <iostream>
using namespace std;
char CLIENT::Servername = 'A';
int CLIENT::Clientnum = 0;
CLIENT::CLIENT() { Clientnum++; };
CLIENT::~CLIENT() { Clientnum--; };
void CLIENT::changeServername(char sn) { Servername = sn; };
void CLIENT::showServername() { cout << "��������" << Servername << endl; };
void CLIENT::showClientnum() { cout << "�ͻ�����" << Clientnum << endl; };