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

// This function opens a folder dialog, saves the selected input folder path, and updates the UI to show that the folder was chosen.
void MainWindow::on_btnSelectInput_clicked()
{
    inputFolder = QFileDialog::getExistingDirectory(this, "Select Input Folder");
    if(!inputFolder.isEmpty()) {
        ui->lineInputPath->setText(inputFolder);
        ui->lblStatus->setText("Input Folder Selected ✓");
    }
}
//This function lets the user select the output folder and updates the UI to display the chosen path and confirmation message.
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
    // Call backend function
    int count = cropAllImages(inputFolder, outputFolder,
                              originalW, originalH, cropW, cropH, ui->progressBar);

    ui->lblStatus->setText(QString("✔ %1 Images Successfully Cropped & Saved!").arg(count));
    QMessageBox::information(this, "Done", QString("Successfully processed %1 images!").arg(count));
}

int MainWindow::cropAllImages(const QString &inputFolder,const QString &outputFolder,int originalW, int originalH,int cropW, int cropH , QProgressBar *progress)
{
    QDir dir(inputFolder);   // Creates a directory object pointing to the input folder
    // Finds all image files inside the input folder
    QStringList images = dir.entryList(QStringList() << "*.jpg" << "*BMP" << "*.png" << "*.bmp", QDir::Files);

    int count = 0;   //A counter to count how many images are cropped
    for(const QString &fileName : images)
    {
        QImage img(inputFolder + "/" + fileName);  //Loads each image from the input folder
        if(img.isNull())
            continue;

        // img = img.scaled(originalW, originalH, Qt::IgnoreAspectRatio); //This would resize the image before cropping if needed

        // Crop
        // QRect cropArea((originalW - cropW)/2, (originalH - cropH)/2, cropW, cropH);
        // QImage croppedImage = img.copy(cropArea);

        // Creates a cropped image from the original
        QImage croppedImage = img.copy(QRect(800, 240, cropW, cropH));
        // Save cropped image
        croppedImage.save(outputFolder + "/cropped_" + fileName);   //Saves the cropped image to the output folder
        count++;
        // Update progress bar
        if (progress)
            progress->setValue(count);
    }
    return count; // Return number of cropped images

}
