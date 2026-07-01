#include <QApplication>
#include <QIcon>
#include "mainwindow.h"
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setWindowIcon(QIcon(":/icon.ico"));

    MainWindow window;
    window.resize(1200, 800);
    window.show();

    return app.exec();
}
