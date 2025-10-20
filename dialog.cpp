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
}

Dialog::~Dialog() {}
