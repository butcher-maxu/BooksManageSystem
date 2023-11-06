#pragma once
#ifndef BOOK_H
#define BOOK_H
#include <iomanip>  //��ʽ���
#include <iostream> //ʹ�ñ�׼���������
#include <sstream>  //ʹ��string��

#define NULLID "0"   // �궨��
using namespace std; // ʹ�����ռ�
class book {
  private:
    string bookName;   // ����
    string bookAuthor; // ����
    string bookISBN;   // ISBN��
    string type;       // ���
    int bookStatus;    // �鼮״̬   0: �ڹݣ� 1�� ���
    string publisher;  // ������

  public:
    book();                       // ���캯��
    string getName() const;       // �������
    string getbookAuthor() const; // �������
    string getbookISBN() const;   // ���ISBN
    string gettype() const;       // �������
    string getPublisher() const;  // ��ó�����
    bool getbookStatue() const;    // ��ȡ״̬

    void setName(string bookname);   // �趨����
    void setAuthor(string bookauthor); // �趨����
    void setISBN(string isbn);   // �趨ISBN��
    void settype(string type);   // �趨������
    void setPress(string publisher);  // �趨������
    void setStatue(int bookstatus);    // �趨״̬

    void readBookInformation();  // �����鼮��Ϣ����
    void printBookInformation(); // ��ӡ�鼮��Ϣ����
    void changeStatue();         // �ж�״̬

    ~book(); // ��������
};
#endif
