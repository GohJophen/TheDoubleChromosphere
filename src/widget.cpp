#include "widget.h"
#include "shuffleArray.c"

Widget::Widget(QWidget *parent) : QWidget(parent) {
    front00_Label = new QLabel("00");
    front01_Label = new QLabel("00");
    front02_Label = new QLabel("00");
    front03_Label = new QLabel("00");
    front04_Label = new QLabel("00");
    front05_Label = new QLabel("00");
    line0_Label = new QLabel(" |");
    back00_Label = new QLabel("00");

    front10_Label = new QLabel("00");
    front11_Label = new QLabel("00");
    front12_Label = new QLabel("00");
    front13_Label = new QLabel("00");
    front14_Label = new QLabel("00");
    front15_Label = new QLabel("00");
    line1_Label = new QLabel(" |");
    back10_Label = new QLabel("00");


    front20_Label = new QLabel("00");
    front21_Label = new QLabel("00");
    front22_Label = new QLabel("00");
    front23_Label = new QLabel("00");
    front24_Label = new QLabel("00");
    front25_Label = new QLabel("00");
    line2_Label = new QLabel(" |");
    back20_Label = new QLabel("00");


    front30_Label = new QLabel("00");
    front31_Label = new QLabel("00");
    front32_Label = new QLabel("00");
    front33_Label = new QLabel("00");
    front34_Label = new QLabel("00");
    front35_Label = new QLabel("00");
    line3_Label = new QLabel(" |");
    back30_Label = new QLabel("00");


    front40_Label = new QLabel("00");
    front41_Label = new QLabel("00");
    front42_Label = new QLabel("00");
    front43_Label = new QLabel("00");
    front44_Label = new QLabel("00");
    front45_Label = new QLabel("00");
    line4_Label = new QLabel(" |");
    back40_Label = new QLabel("00");



    gridLayout = new QGridLayout;

    gridLayout->addWidget(front00_Label,0,0);
    gridLayout->addWidget(front01_Label,0,1);
    gridLayout->addWidget(front02_Label,0,2);
    gridLayout->addWidget(front03_Label,0,3);
    gridLayout->addWidget(front04_Label,0,4);
    gridLayout->addWidget(front05_Label,0,5);
    gridLayout->addWidget(line0_Label,0,6);
    gridLayout->addWidget(back00_Label,0,7);


    gridLayout->addWidget(front10_Label,1,0);
    gridLayout->addWidget(front11_Label,1,1);
    gridLayout->addWidget(front12_Label,1,2);
    gridLayout->addWidget(front13_Label,1,3);
    gridLayout->addWidget(front14_Label,1,4);
    gridLayout->addWidget(front15_Label,1,5);
    gridLayout->addWidget(line1_Label,1,6);
    gridLayout->addWidget(back10_Label,1,7);


    gridLayout->addWidget(front20_Label,2,0);
    gridLayout->addWidget(front21_Label,2,1);
    gridLayout->addWidget(front22_Label,2,2);
    gridLayout->addWidget(front23_Label,2,3);
    gridLayout->addWidget(front24_Label,2,4);
    gridLayout->addWidget(front25_Label,2,5);
    gridLayout->addWidget(line2_Label,2,6);
    gridLayout->addWidget(back20_Label,2,7);


    gridLayout->addWidget(front30_Label,3,0);
    gridLayout->addWidget(front31_Label,3,1);
    gridLayout->addWidget(front32_Label,3,2);
    gridLayout->addWidget(front33_Label,3,3);
    gridLayout->addWidget(front34_Label,3,4);
    gridLayout->addWidget(front35_Label,3,5);
    gridLayout->addWidget(line3_Label,3,6);
    gridLayout->addWidget(back30_Label,3,7);


    gridLayout->addWidget(front40_Label,4,0);
    gridLayout->addWidget(front41_Label,4,1);
    gridLayout->addWidget(front42_Label,4,2);
    gridLayout->addWidget(front43_Label,4,3);
    gridLayout->addWidget(front44_Label,4,4);
    gridLayout->addWidget(front45_Label,4,5);
    gridLayout->addWidget(line4_Label,4,6);
    gridLayout->addWidget(back40_Label,4,7);


    shuffle_Button = new QPushButton("一键随机");
    copy_Button = new QPushButton("一键复制");

    buttonLayout = new QHBoxLayout;

    buttonLayout->addWidget(shuffle_Button);
    buttonLayout->addWidget(copy_Button);

    gridLayoutAndbuttonLayout = new QVBoxLayout;
    gridLayoutAndbuttonLayout->addLayout(gridLayout);
    gridLayoutAndbuttonLayout->addLayout(buttonLayout);
    setLayout(gridLayoutAndbuttonLayout);

    connect(shuffle_Button, &QPushButton::clicked, this, &Widget::Click_shuffle_Button);
    connect(copy_Button, &QPushButton::clicked, this, &Widget::Click_copy_Button);
}



