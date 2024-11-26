#include "mywidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); // 应用程序对象，在QT中应用程序对象有且只有一个
    MyWidget w; // 窗口对象
    w.show(); // 显示窗口

    return a.exec(); // 让应用程序对象进入消息循环，可以理解为一个死循环
}
