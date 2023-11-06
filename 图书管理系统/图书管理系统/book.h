#pragma once
#ifndef BOOK_H
#define BOOK_H
#include <iomanip>  //格式输出
#include <iostream> //使用标准输入输出流
#include <sstream>  //使用string流

#define NULLID "0"   // 宏定义
using namespace std; // 使用名空间
class book {
  private:
    string bookName;   // 书名
    string bookAuthor; // 作者
    string bookISBN;   // ISBN码
    string type;       // 类别
    int bookStatus;    // 书籍状态   0: 在馆， 1： 外借
    string publisher;  // 出版社

  public:
    book();                       // 构造函数
    string getName() const;       // 获得书名
    string getbookAuthor() const; // 获得作者
    string getbookISBN() const;   // 获得ISBN
    string gettype() const;       // 获得类型
    string getPublisher() const;  // 获得出版社
    bool getbookStatue() const;    // 获取状态

    void setName(string bookname);   // 设定书名
    void setAuthor(string bookauthor); // 设定作者
    void setISBN(string isbn);   // 设定ISBN码
    void settype(string type);   // 设定书的类别
    void setPress(string publisher);  // 设定出版社
    void setStatue(int bookstatus);    // 设定状态

    void readBookInformation();  // 读入书籍信息函数
    void printBookInformation(); // 打印书籍信息函数
    void changeStatue();         // 判断状态

    ~book(); // 析构函数
};
#endif
