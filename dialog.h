#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

#include <QPushButton>
#include <QTextEdit>

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
private:
    QTextEdit   *displayTextEdit;
    QPushButton *colorPushButton;
    QPushButton *errorPushButton;
    QPushButton *filePushButton;
    QPushButton *fontPushButton;
    QPushButton *inputPushButton;
    QPushButton *pagePushButton;
    QPushButton *progressButton;
    QPushButton *printPushButton;
    QPushButton *fontColorPushButton;

private slots:
    void doPushBtn();
    void DoTextColor();

};
#endif // DIALOG_H
