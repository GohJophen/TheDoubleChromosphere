#include "widget.h"

int main(int argc, char* argv[]) {
    QApplication a(argc, argv);
    QIcon appIcon(":/pngs/R-C.png");
    a.setWindowIcon(appIcon);

    Widget w;
    w.setWindowTitle("双色球");
    w.setWindowFlags(w.windowFlags() & ~Qt::WindowMaximizeButtonHint);//使用最大化按钮变灰色，不可点击
    w.setFixedSize(250, 150);//维持窗口默认大小，不可拉伸
    w.show();

    return a.exec();
}
