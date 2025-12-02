#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnSelectInput_clicked()
{
    inputFolder = QFileDialog::getExistingDirectory(this, "Select Input Folder");
    if(!inputFolder.isEmpty()) {
        ui->lineInputPath->setText(inputFolder);
        ui->lblStatus->setText("Input Folder Selected ✓");
    }
}

void MainWindow::on_btnSelectOutput_clicked()
{
    outputFolder = QFileDialog::getExistingDirectory(this, "Select Output Folder");
    if(!outputFolder.isEmpty()) {
        ui->lineOutputPath->setText(outputFolder);
        ui->lblStatus->setText("Output Folder Selected ✓");
    }
}

void MainWindow::on_btnStartCrop_clicked()
{
    if(inputFolder.isEmpty() || outputFolder.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please select both input and output folders.");
        return;
    }

    // Get user inputs
    int originalW = ui->lineOriginalWidth->text().toInt();
    int originalH = ui->lineOriginalHeight->text().toInt();
    int cropW = ui->lineCropWidth->text().toInt();
    int cropH = ui->lineCropHeight->text().toInt();

    if(originalW <= 0 || originalH <= 0 || cropW <= 0 || cropH <= 0) {
        QMessageBox::warning(this, "Invalid Input", "Please enter valid width and height.");
        return;
    }

    QDir dir(inputFolder);
    QStringList images = dir.entryList(QStringList() << "*.jpg" << "*.png" << "*.jpeg", QDir::Files);

    int count = 0;

    for(const QString &fileName : images) {
        QImage img(inputFolder + "/" + fileName);

        if(img.isNull())
            continue;

        // Resize or scale based on original width/height
        img = img.scaled(originalW, originalH, Qt::IgnoreAspectRatio);

        // Crop
        QRect cropArea((originalW - cropW)/2, (originalH - cropH)/2, cropW, cropH);
        QImage croppedImage = img.copy(cropArea);

        croppedImage.save(outputFolder + "/cropped_" + fileName);
        count++;
    }

    ui->lblStatus->setText(QString("✔ %1 Images Successfully Cropped & Saved!").arg(count));
    QMessageBox::information(this, "Done", QString("Successfully processed %1 images!").arg(count));
}
