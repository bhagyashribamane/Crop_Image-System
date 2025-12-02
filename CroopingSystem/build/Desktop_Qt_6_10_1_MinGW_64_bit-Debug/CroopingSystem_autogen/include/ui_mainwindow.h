/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLineEdit *lineInputPath;
    QPushButton *btnSelectInput;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLineEdit *lineOutputPath;
    QPushButton *btnSelectOutput;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineOriginalWidth;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *lineOriginalHeight;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *lineCropWidth;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLineEdit *lineCropHeight;
    QVBoxLayout *verticalLayout;
    QPushButton *btnStartCrop;
    QLabel *lblStatus;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(464, 304);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(label_5);

        lineInputPath = new QLineEdit(centralwidget);
        lineInputPath->setObjectName("lineInputPath");
        lineInputPath->setMinimumSize(QSize(0, 0));
        lineInputPath->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(lineInputPath);

        btnSelectInput = new QPushButton(centralwidget);
        btnSelectInput->setObjectName("btnSelectInput");
        btnSelectInput->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(btnSelectInput);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(label_6);

        lineOutputPath = new QLineEdit(centralwidget);
        lineOutputPath->setObjectName("lineOutputPath");
        lineOutputPath->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_2->addWidget(lineOutputPath);

        btnSelectOutput = new QPushButton(centralwidget);
        btnSelectOutput->setObjectName("btnSelectOutput");
        btnSelectOutput->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_2->addWidget(btnSelectOutput);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(0, 0));
        label->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_3->addWidget(label);

        lineOriginalWidth = new QLineEdit(centralwidget);
        lineOriginalWidth->setObjectName("lineOriginalWidth");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineOriginalWidth->sizePolicy().hasHeightForWidth());
        lineOriginalWidth->setSizePolicy(sizePolicy);
        lineOriginalWidth->setMinimumSize(QSize(0, 0));

        horizontalLayout_3->addWidget(lineOriginalWidth);


        horizontalLayout_7->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_5->addWidget(label_3);

        lineOriginalHeight = new QLineEdit(centralwidget);
        lineOriginalHeight->setObjectName("lineOriginalHeight");
        sizePolicy.setHeightForWidth(lineOriginalHeight->sizePolicy().hasHeightForWidth());
        lineOriginalHeight->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(lineOriginalHeight);


        horizontalLayout_7->addLayout(horizontalLayout_5);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        horizontalLayout_4->addWidget(label_2);

        lineCropWidth = new QLineEdit(centralwidget);
        lineCropWidth->setObjectName("lineCropWidth");
        sizePolicy.setHeightForWidth(lineCropWidth->sizePolicy().hasHeightForWidth());
        lineCropWidth->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(lineCropWidth);


        horizontalLayout_8->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");

        horizontalLayout_6->addWidget(label_4);

        lineCropHeight = new QLineEdit(centralwidget);
        lineCropHeight->setObjectName("lineCropHeight");
        sizePolicy.setHeightForWidth(lineCropHeight->sizePolicy().hasHeightForWidth());
        lineCropHeight->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(lineCropHeight);


        horizontalLayout_8->addLayout(horizontalLayout_6);


        verticalLayout_3->addLayout(horizontalLayout_8);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        btnStartCrop = new QPushButton(centralwidget);
        btnStartCrop->setObjectName("btnStartCrop");
        btnStartCrop->setMinimumSize(QSize(200, 0));
        btnStartCrop->setMaximumSize(QSize(200, 30));
        btnStartCrop->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

        verticalLayout->addWidget(btnStartCrop);

        lblStatus = new QLabel(centralwidget);
        lblStatus->setObjectName("lblStatus");

        verticalLayout->addWidget(lblStatus);


        verticalLayout_3->addLayout(verticalLayout);


        verticalLayout_2->addLayout(verticalLayout_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 464, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Input Folder", nullptr));
        btnSelectInput->setText(QCoreApplication::translate("MainWindow", "Select  Input Folder", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "output folder", nullptr));
        btnSelectOutput->setText(QCoreApplication::translate("MainWindow", "Select  Output Folder", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Original Width", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Original Height", nullptr));
        lineOriginalHeight->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Crop  Width", nullptr));
        lineCropWidth->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "Crop Height", nullptr));
        btnStartCrop->setText(QCoreApplication::translate("MainWindow", "Crop Image", nullptr));
        lblStatus->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
