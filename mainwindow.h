#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QImage>
#include <QDir>
#include <QProgressBar>

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
    // Runs when the user clicks the Input Folder Select button.
    void on_btnSelectInput_clicked();
    // Runs when the user clicks the Output Folder Select button.
    void on_btnSelectOutput_clicked();
    // Runs when the user presses the Start Crop button.
    void on_btnStartCrop_clicked();
    //runs when the user crop the image
    int cropAllImages(const QString &inputFolder,const QString &outputFolder,int originalW, int originalH,int cropW, int cropH ,
                       QProgressBar *progress);

private:
    Ui::MainWindow *ui;
    // This stores the folder path selected by the user
    QString inputFolder;
    // This stores the folder where cropped images will be saved
    QString outputFolder;
};

#endif // MAINWINDOW_H
