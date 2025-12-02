#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QImage>
#include <QDir>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnSelectInput_clicked();
    void on_btnSelectOutput_clicked();
    void on_btnStartCrop_clicked();

private:
    Ui::MainWindow *ui;
    QString inputFolder;
    QString outputFolder;
};

#endif // MAINWINDOW_H
