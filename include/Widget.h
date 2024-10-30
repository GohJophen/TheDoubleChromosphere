#ifndef WIDGET_H
#define WIDGET_H

#include <QApplication>
#include <QScreen>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QClipboard>

class Widget : public QWidget {
    Q_OBJECT
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private:
    QLabel* front00_Label;
    QLabel* front01_Label;
    QLabel* front02_Label;
    QLabel* front03_Label;
    QLabel* front04_Label;
    QLabel* front05_Label;
    QLabel* line0_Label;
    QLabel* back00_Label;

    QLabel* front10_Label;
    QLabel* front11_Label;
    QLabel* front12_Label;
    QLabel* front13_Label;
    QLabel* front14_Label;
    QLabel* front15_Label;
    QLabel* line1_Label;
    QLabel* back10_Label;

    QLabel* front20_Label;
    QLabel* front21_Label;
    QLabel* front22_Label;
    QLabel* front23_Label;
    QLabel* front24_Label;
    QLabel* front25_Label;
    QLabel* line2_Label;
    QLabel* back20_Label;


    QLabel* front30_Label;
    QLabel* front31_Label;
    QLabel* front32_Label;
    QLabel* front33_Label;
    QLabel* front34_Label;
    QLabel* front35_Label;
    QLabel* line3_Label;
    QLabel* back30_Label;

    QLabel* front40_Label;
    QLabel* front41_Label;
    QLabel* front42_Label;
    QLabel* front43_Label;
    QLabel* front44_Label;
    QLabel* front45_Label;
    QLabel* line4_Label;
    QLabel* back40_Label;

    QPushButton* shuffle_Button;
    QPushButton* copy_Button;

private:
    QGridLayout* gridLayout;
    QHBoxLayout* buttonLayout;
    QVBoxLayout* gridLayoutAndbuttonLayout;
    void showEvent(QShowEvent* event) override;

private slots:
    void Click_shuffle_Button();
    void Click_copy_Button();
};

#endif
