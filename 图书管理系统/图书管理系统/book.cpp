#include "book.h"

book::book() // ���캯��
{
    bookName = "δ��ֵ";
    bookISBN = NULLID;
}

string book::getName() const // �������
{
    return bookName;
}

string book::getbookAuthor() const // �������
{
    return bookAuthor;
}

string book::getbookISBN() const // ���ISBN
{
    return bookISBN;
}

string book::gettype() const // �������
{
    return type;
}

string book::getPublisher() const // ��ó�����
{
    return publisher;
}

bool book::getbookStatue() const // ���״̬
{
    return bookStatus;
}

void book::setName(string bookname) // �趨����
{
    bookName = bookname;
}

void book::setAuthor(string bookauthor) // �趨����
{
    bookAuthor = bookauthor;
}

void book::setISBN(string isbn) // �趨ISBN��
{
    bookISBN = isbn;
}

void book::settype(string type) // �趨����
{
    type = type;
}

void book::setPress(string publisher) // �趨������
{
    publisher = publisher;
}

void book::setStatue(int bookstatus = 0) // �趨״̬
{
    bookStatus = bookstatus;
}

void book::readBookInformation() // �����鼮��Ϣ����
{
    cout << "������������" << endl; // ��������
    cin >> bookName;

    cout << "��������������" << endl; // ����������
    cin >> bookAuthor;

    cout << "������ISBN��: " << endl; // ����ISBN��
    cin >> bookISBN;

    cout << "���������" << endl; // �������
    cin >> type;

    cout << "����������磺" << endl; // ���������
    cin >> publisher;

    cout << "������״̬��(0�����ڹ�, 1������)" << endl; // ����״̬
    cin >> bookStatus;
}

void book::printBookInformation() // ����鼮��Ϣ����
{
    cout << "������" << bookName << endl;    // �������
    cout << "���ߣ�" << bookAuthor << endl;  // �������
    cout << "ISBN�룺" << bookISBN << endl;  // ���ISBN��
    cout << "���" << type << endl;        // ������
    cout << "�����磺" << publisher << endl; // ���������
    changeStatue();                          // ����״̬�ı亯��
}

void book::changeStatue() // �ж�״̬
{
    bookStatus = getbookStatue();
    if (!bookStatus)
        bookStatus = 1;
    else
        bookStatus = 0;
}

book::~book() {}