void Widget::Click_shuffle_Button() {
    int frontArr[33]= {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
        11,12,13,14,15,16,17,18,19,20,
        21,22,23,24,25,26,27,28,29,30,
        31,32,33
    };

    int backArr[16]={
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
        11,12,13,14,15,16
    };
    shuffleArray(frontArr,33);
    shuffleArray(backArr,16);

    front00_Label->setText(QString("%1").arg(frontArr[0], 2, 10, QChar('0')));
    front01_Label->setText(QString("%1").arg(frontArr[1], 2, 10, QChar('0')));
    front02_Label->setText(QString("%1").arg(frontArr[2], 2, 10, QChar('0')));
    front03_Label->setText(QString("%1").arg(frontArr[3], 2, 10, QChar('0')));
    front04_Label->setText(QString("%1").arg(frontArr[4], 2, 10, QChar('0')));
    front05_Label->setText(QString("%1").arg(frontArr[5], 2, 10, QChar('0')));
    back00_Label->setText(QString("%1").arg(backArr[0], 2, 10, QChar('0')));


    shuffleArray(frontArr,33);
    shuffleArray(backArr,16);
    front10_Label->setText(QString("%1").arg(frontArr[5], 2, 10, QChar('0')));
    front11_Label->setText(QString("%1").arg(frontArr[6], 2, 10, QChar('0')));
    front12_Label->setText(QString("%1").arg(frontArr[7], 2, 10, QChar('0')));
    front13_Label->setText(QString("%1").arg(frontArr[8], 2, 10, QChar('0')));
    front14_Label->setText(QString("%1").arg(frontArr[9], 2, 10, QChar('0')));
    front15_Label->setText(QString("%1").arg(frontArr[10], 2, 10, QChar('0')));
    back10_Label->setText(QString("%1").arg(backArr[2], 2, 10, QChar('0')));


    shuffleArray(frontArr,33);
    shuffleArray(backArr,16);
    front20_Label->setText(QString("%1").arg(frontArr[10], 2, 10, QChar('0')));
    front21_Label->setText(QString("%1").arg(frontArr[11], 2, 10, QChar('0')));
    front22_Label->setText(QString("%1").arg(frontArr[12], 2, 10, QChar('0')));
    front23_Label->setText(QString("%1").arg(frontArr[13], 2, 10, QChar('0')));
    front24_Label->setText(QString("%1").arg(frontArr[14], 2, 10, QChar('0')));
    front25_Label->setText(QString("%1").arg(frontArr[15], 2, 10, QChar('0')));
    back20_Label->setText(QString("%1").arg(backArr[4], 2, 10, QChar('0')));


    shuffleArray(frontArr,33);
    shuffleArray(backArr,16);
    front30_Label->setText(QString("%1").arg(frontArr[15], 2, 10, QChar('0')));
    front31_Label->setText(QString("%1").arg(frontArr[16], 2, 10, QChar('0')));
    front32_Label->setText(QString("%1").arg(frontArr[17], 2, 10, QChar('0')));
    front33_Label->setText(QString("%1").arg(frontArr[18], 2, 10, QChar('0')));
    front34_Label->setText(QString("%1").arg(frontArr[19], 2, 10, QChar('0')));
    front35_Label->setText(QString("%1").arg(frontArr[20], 2, 10, QChar('0')));
    back30_Label->setText(QString("%1").arg(backArr[6], 2, 10, QChar('0')));

    shuffleArray(frontArr,33);
    shuffleArray(backArr,16);
    front40_Label->setText(QString("%1").arg(frontArr[20], 2, 10, QChar('0')));
    front41_Label->setText(QString("%1").arg(frontArr[21], 2, 10, QChar('0')));
    front42_Label->setText(QString("%1").arg(frontArr[22], 2, 10, QChar('0')));
    front43_Label->setText(QString("%1").arg(frontArr[23], 2, 10, QChar('0')));
    front44_Label->setText(QString("%1").arg(frontArr[24], 2, 10, QChar('0')));
    front45_Label->setText(QString("%1").arg(frontArr[25], 2, 10, QChar('0')));
    back40_Label->setText(QString("%1").arg(backArr[8], 2, 10, QChar('0')));
}

void Widget::Click_copy_Button() {

    QString gridContent;

    for (int i = 0; i < gridLayout->rowCount(); ++i) {
        for (int j = 0; j < gridLayout->columnCount(); ++j) {
            QLabel *label = qobject_cast<QLabel*>(gridLayout->itemAtPosition(i, j)->widget());
            if (label) {
                gridContent += label->text();
                gridContent += "\t";
            }
        }
        gridContent += "\n";
    }

    QClipboard *clipboard = QApplication::clipboard();
    clipboard->setText(gridContent);
}

Widget::~Widget() {
    delete front00_Label;
    delete front01_Label;
    delete front02_Label;
    delete front03_Label;
    delete front04_Label;
    delete front05_Label;
    delete line0_Label;
    delete back00_Label;

    delete front10_Label;
    delete front11_Label;
    delete front12_Label;
    delete front13_Label;
    delete front14_Label;
    delete front15_Label;
    delete line1_Label;
    delete back10_Label;

    delete front20_Label;
    delete front21_Label;
    delete front22_Label;
    delete front23_Label;
    delete front24_Label;
    delete front25_Label;
    delete line2_Label;
    delete back20_Label;

    delete front30_Label;
    delete front31_Label;
    delete front32_Label;
    delete front33_Label;
    delete front34_Label;
    delete front35_Label;
    delete line3_Label;
    delete back30_Label;

    delete front40_Label;
    delete front41_Label;
    delete front42_Label;
    delete front43_Label;
    delete front44_Label;
    delete front45_Label;
    delete line4_Label;
    delete back40_Label;

    delete shuffle_Button;
    delete copy_Button;
}

void Widget::showEvent(QShowEvent* event) {
    //调用基类 QWidget 的 showEvent 方法;重写事件处理函数（如 showEvent）时，通常需要在自定义实现的开头或结尾调用基类的实现，以确保基类的默认行为能够正常执行
    QWidget::showEvent(event);

    // 获取屏幕的尺寸
    QScreen* screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int screenWidth = screenGeometry.width();
    int screenHeight = screenGeometry.height();

    // 获取窗口的尺寸
    int windowWidth = this->width();
    int windowHeight = this->height();

    // 计算窗口应该显示的位置
    int x = (screenWidth - windowWidth) / 2;
    int y = (screenHeight - windowHeight) / 2;

    // 设置窗口的初始位置
    this->move(x, y);

    //this->activateWindow();
}
