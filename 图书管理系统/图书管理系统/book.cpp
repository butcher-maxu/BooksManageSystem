#include "book.h"

book::book() // 构造函数
{
    bookName = "未赋值";
    bookISBN = NULLID;
}

string book::getName() const // 获得书名
{
    return bookName;
}

string book::getbookAuthor() const // 获得作者
{
    return bookAuthor;
}

string book::getbookISBN() const // 获得ISBN
{
    return bookISBN;
}

string book::gettype() const // 获得类型
{
    return type;
}

string book::getPublisher() const // 获得出版社
{
    return publisher;
}

bool book::getbookStatue() const // 获得状态
{
    return bookStatus;
}

void book::setName(string bookname) // 设定书名
{
    bookName = bookname;
}

void book::setAuthor(string bookauthor) // 设定作者
{
    bookAuthor = bookauthor;
}

void book::setISBN(string isbn) // 设定ISBN码
{
    bookISBN = isbn;
}

void book::settype(string type) // 设定书项
{
    type = type;
}

void book::setPress(string publisher) // 设定出版社
{
    publisher = publisher;
}

void book::setStatue(int bookstatus = 0) // 设定状态
{
    bookStatus = bookstatus;
}

void book::readBookInformation() // 读入书籍信息函数
{
    cout << "请输入书名：" << endl; // 读入书名
    cin >> bookName;

    cout << "请输入作者名：" << endl; // 读入作者名
    cin >> bookAuthor;

    cout << "请输入ISBN码: " << endl; // 读入ISBN码
    cin >> bookISBN;

    cout << "请输入类别：" << endl; // 读入类别
    cin >> type;

    cout << "请输入出版社：" << endl; // 读入出版社
    cin >> publisher;

    cout << "请输入状态：(0代表在馆, 1代表借出)" << endl; // 读入状态
    cin >> bookStatus;
}

void book::printBookInformation() // 输出书籍信息函数
{
    cout << "书名：" << bookName << endl;    // 输出书名
    cout << "作者：" << bookAuthor << endl;  // 输出作者
    cout << "ISBN码：" << bookISBN << endl;  // 输出ISBN码
    cout << "类别：" << type << endl;        // 输出类别
    cout << "出版社：" << publisher << endl; // 输出出版社
    changeStatue();                          // 调用状态改变函数
}

void book::changeStatue() // 判断状态
{
    bookStatus = getbookStatue();
    if (!bookStatus)
        bookStatus = 1;
    else
        bookStatus = 0;
}

book::~book() {}