#include "dialog.h"
#include <QGridLayout>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    QGridLayout *gridLayout = new QGridLayout;
    displayTextEdit = new QTextEdit(QStringLiteral("通用對話盒"));
    colorPushButton = new QPushButton(QStringLiteral("顏色對話盒"));
    errorPushButton = new QPushButton(QStringLiteral("錯誤訊息盒"));
    filePushButton  = new QPushButton(QStringLiteral("檔案對話盒"));
    fontPushButton  = new QPushButton(QStringLiteral("字體對話盒"));
    inputPushButton = new QPushButton(QStringLiteral("輸入對話盒"));
    pagePushButton  = new QPushButton(QStringLiteral("頁面設定對話盒"));
    progressButton  = new QPushButton(QStringLiteral("進度對話盒"));
    printPushButton = new QPushButton(QStringLiteral("列印對話盒"));

    gridLayout->addWidget(colorPushButton,0,0,1,1);
    gridLayout->addWidget(errorPushButton,0,1,1,1);
    gridLayout->addWidget(filePushButton,0,2,1,1);
    gridLayout->addWidget(fontPushButton,1,0,1,1);
    gridLayout->addWidget(inputPushButton,1,1,1,1);
    gridLayout->addWidget(pagePushButton,1,2,1,1);
    gridLayout->addWidget(progressButton,2,0,1,1);
    gridLayout->addWidget(printPushButton,2,1,1,1);
    gridLayout->addWidget(displayTextEdit,3,0,3,3);

    setLayout(gridLayout);
    setWindowTitle(tr("內建對話盒展示"));
    resize(400,400);

}

Dialog::~Dialog() {}
