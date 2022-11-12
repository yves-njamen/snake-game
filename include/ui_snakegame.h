/********************************************************************************
** Form generated from reading UI file 'snakegame.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SNAKEGAME_H
#define UI_SNAKEGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_snakegame
{
public:
    QWidget *game_board;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QLCDNumber *lcdNumber;
    QGridLayout *gridLayout;
    QLabel *label_104;
    QLabel *label_105;
    QLabel *label_27;
    QLabel *label_95;
    QLabel *label_13;
    QLabel *label_63;
    QLabel *label_33;
    QLabel *label_62;
    QLabel *label_60;
    QLabel *label_80;
    QLabel *label_12;
    QLabel *label_41;
    QLabel *label_25;
    QLabel *label_75;
    QLabel *label_49;
    QLabel *label_43;
    QLabel *label_51;
    QLabel *label_74;
    QLabel *label_45;
    QLabel *label_11;
    QLabel *label_15;
    QLabel *label_79;
    QLabel *label_55;
    QLabel *label_19;
    QLabel *label_18;
    QLabel *label_8;
    QLabel *label_26;
    QLabel *label_54;
    QLabel *label_9;
    QLabel *label_39;
    QLabel *label_73;
    QLabel *label_76;
    QLabel *label_50;
    QLabel *label_64;
    QLabel *label_29;
    QLabel *label_38;
    QLabel *label_102;
    QLabel *label_32;
    QLabel *label_77;
    QLabel *label_20;
    QLabel *label_65;
    QLabel *label_71;
    QLabel *label_58;
    QLabel *label_72;
    QLabel *label_56;
    QLabel *label_68;
    QLabel *label_70;
    QLabel *label_107;
    QLabel *label_31;
    QLabel *label_30;
    QLabel *label_37;
    QLabel *label_106;
    QLabel *label_22;
    QLabel *label_14;
    QLabel *label_34;
    QLabel *label_57;
    QLabel *label_103;
    QLabel *label_10;
    QLabel *label_21;
    QLabel *label_53;
    QLabel *label_66;
    QLabel *label_98;
    QLabel *label_42;
    QLabel *label_40;
    QLabel *label_78;
    QLabel *label_47;
    QLabel *label_67;
    QLabel *label_69;
    QLabel *label_101;
    QLabel *label_61;
    QLabel *label_52;
    QLabel *label_99;
    QLabel *label_48;
    QLabel *label_24;
    QLabel *label_59;
    QLabel *label_44;
    QLabel *label_23;
    QLabel *label_46;
    QLabel *label_16;
    QLabel *label_89;
    QLabel *label_97;
    QLabel *label_35;
    QLabel *label_17;
    QLabel *label_94;
    QLabel *label_36;
    QLabel *label_28;
    QLabel *label_87;
    QLabel *label_83;
    QLabel *label_81;
    QLabel *label_90;
    QLabel *label_100;
    QLabel *label_88;
    QLabel *label_92;
    QLabel *label_93;
    QLabel *label_91;
    QLabel *label_82;
    QLabel *label_86;
    QLabel *label_85;
    QLabel *label_96;
    QLabel *label_84;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *snakegame)
    {
        if (snakegame->objectName().isEmpty())
            snakegame->setObjectName(QString::fromUtf8("snakegame"));
        snakegame->resize(540, 248);
        snakegame->setStyleSheet(QString::fromUtf8(""));
        snakegame->setAnimated(true);
        snakegame->setDocumentMode(false);
        snakegame->setUnifiedTitleAndToolBarOnMac(false);
        game_board = new QWidget(snakegame);
        game_board->setObjectName(QString::fromUtf8("game_board"));
        game_board->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(game_board->sizePolicy().hasHeightForWidth());
        game_board->setSizePolicy(sizePolicy);
        game_board->setMouseTracking(true);
        game_board->setAutoFillBackground(true);
        game_board->setStyleSheet(QString::fromUtf8(""));
        gridLayout_3 = new QGridLayout(game_board);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer = new QSpacerItem(520, 15, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 3, -1, -1);
        pushButton_2 = new QPushButton(game_board);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(game_board);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lcdNumber = new QLCDNumber(game_board);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        horizontalLayout->addWidget(lcdNumber);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_104 = new QLabel(game_board);
        label_104->setObjectName(QString::fromUtf8("label_104"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(85, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(127, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(106, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(42, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(57, 0, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush8(QColor(255, 255, 255, 128));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_104->setPalette(palette);
        label_104->setAutoFillBackground(true);

        gridLayout->addWidget(label_104, 0, 8, 1, 1);

        label_105 = new QLabel(game_board);
        label_105->setObjectName(QString::fromUtf8("label_105"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QBrush brush9(QColor(170, 85, 0, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush9);
        QBrush brush10(QColor(255, 128, 0, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush10);
        QBrush brush11(QColor(212, 106, 0, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        QBrush brush12(QColor(85, 43, 0, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush12);
        QBrush brush13(QColor(113, 57, 0, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        QBrush brush14(QColor(212, 170, 127, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush15(QColor(0, 0, 0, 128));
        brush15.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_105->setPalette(palette1);
        label_105->setAutoFillBackground(true);

        gridLayout->addWidget(label_105, 0, 7, 1, 1);

        label_27 = new QLabel(game_board);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_27->setPalette(palette2);
        label_27->setAutoFillBackground(true);

        gridLayout->addWidget(label_27, 3, 2, 1, 1);

        label_95 = new QLabel(game_board);
        label_95->setObjectName(QString::fromUtf8("label_95"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_95->setPalette(palette3);
        label_95->setAutoFillBackground(true);

        gridLayout->addWidget(label_95, 3, 9, 1, 1);

        label_13 = new QLabel(game_board);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_13->setPalette(palette4);
        label_13->setAutoFillBackground(true);

        gridLayout->addWidget(label_13, 1, 3, 1, 1);

        label_63 = new QLabel(game_board);
        label_63->setObjectName(QString::fromUtf8("label_63"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_63->setPalette(palette5);
        label_63->setAutoFillBackground(true);

        gridLayout->addWidget(label_63, 7, 2, 1, 1);

        label_33 = new QLabel(game_board);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_33->setPalette(palette6);
        label_33->setCursor(QCursor(Qt::CrossCursor));
        label_33->setTabletTracking(false);
        label_33->setAutoFillBackground(true);

        gridLayout->addWidget(label_33, 4, 4, 1, 1);

        label_62 = new QLabel(game_board);
        label_62->setObjectName(QString::fromUtf8("label_62"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_62->setPalette(palette7);
        label_62->setAutoFillBackground(true);

        gridLayout->addWidget(label_62, 7, 3, 1, 1);

        label_60 = new QLabel(game_board);
        label_60->setObjectName(QString::fromUtf8("label_60"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_60->setPalette(palette8);
        label_60->setAutoFillBackground(true);

        gridLayout->addWidget(label_60, 7, 4, 1, 1);

        label_80 = new QLabel(game_board);
        label_80->setObjectName(QString::fromUtf8("label_80"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette9.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette9.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette9.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette9.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette9.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette9.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette9.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette9.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette9.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette9.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette9.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette9.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette9.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette9.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette9.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette9.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette9.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette9.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_80->setPalette(palette9);
        label_80->setAutoFillBackground(true);

        gridLayout->addWidget(label_80, 9, 4, 1, 1);

        label_12 = new QLabel(game_board);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette10.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette10.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette10.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush);
        palette10.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette10.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette10.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_12->setPalette(palette10);
        label_12->setAutoFillBackground(true);

        gridLayout->addWidget(label_12, 1, 5, 1, 1);

        label_41 = new QLabel(game_board);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette11.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette11.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette11.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette11.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette11.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette11.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette11.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette11.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette11.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette11.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette11.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette11.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette11.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette11.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette11.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette11.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette11.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette11.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_41->setPalette(palette11);
        label_41->setAutoFillBackground(true);

        gridLayout->addWidget(label_41, 5, 4, 1, 1);

        label_25 = new QLabel(game_board);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setMaximumSize(QSize(16777213, 16777215));
        label_25->setSizeIncrement(QSize(0, 0));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette12.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette12.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette12.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette12.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette12.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette12.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette12.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette12.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette12.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette12.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette12.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette12.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette12.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette12.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette12.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette12.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette12.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette12.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_25->setPalette(palette12);
        label_25->setAutoFillBackground(true);
        label_25->setScaledContents(false);
        label_25->setIndent(0);

        gridLayout->addWidget(label_25, 3, 0, 1, 1);

        label_75 = new QLabel(game_board);
        label_75->setObjectName(QString::fromUtf8("label_75"));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette13.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette13.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette13.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette13.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette13.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette13.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette13.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette13.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette13.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette13.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette13.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette13.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette13.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette13.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette13.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette13.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette13.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette13.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_75->setPalette(palette13);
        label_75->setAutoFillBackground(true);

        gridLayout->addWidget(label_75, 9, 2, 1, 1);

        label_49 = new QLabel(game_board);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette14.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette14.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette14.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette14.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette14.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette14.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette14.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette14.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette14.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette14.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette14.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette14.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette14.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette14.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette14.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette14.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette14.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette14.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_49->setPalette(palette14);
        label_49->setAutoFillBackground(true);

        gridLayout->addWidget(label_49, 6, 3, 1, 1);

        label_43 = new QLabel(game_board);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette15.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette15.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette15.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette15.setBrush(QPalette::Active, QPalette::Text, brush);
        palette15.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette15.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette15.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette15.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette15.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette15.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette15.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette15.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette15.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_43->setPalette(palette15);
        label_43->setAutoFillBackground(true);

        gridLayout->addWidget(label_43, 6, 6, 1, 1);

        label_51 = new QLabel(game_board);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette16.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette16.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette16.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette16.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette16.setBrush(QPalette::Active, QPalette::Text, brush);
        palette16.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette16.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette16.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette16.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette16.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette16.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette16.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette16.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette16.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette16.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette16.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_51->setPalette(palette16);
        label_51->setAutoFillBackground(true);

        gridLayout->addWidget(label_51, 1, 7, 1, 1);

        label_74 = new QLabel(game_board);
        label_74->setObjectName(QString::fromUtf8("label_74"));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette17.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette17.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette17.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette17.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette17.setBrush(QPalette::Active, QPalette::Text, brush);
        palette17.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette17.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette17.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette17.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette17.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette17.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette17.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette17.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette17.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette17.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette17.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_74->setPalette(palette17);
        label_74->setAutoFillBackground(true);

        gridLayout->addWidget(label_74, 9, 7, 1, 1);

        label_45 = new QLabel(game_board);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette18.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette18.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette18.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette18.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette18.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette18.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette18.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette18.setBrush(QPalette::Active, QPalette::Base, brush);
        palette18.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette18.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette18.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette18.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette18.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette18.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette18.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette18.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette18.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette18.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette18.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette18.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette18.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette18.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette18.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette18.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette18.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette18.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette18.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette18.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette18.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette18.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette18.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette18.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette18.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_45->setPalette(palette18);
        label_45->setAutoFillBackground(true);

        gridLayout->addWidget(label_45, 6, 1, 1, 1);

        label_11 = new QLabel(game_board);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette19.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette19.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette19.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette19.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette19.setBrush(QPalette::Active, QPalette::Text, brush);
        palette19.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette19.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette19.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette19.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette19.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette19.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette19.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette19.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette19.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette19.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette19.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette19.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette19.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette19.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette19.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette19.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette19.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette19.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette19.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette19.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette19.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette19.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette19.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette19.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette19.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette19.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette19.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette19.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_11->setPalette(palette19);
        label_11->setAutoFillBackground(true);

        gridLayout->addWidget(label_11, 1, 1, 1, 1);

        label_15 = new QLabel(game_board);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette20.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette20.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette20.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette20.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette20.setBrush(QPalette::Active, QPalette::Text, brush);
        palette20.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette20.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette20.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette20.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette20.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette20.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette20.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette20.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette20.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette20.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette20.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette20.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette20.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette20.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette20.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette20.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette20.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette20.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette20.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette20.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette20.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette20.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette20.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette20.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette20.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette20.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette20.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette20.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette20.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette20.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette20.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette20.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette20.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_15->setPalette(palette20);
        label_15->setAutoFillBackground(true);

        gridLayout->addWidget(label_15, 2, 4, 1, 1);

        label_79 = new QLabel(game_board);
        label_79->setObjectName(QString::fromUtf8("label_79"));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette21.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette21.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette21.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette21.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette21.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette21.setBrush(QPalette::Active, QPalette::Text, brush);
        palette21.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette21.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette21.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette21.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette21.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette21.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette21.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette21.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette21.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette21.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette21.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette21.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette21.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette21.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette21.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette21.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette21.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette21.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette21.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette21.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette21.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette21.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette21.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette21.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette21.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette21.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette21.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette21.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette21.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette21.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette21.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette21.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette21.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_79->setPalette(palette21);
        label_79->setAutoFillBackground(true);

        gridLayout->addWidget(label_79, 9, 5, 1, 1);

        label_55 = new QLabel(game_board);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette22.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette22.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette22.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette22.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette22.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette22.setBrush(QPalette::Active, QPalette::Text, brush);
        palette22.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette22.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette22.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette22.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette22.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette22.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette22.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette22.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette22.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette22.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette22.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette22.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette22.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette22.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette22.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette22.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette22.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette22.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette22.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette22.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette22.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette22.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette22.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette22.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette22.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette22.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette22.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette22.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette22.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette22.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette22.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_55->setPalette(palette22);
        label_55->setAutoFillBackground(true);

        gridLayout->addWidget(label_55, 5, 7, 1, 1);

        label_19 = new QLabel(game_board);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        QPalette palette23;
        palette23.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette23.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette23.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette23.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette23.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette23.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette23.setBrush(QPalette::Active, QPalette::Text, brush);
        palette23.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette23.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette23.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette23.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette23.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette23.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette23.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette23.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette23.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette23.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette23.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette23.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette23.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette23.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette23.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette23.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette23.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette23.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette23.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette23.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette23.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette23.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette23.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette23.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette23.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette23.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette23.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette23.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette23.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette23.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette23.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette23.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette23.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_19->setPalette(palette23);
        label_19->setAutoFillBackground(true);

        gridLayout->addWidget(label_19, 2, 0, 1, 1);

        label_18 = new QLabel(game_board);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        QPalette palette24;
        palette24.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette24.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette24.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette24.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette24.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette24.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette24.setBrush(QPalette::Active, QPalette::Text, brush);
        palette24.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette24.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette24.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette24.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette24.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette24.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette24.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette24.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette24.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette24.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette24.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette24.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette24.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette24.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette24.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette24.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette24.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette24.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette24.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette24.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette24.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette24.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette24.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette24.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette24.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette24.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette24.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette24.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette24.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette24.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette24.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette24.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette24.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette24.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_18->setPalette(palette24);
        label_18->setAutoFillBackground(true);

        gridLayout->addWidget(label_18, 2, 2, 1, 1);

        label_8 = new QLabel(game_board);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QPalette palette25;
        palette25.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette25.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette25.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette25.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette25.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette25.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette25.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette25.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette25.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette25.setBrush(QPalette::Active, QPalette::Base, brush);
        palette25.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette25.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette25.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette25.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette25.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette25.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette25.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette25.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette25.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette25.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette25.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette25.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette25.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette25.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette25.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette25.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette25.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette25.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette25.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette25.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette25.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette25.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette25.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette25.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette25.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette25.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette25.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette25.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette25.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette25.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette25.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette25.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_8->setPalette(palette25);
        label_8->setAutoFillBackground(true);

        gridLayout->addWidget(label_8, 1, 4, 1, 1);

        label_26 = new QLabel(game_board);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        QPalette palette26;
        palette26.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette26.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette26.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette26.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette26.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette26.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette26.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette26.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette26.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette26.setBrush(QPalette::Active, QPalette::Base, brush);
        palette26.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette26.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette26.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette26.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette26.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette26.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette26.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette26.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette26.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette26.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette26.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette26.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette26.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette26.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette26.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette26.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette26.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette26.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette26.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette26.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette26.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette26.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette26.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette26.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette26.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette26.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette26.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette26.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette26.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette26.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette26.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette26.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette26.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_26->setPalette(palette26);
        label_26->setAutoFillBackground(true);

        gridLayout->addWidget(label_26, 3, 4, 1, 1);

        label_54 = new QLabel(game_board);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        QPalette palette27;
        palette27.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette27.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette27.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette27.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette27.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette27.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette27.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette27.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette27.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette27.setBrush(QPalette::Active, QPalette::Base, brush);
        palette27.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette27.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette27.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette27.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette27.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette27.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette27.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette27.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette27.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette27.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette27.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette27.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette27.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette27.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette27.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette27.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette27.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette27.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette27.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette27.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette27.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette27.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette27.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette27.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette27.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette27.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette27.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette27.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette27.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette27.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette27.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette27.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_54->setPalette(palette27);
        label_54->setAutoFillBackground(true);

        gridLayout->addWidget(label_54, 4, 7, 1, 1);

        label_9 = new QLabel(game_board);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QPalette palette28;
        palette28.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette28.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette28.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette28.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette28.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette28.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette28.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette28.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette28.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette28.setBrush(QPalette::Active, QPalette::Base, brush);
        palette28.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette28.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette28.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette28.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette28.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette28.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette28.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette28.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette28.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette28.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette28.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette28.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette28.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette28.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette28.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette28.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette28.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette28.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette28.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette28.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette28.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette28.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette28.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette28.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette28.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette28.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette28.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette28.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette28.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette28.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette28.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette28.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette28.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_9->setPalette(palette28);
        label_9->setAutoFillBackground(true);

        gridLayout->addWidget(label_9, 1, 6, 1, 1);

        label_39 = new QLabel(game_board);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        QPalette palette29;
        palette29.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette29.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette29.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette29.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette29.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette29.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette29.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette29.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette29.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette29.setBrush(QPalette::Active, QPalette::Base, brush);
        palette29.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette29.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette29.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette29.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette29.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette29.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette29.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette29.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette29.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette29.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette29.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette29.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette29.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette29.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette29.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette29.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette29.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette29.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette29.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette29.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette29.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette29.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette29.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette29.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette29.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette29.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette29.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette29.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette29.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette29.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette29.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette29.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette29.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette29.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette29.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette29.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_39->setPalette(palette29);
        label_39->setAutoFillBackground(true);

        gridLayout->addWidget(label_39, 5, 2, 1, 1);

        label_73 = new QLabel(game_board);
        label_73->setObjectName(QString::fromUtf8("label_73"));
        QPalette palette30;
        palette30.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette30.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette30.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette30.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette30.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette30.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette30.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette30.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette30.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette30.setBrush(QPalette::Active, QPalette::Base, brush);
        palette30.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette30.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette30.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette30.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette30.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette30.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette30.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette30.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette30.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette30.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette30.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette30.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette30.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette30.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette30.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette30.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette30.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette30.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette30.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette30.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette30.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette30.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette30.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette30.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette30.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette30.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette30.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette30.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette30.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette30.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette30.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette30.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette30.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette30.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette30.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette30.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette30.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette30.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_73->setPalette(palette30);
        label_73->setAutoFillBackground(true);

        gridLayout->addWidget(label_73, 9, 6, 1, 1);

        label_76 = new QLabel(game_board);
        label_76->setObjectName(QString::fromUtf8("label_76"));
        QPalette palette31;
        palette31.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette31.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette31.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette31.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette31.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette31.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette31.setBrush(QPalette::Active, QPalette::Text, brush);
        palette31.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette31.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette31.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette31.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette31.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette31.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette31.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette31.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette31.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette31.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette31.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette31.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette31.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette31.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette31.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette31.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette31.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette31.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette31.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette31.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette31.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette31.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette31.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette31.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette31.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette31.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette31.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette31.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette31.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette31.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette31.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette31.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette31.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette31.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette31.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette31.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette31.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette31.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette31.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette31.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette31.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_76->setPalette(palette31);
        label_76->setAutoFillBackground(true);

        gridLayout->addWidget(label_76, 9, 3, 1, 1);

        label_50 = new QLabel(game_board);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        QPalette palette32;
        palette32.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette32.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette32.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette32.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette32.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette32.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette32.setBrush(QPalette::Active, QPalette::Text, brush);
        palette32.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette32.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette32.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette32.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette32.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette32.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette32.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette32.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette32.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette32.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette32.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette32.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette32.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette32.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette32.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette32.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette32.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette32.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette32.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette32.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette32.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette32.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette32.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette32.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette32.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette32.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette32.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette32.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette32.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette32.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette32.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette32.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette32.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette32.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette32.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette32.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette32.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette32.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette32.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette32.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette32.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_50->setPalette(palette32);
        label_50->setAutoFillBackground(true);

        gridLayout->addWidget(label_50, 0, 6, 1, 1);

        label_64 = new QLabel(game_board);
        label_64->setObjectName(QString::fromUtf8("label_64"));
        QPalette palette33;
        palette33.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette33.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette33.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette33.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette33.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette33.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette33.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette33.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette33.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette33.setBrush(QPalette::Active, QPalette::Base, brush);
        palette33.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette33.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette33.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette33.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette33.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette33.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette33.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette33.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette33.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette33.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette33.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette33.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette33.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette33.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette33.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette33.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette33.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette33.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette33.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette33.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette33.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette33.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette33.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette33.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette33.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette33.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette33.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette33.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette33.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette33.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette33.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette33.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette33.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette33.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette33.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette33.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette33.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette33.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_64->setPalette(palette33);
        label_64->setAutoFillBackground(true);

        gridLayout->addWidget(label_64, 7, 6, 1, 1);

        label_29 = new QLabel(game_board);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        QPalette palette34;
        palette34.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette34.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette34.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette34.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette34.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette34.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette34.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette34.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette34.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette34.setBrush(QPalette::Active, QPalette::Base, brush);
        palette34.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette34.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette34.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette34.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette34.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette34.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette34.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette34.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette34.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette34.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette34.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette34.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette34.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette34.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette34.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette34.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette34.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette34.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette34.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette34.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette34.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette34.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette34.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette34.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette34.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette34.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette34.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette34.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette34.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette34.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette34.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette34.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette34.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette34.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette34.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette34.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette34.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette34.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_29->setPalette(palette34);
        label_29->setAutoFillBackground(true);

        gridLayout->addWidget(label_29, 0, 5, 1, 1);

        label_38 = new QLabel(game_board);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        QPalette palette35;
        palette35.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette35.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette35.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette35.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette35.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette35.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette35.setBrush(QPalette::Active, QPalette::Text, brush);
        palette35.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette35.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette35.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette35.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette35.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette35.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette35.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette35.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette35.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette35.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette35.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette35.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette35.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette35.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette35.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette35.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette35.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette35.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette35.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette35.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette35.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette35.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette35.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette35.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette35.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette35.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette35.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette35.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette35.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette35.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette35.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette35.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette35.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette35.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette35.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette35.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette35.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette35.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette35.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette35.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette35.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_38->setPalette(palette35);
        label_38->setAutoFillBackground(true);

        gridLayout->addWidget(label_38, 5, 3, 1, 1);

        label_102 = new QLabel(game_board);
        label_102->setObjectName(QString::fromUtf8("label_102"));
        QPalette palette36;
        palette36.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette36.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette36.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette36.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette36.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette36.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette36.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette36.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette36.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette36.setBrush(QPalette::Active, QPalette::Base, brush);
        palette36.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette36.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette36.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette36.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette36.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette36.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette36.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette36.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette36.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette36.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette36.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette36.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette36.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette36.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette36.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette36.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette36.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette36.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette36.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette36.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette36.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette36.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette36.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette36.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette36.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette36.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette36.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette36.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette36.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette36.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette36.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette36.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette36.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette36.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette36.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette36.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette36.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette36.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_102->setPalette(palette36);
        label_102->setAutoFillBackground(true);

        gridLayout->addWidget(label_102, 0, 3, 1, 1);

        label_32 = new QLabel(game_board);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        QPalette palette37;
        palette37.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette37.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette37.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette37.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette37.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette37.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette37.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette37.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette37.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette37.setBrush(QPalette::Active, QPalette::Base, brush);
        palette37.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette37.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette37.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette37.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette37.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette37.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette37.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette37.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette37.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette37.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette37.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette37.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette37.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette37.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette37.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette37.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette37.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette37.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette37.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette37.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette37.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette37.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette37.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette37.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette37.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette37.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette37.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette37.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette37.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette37.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette37.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette37.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette37.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette37.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette37.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette37.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette37.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette37.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_32->setPalette(palette37);
        label_32->setAutoFillBackground(true);

        gridLayout->addWidget(label_32, 4, 3, 1, 1);

        label_77 = new QLabel(game_board);
        label_77->setObjectName(QString::fromUtf8("label_77"));
        QPalette palette38;
        palette38.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette38.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette38.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette38.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette38.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette38.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette38.setBrush(QPalette::Active, QPalette::Text, brush);
        palette38.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette38.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette38.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette38.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette38.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette38.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette38.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette38.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette38.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette38.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette38.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette38.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette38.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette38.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette38.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette38.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette38.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette38.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette38.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette38.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette38.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette38.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette38.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette38.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette38.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette38.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette38.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette38.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette38.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette38.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette38.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette38.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette38.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette38.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette38.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette38.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette38.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette38.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette38.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette38.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette38.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_77->setPalette(palette38);
        label_77->setAutoFillBackground(true);

        gridLayout->addWidget(label_77, 9, 1, 1, 1);

        label_20 = new QLabel(game_board);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        QPalette palette39;
        palette39.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette39.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette39.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette39.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette39.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette39.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette39.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette39.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette39.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette39.setBrush(QPalette::Active, QPalette::Base, brush);
        palette39.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette39.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette39.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette39.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette39.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette39.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette39.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette39.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette39.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette39.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette39.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette39.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette39.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette39.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette39.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette39.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette39.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette39.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette39.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette39.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette39.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette39.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette39.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette39.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette39.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette39.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette39.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette39.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette39.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette39.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette39.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette39.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette39.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette39.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette39.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette39.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette39.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette39.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_20->setPalette(palette39);
        label_20->setAutoFillBackground(true);

        gridLayout->addWidget(label_20, 2, 3, 1, 1);

        label_65 = new QLabel(game_board);
        label_65->setObjectName(QString::fromUtf8("label_65"));
        QPalette palette40;
        palette40.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette40.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette40.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette40.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette40.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette40.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette40.setBrush(QPalette::Active, QPalette::Text, brush);
        palette40.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette40.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette40.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette40.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette40.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette40.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette40.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette40.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette40.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette40.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette40.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette40.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette40.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette40.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette40.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette40.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette40.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette40.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette40.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette40.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette40.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette40.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette40.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette40.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette40.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette40.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette40.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette40.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette40.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette40.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette40.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette40.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette40.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette40.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette40.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette40.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette40.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette40.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette40.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette40.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette40.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_65->setPalette(palette40);
        label_65->setAutoFillBackground(true);

        gridLayout->addWidget(label_65, 8, 0, 1, 1);

        label_71 = new QLabel(game_board);
        label_71->setObjectName(QString::fromUtf8("label_71"));
        QPalette palette41;
        palette41.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette41.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette41.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette41.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette41.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette41.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette41.setBrush(QPalette::Active, QPalette::Text, brush);
        palette41.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette41.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette41.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette41.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette41.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette41.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette41.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette41.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette41.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette41.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette41.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette41.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette41.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette41.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette41.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette41.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette41.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette41.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette41.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette41.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette41.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette41.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette41.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette41.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette41.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette41.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette41.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette41.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette41.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette41.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette41.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette41.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette41.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette41.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette41.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette41.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette41.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette41.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette41.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette41.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette41.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_71->setPalette(palette41);
        label_71->setAutoFillBackground(true);

        gridLayout->addWidget(label_71, 8, 4, 1, 1);

        label_58 = new QLabel(game_board);
        label_58->setObjectName(QString::fromUtf8("label_58"));
        QPalette palette42;
        palette42.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette42.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette42.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette42.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette42.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette42.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette42.setBrush(QPalette::Active, QPalette::Text, brush);
        palette42.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette42.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette42.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette42.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette42.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette42.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette42.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette42.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette42.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette42.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette42.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette42.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette42.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette42.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette42.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette42.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette42.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette42.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette42.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette42.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette42.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette42.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette42.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette42.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette42.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette42.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette42.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette42.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette42.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette42.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette42.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette42.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette42.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette42.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette42.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette42.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette42.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette42.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette42.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette42.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette42.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_58->setPalette(palette42);
        label_58->setAutoFillBackground(true);

        gridLayout->addWidget(label_58, 7, 7, 1, 1);

        label_72 = new QLabel(game_board);
        label_72->setObjectName(QString::fromUtf8("label_72"));
        QPalette palette43;
        palette43.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette43.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette43.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette43.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette43.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette43.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette43.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette43.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette43.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette43.setBrush(QPalette::Active, QPalette::Base, brush);
        palette43.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette43.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette43.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette43.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette43.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette43.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette43.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette43.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette43.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette43.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette43.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette43.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette43.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette43.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette43.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette43.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette43.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette43.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette43.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette43.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette43.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette43.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette43.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette43.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette43.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette43.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette43.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette43.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette43.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette43.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette43.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette43.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette43.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette43.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette43.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette43.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette43.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette43.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_72->setPalette(palette43);
        label_72->setAutoFillBackground(true);

        gridLayout->addWidget(label_72, 8, 7, 1, 1);

        label_56 = new QLabel(game_board);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        QPalette palette44;
        palette44.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette44.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette44.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette44.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette44.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette44.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette44.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette44.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette44.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette44.setBrush(QPalette::Active, QPalette::Base, brush);
        palette44.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette44.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette44.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette44.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette44.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette44.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette44.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette44.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette44.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette44.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette44.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette44.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette44.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette44.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette44.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette44.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette44.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette44.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette44.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette44.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette44.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette44.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette44.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette44.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette44.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette44.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette44.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette44.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette44.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette44.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette44.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette44.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette44.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette44.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette44.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette44.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette44.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette44.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_56->setPalette(palette44);
        label_56->setAutoFillBackground(true);

        gridLayout->addWidget(label_56, 6, 7, 1, 1);

        label_68 = new QLabel(game_board);
        label_68->setObjectName(QString::fromUtf8("label_68"));
        QPalette palette45;
        palette45.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette45.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette45.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette45.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette45.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette45.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette45.setBrush(QPalette::Active, QPalette::Text, brush);
        palette45.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette45.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette45.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette45.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette45.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette45.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette45.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette45.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette45.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette45.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette45.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette45.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette45.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette45.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette45.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette45.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette45.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette45.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette45.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette45.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette45.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette45.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette45.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette45.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette45.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette45.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette45.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette45.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette45.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette45.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette45.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette45.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette45.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette45.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette45.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette45.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette45.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette45.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette45.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette45.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette45.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_68->setPalette(palette45);
        label_68->setAutoFillBackground(true);

        gridLayout->addWidget(label_68, 8, 6, 1, 1);

        label_70 = new QLabel(game_board);
        label_70->setObjectName(QString::fromUtf8("label_70"));
        QPalette palette46;
        palette46.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette46.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette46.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette46.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette46.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette46.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette46.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette46.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette46.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette46.setBrush(QPalette::Active, QPalette::Base, brush);
        palette46.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette46.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette46.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette46.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette46.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette46.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette46.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette46.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette46.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette46.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette46.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette46.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette46.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette46.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette46.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette46.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette46.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette46.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette46.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette46.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette46.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette46.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette46.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette46.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette46.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette46.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette46.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette46.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette46.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette46.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette46.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette46.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette46.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette46.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette46.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette46.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette46.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette46.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_70->setPalette(palette46);
        label_70->setAutoFillBackground(true);

        gridLayout->addWidget(label_70, 8, 5, 1, 1);

        label_107 = new QLabel(game_board);
        label_107->setObjectName(QString::fromUtf8("label_107"));
        QPalette palette47;
        palette47.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette47.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette47.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette47.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette47.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette47.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette47.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette47.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette47.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette47.setBrush(QPalette::Active, QPalette::Base, brush);
        palette47.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette47.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette47.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette47.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette47.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette47.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette47.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette47.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette47.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette47.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette47.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette47.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette47.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette47.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette47.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette47.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette47.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette47.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette47.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette47.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette47.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette47.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette47.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette47.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette47.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette47.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette47.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette47.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette47.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette47.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette47.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette47.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette47.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette47.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette47.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette47.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette47.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette47.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_107->setPalette(palette47);
        label_107->setAutoFillBackground(true);
        label_107->setLineWidth(0);

        gridLayout->addWidget(label_107, 0, 1, 1, 1);

        label_31 = new QLabel(game_board);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        QPalette palette48;
        palette48.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette48.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette48.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette48.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette48.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette48.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette48.setBrush(QPalette::Active, QPalette::Text, brush);
        palette48.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette48.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette48.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette48.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette48.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette48.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette48.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette48.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette48.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette48.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette48.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette48.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette48.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette48.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette48.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette48.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette48.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette48.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette48.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette48.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette48.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette48.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette48.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette48.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette48.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette48.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette48.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette48.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette48.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette48.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette48.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette48.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette48.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette48.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette48.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette48.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette48.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette48.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette48.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette48.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette48.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_31->setPalette(palette48);
        label_31->setAutoFillBackground(true);

        gridLayout->addWidget(label_31, 4, 6, 1, 1);

        label_30 = new QLabel(game_board);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        QPalette palette49;
        palette49.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette49.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette49.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette49.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette49.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette49.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette49.setBrush(QPalette::Active, QPalette::Text, brush);
        palette49.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette49.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette49.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette49.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette49.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette49.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette49.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette49.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette49.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette49.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette49.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette49.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette49.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette49.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette49.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette49.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette49.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette49.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette49.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette49.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette49.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette49.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette49.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette49.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette49.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette49.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette49.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette49.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette49.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette49.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette49.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette49.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette49.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette49.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette49.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette49.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette49.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette49.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette49.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette49.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette49.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_30->setPalette(palette49);
        label_30->setAutoFillBackground(true);

        gridLayout->addWidget(label_30, 4, 0, 1, 1);

        label_37 = new QLabel(game_board);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        QPalette palette50;
        palette50.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette50.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette50.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette50.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette50.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette50.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette50.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette50.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette50.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette50.setBrush(QPalette::Active, QPalette::Base, brush);
        palette50.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette50.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette50.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette50.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette50.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette50.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette50.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette50.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette50.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette50.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette50.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette50.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette50.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette50.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette50.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette50.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette50.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette50.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette50.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette50.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette50.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette50.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette50.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette50.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette50.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette50.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette50.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette50.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette50.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette50.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette50.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette50.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette50.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette50.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette50.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette50.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette50.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette50.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_37->setPalette(palette50);
        label_37->setAutoFillBackground(true);

        gridLayout->addWidget(label_37, 5, 0, 1, 1);

        label_106 = new QLabel(game_board);
        label_106->setObjectName(QString::fromUtf8("label_106"));
        QPalette palette51;
        palette51.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette51.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette51.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette51.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette51.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette51.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette51.setBrush(QPalette::Active, QPalette::Text, brush);
        palette51.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette51.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette51.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette51.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette51.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette51.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette51.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette51.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette51.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette51.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette51.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette51.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette51.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette51.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette51.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette51.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette51.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette51.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette51.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette51.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette51.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette51.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette51.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette51.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette51.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette51.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette51.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette51.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette51.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette51.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette51.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette51.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette51.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette51.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette51.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette51.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette51.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette51.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette51.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette51.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette51.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_106->setPalette(palette51);
        label_106->setAutoFillBackground(true);

        gridLayout->addWidget(label_106, 0, 0, 1, 1);

        label_22 = new QLabel(game_board);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        QPalette palette52;
        palette52.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette52.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette52.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette52.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette52.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette52.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette52.setBrush(QPalette::Active, QPalette::Text, brush);
        palette52.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette52.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette52.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette52.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette52.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette52.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette52.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette52.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette52.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette52.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette52.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette52.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette52.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette52.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette52.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette52.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette52.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette52.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette52.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette52.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette52.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette52.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette52.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette52.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette52.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette52.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette52.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette52.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette52.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette52.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette52.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette52.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette52.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette52.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette52.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette52.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette52.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette52.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette52.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette52.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette52.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_22->setPalette(palette52);
        label_22->setAutoFillBackground(true);

        gridLayout->addWidget(label_22, 3, 1, 1, 1);

        label_14 = new QLabel(game_board);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        QPalette palette53;
        palette53.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette53.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette53.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette53.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette53.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette53.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette53.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette53.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette53.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette53.setBrush(QPalette::Active, QPalette::Base, brush);
        palette53.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette53.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette53.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette53.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette53.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette53.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette53.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette53.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette53.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette53.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette53.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette53.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette53.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette53.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette53.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette53.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette53.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette53.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette53.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette53.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette53.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette53.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette53.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette53.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette53.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette53.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette53.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette53.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette53.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette53.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette53.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette53.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette53.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette53.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette53.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette53.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette53.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette53.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_14->setPalette(palette53);
        label_14->setAutoFillBackground(true);

        gridLayout->addWidget(label_14, 1, 2, 1, 1);

        label_34 = new QLabel(game_board);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        QPalette palette54;
        palette54.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette54.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette54.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette54.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette54.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette54.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette54.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette54.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette54.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette54.setBrush(QPalette::Active, QPalette::Base, brush);
        palette54.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette54.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette54.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette54.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette54.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette54.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette54.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette54.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette54.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette54.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette54.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette54.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette54.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette54.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette54.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette54.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette54.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette54.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette54.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette54.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette54.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette54.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette54.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette54.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette54.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette54.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette54.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette54.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette54.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette54.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette54.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette54.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette54.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette54.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette54.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette54.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette54.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette54.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_34->setPalette(palette54);
        label_34->setAutoFillBackground(true);

        gridLayout->addWidget(label_34, 4, 5, 1, 1);

        label_57 = new QLabel(game_board);
        label_57->setObjectName(QString::fromUtf8("label_57"));
        QPalette palette55;
        palette55.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette55.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette55.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette55.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette55.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette55.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette55.setBrush(QPalette::Active, QPalette::Text, brush);
        palette55.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette55.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette55.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette55.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette55.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette55.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette55.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette55.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette55.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette55.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette55.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette55.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette55.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette55.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette55.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette55.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette55.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette55.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette55.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette55.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette55.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette55.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette55.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette55.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette55.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette55.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette55.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette55.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette55.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette55.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette55.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette55.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette55.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette55.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette55.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette55.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette55.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette55.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette55.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette55.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette55.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_57->setPalette(palette55);
        label_57->setAutoFillBackground(true);

        gridLayout->addWidget(label_57, 7, 1, 1, 1);

        label_103 = new QLabel(game_board);
        label_103->setObjectName(QString::fromUtf8("label_103"));
        QPalette palette56;
        palette56.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette56.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette56.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette56.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette56.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette56.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette56.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette56.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette56.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette56.setBrush(QPalette::Active, QPalette::Base, brush);
        palette56.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette56.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette56.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette56.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette56.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette56.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette56.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette56.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette56.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette56.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette56.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette56.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette56.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette56.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette56.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette56.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette56.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette56.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette56.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette56.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette56.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette56.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette56.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette56.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette56.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette56.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette56.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette56.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette56.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette56.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette56.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette56.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette56.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette56.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette56.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette56.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette56.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette56.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_103->setPalette(palette56);
        label_103->setAutoFillBackground(true);

        gridLayout->addWidget(label_103, 0, 9, 1, 1);

        label_10 = new QLabel(game_board);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setEnabled(true);
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setMinimumSize(QSize(4, 4));
        QPalette palette57;
        palette57.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette57.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette57.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette57.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette57.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette57.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette57.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette57.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette57.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette57.setBrush(QPalette::Active, QPalette::Base, brush);
        palette57.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette57.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette57.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette57.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette57.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette57.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette57.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette57.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette57.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette57.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette57.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette57.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette57.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette57.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette57.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette57.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette57.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette57.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette57.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette57.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette57.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette57.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette57.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette57.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette57.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette57.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette57.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette57.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette57.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette57.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette57.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette57.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette57.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette57.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette57.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette57.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette57.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette57.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_10->setPalette(palette57);
        label_10->setAutoFillBackground(true);

        gridLayout->addWidget(label_10, 1, 0, 1, 1);

        label_21 = new QLabel(game_board);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        QPalette palette58;
        palette58.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette58.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette58.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette58.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette58.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette58.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette58.setBrush(QPalette::Active, QPalette::Text, brush);
        palette58.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette58.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette58.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette58.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette58.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette58.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette58.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette58.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette58.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette58.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette58.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette58.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette58.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette58.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette58.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette58.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette58.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette58.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette58.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette58.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette58.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette58.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette58.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette58.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette58.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette58.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette58.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette58.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette58.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette58.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette58.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette58.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette58.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette58.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette58.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette58.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette58.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette58.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette58.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette58.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette58.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_21->setPalette(palette58);
        label_21->setAutoFillBackground(true);

        gridLayout->addWidget(label_21, 2, 6, 1, 1);

        label_53 = new QLabel(game_board);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        QPalette palette59;
        palette59.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette59.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette59.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette59.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette59.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette59.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette59.setBrush(QPalette::Active, QPalette::Text, brush);
        palette59.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette59.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette59.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette59.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette59.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette59.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette59.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette59.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette59.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette59.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette59.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette59.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette59.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette59.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette59.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette59.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette59.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette59.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette59.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette59.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette59.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette59.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette59.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette59.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette59.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette59.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette59.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette59.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette59.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette59.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette59.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette59.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette59.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette59.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette59.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette59.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette59.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette59.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette59.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette59.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette59.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_53->setPalette(palette59);
        label_53->setAutoFillBackground(true);

        gridLayout->addWidget(label_53, 3, 7, 1, 1);

        label_66 = new QLabel(game_board);
        label_66->setObjectName(QString::fromUtf8("label_66"));
        QPalette palette60;
        palette60.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette60.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette60.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette60.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette60.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette60.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette60.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette60.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette60.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette60.setBrush(QPalette::Active, QPalette::Base, brush);
        palette60.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette60.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette60.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette60.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette60.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette60.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette60.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette60.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette60.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette60.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette60.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette60.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette60.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette60.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette60.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette60.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette60.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette60.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette60.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette60.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette60.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette60.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette60.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette60.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette60.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette60.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette60.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette60.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette60.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette60.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette60.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette60.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette60.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette60.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette60.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette60.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette60.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette60.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_66->setPalette(palette60);
        label_66->setAutoFillBackground(true);

        gridLayout->addWidget(label_66, 8, 1, 1, 1);

        label_98 = new QLabel(game_board);
        label_98->setObjectName(QString::fromUtf8("label_98"));
        QPalette palette61;
        palette61.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette61.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette61.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette61.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette61.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette61.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette61.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette61.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette61.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette61.setBrush(QPalette::Active, QPalette::Base, brush);
        palette61.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette61.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette61.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette61.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette61.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette61.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette61.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette61.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette61.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette61.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette61.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette61.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette61.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette61.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette61.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette61.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette61.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette61.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette61.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette61.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette61.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette61.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette61.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette61.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette61.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette61.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette61.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette61.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette61.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette61.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette61.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette61.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette61.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette61.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette61.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette61.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette61.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette61.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_98->setPalette(palette61);
        label_98->setAutoFillBackground(true);

        gridLayout->addWidget(label_98, 2, 9, 1, 1);

        label_42 = new QLabel(game_board);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        QPalette palette62;
        palette62.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette62.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette62.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette62.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette62.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette62.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette62.setBrush(QPalette::Active, QPalette::Text, brush);
        palette62.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette62.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette62.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette62.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette62.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette62.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette62.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette62.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette62.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette62.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette62.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette62.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette62.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette62.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette62.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette62.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette62.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette62.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette62.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette62.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette62.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette62.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette62.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette62.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette62.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette62.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette62.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette62.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette62.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette62.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette62.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette62.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette62.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette62.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette62.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette62.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette62.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette62.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette62.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette62.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette62.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_42->setPalette(palette62);
        label_42->setAutoFillBackground(true);

        gridLayout->addWidget(label_42, 5, 5, 1, 1);

        label_40 = new QLabel(game_board);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        QPalette palette63;
        palette63.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette63.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette63.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette63.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette63.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette63.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette63.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette63.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette63.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette63.setBrush(QPalette::Active, QPalette::Base, brush);
        palette63.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette63.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette63.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette63.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette63.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette63.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette63.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette63.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette63.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette63.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette63.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette63.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette63.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette63.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette63.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette63.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette63.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette63.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette63.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette63.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette63.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette63.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette63.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette63.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette63.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette63.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette63.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette63.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette63.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette63.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette63.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette63.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette63.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette63.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette63.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette63.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette63.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette63.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_40->setPalette(palette63);
        label_40->setAutoFillBackground(true);

        gridLayout->addWidget(label_40, 5, 6, 1, 1);

        label_78 = new QLabel(game_board);
        label_78->setObjectName(QString::fromUtf8("label_78"));
        QPalette palette64;
        palette64.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette64.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette64.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette64.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette64.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette64.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette64.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette64.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette64.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette64.setBrush(QPalette::Active, QPalette::Base, brush);
        palette64.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette64.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette64.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette64.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette64.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette64.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette64.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette64.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette64.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette64.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette64.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette64.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette64.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette64.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette64.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette64.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette64.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette64.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette64.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette64.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette64.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette64.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette64.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette64.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette64.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette64.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette64.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette64.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette64.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette64.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette64.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette64.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette64.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette64.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette64.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette64.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette64.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette64.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_78->setPalette(palette64);
        label_78->setAutoFillBackground(true);

        gridLayout->addWidget(label_78, 9, 0, 1, 1);

        label_47 = new QLabel(game_board);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        QPalette palette65;
        palette65.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette65.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette65.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette65.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette65.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette65.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette65.setBrush(QPalette::Active, QPalette::Text, brush);
        palette65.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette65.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette65.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette65.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette65.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette65.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette65.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette65.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette65.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette65.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette65.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette65.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette65.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette65.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette65.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette65.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette65.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette65.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette65.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette65.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette65.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette65.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette65.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette65.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette65.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette65.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette65.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette65.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette65.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette65.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette65.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette65.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette65.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette65.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette65.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette65.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette65.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette65.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette65.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette65.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette65.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_47->setPalette(palette65);
        label_47->setAutoFillBackground(true);
        label_47->setScaledContents(false);
        label_47->setWordWrap(false);

        gridLayout->addWidget(label_47, 6, 4, 1, 1);

        label_67 = new QLabel(game_board);
        label_67->setObjectName(QString::fromUtf8("label_67"));
        QPalette palette66;
        palette66.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette66.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette66.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette66.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette66.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette66.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette66.setBrush(QPalette::Active, QPalette::Text, brush);
        palette66.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette66.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette66.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette66.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette66.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette66.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette66.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette66.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette66.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette66.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette66.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette66.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette66.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette66.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette66.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette66.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette66.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette66.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette66.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette66.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette66.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette66.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette66.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette66.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette66.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette66.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette66.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette66.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette66.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette66.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette66.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette66.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette66.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette66.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette66.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette66.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette66.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette66.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette66.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette66.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette66.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_67->setPalette(palette66);
        label_67->setAutoFillBackground(true);

        gridLayout->addWidget(label_67, 8, 2, 1, 1);

        label_69 = new QLabel(game_board);
        label_69->setObjectName(QString::fromUtf8("label_69"));
        QPalette palette67;
        palette67.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette67.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette67.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette67.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette67.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette67.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette67.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette67.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette67.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette67.setBrush(QPalette::Active, QPalette::Base, brush);
        palette67.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette67.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette67.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette67.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette67.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette67.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette67.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette67.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette67.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette67.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette67.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette67.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette67.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette67.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette67.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette67.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette67.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette67.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette67.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette67.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette67.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette67.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette67.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette67.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette67.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette67.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette67.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette67.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette67.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette67.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette67.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette67.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette67.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette67.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette67.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette67.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette67.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette67.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_69->setPalette(palette67);
        label_69->setAutoFillBackground(true);

        gridLayout->addWidget(label_69, 8, 3, 1, 1);

        label_101 = new QLabel(game_board);
        label_101->setObjectName(QString::fromUtf8("label_101"));
        QPalette palette68;
        palette68.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette68.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette68.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette68.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette68.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette68.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette68.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette68.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette68.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette68.setBrush(QPalette::Active, QPalette::Base, brush);
        palette68.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette68.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette68.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette68.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette68.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette68.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette68.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette68.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette68.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette68.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette68.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette68.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette68.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette68.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette68.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette68.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette68.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette68.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette68.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette68.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette68.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette68.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette68.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette68.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette68.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette68.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette68.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette68.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette68.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette68.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette68.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette68.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette68.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette68.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette68.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette68.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette68.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette68.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_101->setPalette(palette68);
        label_101->setAutoFillBackground(true);

        gridLayout->addWidget(label_101, 4, 1, 1, 1);

        label_61 = new QLabel(game_board);
        label_61->setObjectName(QString::fromUtf8("label_61"));
        QPalette palette69;
        palette69.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette69.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette69.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette69.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette69.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette69.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette69.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette69.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette69.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette69.setBrush(QPalette::Active, QPalette::Base, brush);
        palette69.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette69.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette69.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette69.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette69.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette69.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette69.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette69.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette69.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette69.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette69.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette69.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette69.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette69.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette69.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette69.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette69.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette69.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette69.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette69.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette69.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette69.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette69.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette69.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette69.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette69.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette69.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette69.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette69.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette69.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette69.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette69.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette69.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette69.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette69.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette69.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette69.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette69.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_61->setPalette(palette69);
        label_61->setAutoFillBackground(true);

        gridLayout->addWidget(label_61, 7, 0, 1, 1);

        label_52 = new QLabel(game_board);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        QPalette palette70;
        palette70.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette70.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette70.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette70.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette70.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette70.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette70.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette70.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette70.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette70.setBrush(QPalette::Active, QPalette::Base, brush);
        palette70.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette70.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette70.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette70.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette70.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette70.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette70.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette70.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette70.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette70.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette70.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette70.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette70.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette70.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette70.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette70.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette70.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette70.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette70.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette70.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette70.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette70.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette70.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette70.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette70.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette70.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette70.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette70.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette70.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette70.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette70.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette70.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette70.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette70.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette70.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette70.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette70.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette70.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_52->setPalette(palette70);
        label_52->setAutoFillBackground(true);

        gridLayout->addWidget(label_52, 2, 7, 1, 1);

        label_99 = new QLabel(game_board);
        label_99->setObjectName(QString::fromUtf8("label_99"));
        label_99->setEnabled(true);
        QPalette palette71;
        palette71.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette71.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette71.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette71.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette71.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette71.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette71.setBrush(QPalette::Active, QPalette::Text, brush);
        palette71.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette71.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette71.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette71.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette71.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette71.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette71.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette71.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette71.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette71.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette71.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette71.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette71.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette71.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette71.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette71.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette71.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette71.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette71.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette71.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette71.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette71.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette71.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette71.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette71.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette71.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette71.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette71.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette71.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette71.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette71.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette71.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette71.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette71.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette71.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette71.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette71.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette71.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette71.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette71.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette71.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_99->setPalette(palette71);
        label_99->setAutoFillBackground(true);

        gridLayout->addWidget(label_99, 0, 2, 1, 1);

        label_48 = new QLabel(game_board);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        QPalette palette72;
        palette72.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette72.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette72.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette72.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette72.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette72.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette72.setBrush(QPalette::Active, QPalette::Text, brush);
        palette72.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette72.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette72.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette72.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette72.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette72.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette72.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette72.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette72.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette72.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette72.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette72.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette72.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette72.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette72.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette72.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette72.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette72.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette72.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette72.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette72.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette72.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette72.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette72.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette72.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette72.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette72.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette72.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette72.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette72.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette72.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette72.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette72.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette72.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette72.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette72.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette72.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette72.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette72.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette72.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette72.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_48->setPalette(palette72);
        label_48->setAutoFillBackground(true);

        gridLayout->addWidget(label_48, 6, 0, 1, 1);

        label_24 = new QLabel(game_board);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        QPalette palette73;
        palette73.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette73.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette73.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette73.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette73.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette73.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette73.setBrush(QPalette::Active, QPalette::Text, brush);
        palette73.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette73.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette73.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette73.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette73.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette73.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette73.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette73.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette73.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette73.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette73.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette73.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette73.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette73.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette73.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette73.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette73.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette73.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette73.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette73.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette73.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette73.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette73.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette73.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette73.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette73.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette73.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette73.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette73.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette73.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette73.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette73.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette73.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette73.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette73.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette73.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette73.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette73.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette73.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette73.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette73.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_24->setPalette(palette73);
        label_24->setAutoFillBackground(true);

        gridLayout->addWidget(label_24, 3, 3, 1, 1);

        label_59 = new QLabel(game_board);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        QPalette palette74;
        palette74.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette74.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette74.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette74.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette74.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette74.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette74.setBrush(QPalette::Active, QPalette::Text, brush);
        palette74.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette74.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette74.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette74.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette74.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette74.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette74.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette74.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette74.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette74.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette74.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette74.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette74.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette74.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette74.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette74.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette74.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette74.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette74.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette74.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette74.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette74.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette74.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette74.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette74.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette74.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette74.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette74.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette74.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette74.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette74.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette74.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette74.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette74.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette74.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette74.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette74.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette74.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette74.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette74.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette74.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_59->setPalette(palette74);
        label_59->setAutoFillBackground(true);

        gridLayout->addWidget(label_59, 7, 5, 1, 1);

        label_44 = new QLabel(game_board);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        QPalette palette75;
        palette75.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette75.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette75.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette75.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette75.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette75.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette75.setBrush(QPalette::Active, QPalette::Text, brush);
        palette75.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette75.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette75.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette75.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette75.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette75.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette75.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette75.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette75.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette75.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette75.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette75.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette75.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette75.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette75.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette75.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette75.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette75.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette75.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette75.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette75.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette75.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette75.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette75.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette75.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette75.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette75.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette75.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette75.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette75.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette75.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette75.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette75.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette75.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette75.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette75.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette75.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette75.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette75.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette75.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette75.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_44->setPalette(palette75);
        label_44->setAutoFillBackground(true);
        label_44->setIndent(-9);

        gridLayout->addWidget(label_44, 6, 2, 1, 1);

        label_23 = new QLabel(game_board);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        QPalette palette76;
        palette76.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette76.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette76.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette76.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette76.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette76.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette76.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette76.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette76.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette76.setBrush(QPalette::Active, QPalette::Base, brush);
        palette76.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette76.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette76.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette76.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette76.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette76.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette76.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette76.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette76.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette76.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette76.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette76.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette76.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette76.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette76.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette76.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette76.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette76.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette76.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette76.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette76.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette76.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette76.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette76.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette76.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette76.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette76.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette76.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette76.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette76.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette76.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette76.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette76.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette76.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette76.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette76.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette76.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette76.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_23->setPalette(palette76);
        label_23->setAutoFillBackground(true);

        gridLayout->addWidget(label_23, 3, 6, 1, 1);

        label_46 = new QLabel(game_board);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_46->sizePolicy().hasHeightForWidth());
        label_46->setSizePolicy(sizePolicy1);
        label_46->setMinimumSize(QSize(47, 0));
        QPalette palette77;
        palette77.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette77.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette77.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette77.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette77.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette77.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette77.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette77.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette77.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette77.setBrush(QPalette::Active, QPalette::Base, brush);
        palette77.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette77.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette77.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette77.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette77.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette77.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette77.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette77.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette77.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette77.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette77.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette77.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette77.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette77.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette77.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette77.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette77.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette77.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette77.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette77.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette77.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette77.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette77.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette77.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette77.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette77.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette77.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette77.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette77.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette77.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette77.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette77.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette77.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette77.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette77.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette77.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette77.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette77.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_46->setPalette(palette77);
        label_46->setAutoFillBackground(true);
        label_46->setText(QString::fromUtf8(""));
        label_46->setTextFormat(Qt::PlainText);
        label_46->setScaledContents(false);
        label_46->setWordWrap(false);
        label_46->setIndent(-1);

        gridLayout->addWidget(label_46, 6, 5, 1, 1);

        label_16 = new QLabel(game_board);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        QPalette palette78;
        palette78.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette78.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette78.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette78.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette78.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette78.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette78.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette78.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette78.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette78.setBrush(QPalette::Active, QPalette::Base, brush);
        palette78.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette78.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette78.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette78.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette78.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette78.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette78.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette78.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette78.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette78.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette78.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette78.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette78.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette78.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette78.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette78.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette78.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette78.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette78.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette78.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette78.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette78.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette78.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette78.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette78.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette78.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette78.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette78.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette78.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette78.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette78.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette78.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette78.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette78.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette78.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette78.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette78.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette78.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_16->setPalette(palette78);
        label_16->setAutoFillBackground(true);

        gridLayout->addWidget(label_16, 2, 1, 1, 1);

        label_89 = new QLabel(game_board);
        label_89->setObjectName(QString::fromUtf8("label_89"));
        QPalette palette79;
        palette79.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette79.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette79.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette79.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette79.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette79.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette79.setBrush(QPalette::Active, QPalette::Text, brush);
        palette79.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette79.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette79.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette79.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette79.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette79.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette79.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette79.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette79.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette79.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette79.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette79.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette79.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette79.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette79.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette79.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette79.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette79.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette79.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette79.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette79.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette79.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette79.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette79.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette79.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette79.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette79.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette79.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette79.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette79.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette79.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette79.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette79.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette79.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette79.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette79.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette79.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette79.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette79.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette79.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette79.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_89->setPalette(palette79);
        label_89->setAutoFillBackground(true);

        gridLayout->addWidget(label_89, 0, 4, 1, 1);

        label_97 = new QLabel(game_board);
        label_97->setObjectName(QString::fromUtf8("label_97"));
        QPalette palette80;
        palette80.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette80.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette80.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette80.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette80.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette80.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette80.setBrush(QPalette::Active, QPalette::Text, brush);
        palette80.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette80.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette80.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette80.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette80.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette80.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette80.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette80.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette80.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette80.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette80.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette80.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette80.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette80.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette80.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette80.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette80.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette80.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette80.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette80.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette80.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette80.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette80.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette80.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette80.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette80.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette80.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette80.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette80.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette80.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette80.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette80.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette80.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette80.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette80.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette80.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette80.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette80.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette80.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette80.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette80.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_97->setPalette(palette80);
        label_97->setAutoFillBackground(true);
        label_97->setFrameShadow(QFrame::Plain);
        label_97->setLineWidth(0);
        label_97->setMidLineWidth(0);
        label_97->setScaledContents(true);

        gridLayout->addWidget(label_97, 1, 9, 1, 1);

        label_35 = new QLabel(game_board);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        QPalette palette81;
        palette81.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette81.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette81.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette81.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette81.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette81.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette81.setBrush(QPalette::Active, QPalette::Text, brush);
        palette81.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette81.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette81.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette81.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette81.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette81.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette81.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette81.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette81.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette81.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette81.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette81.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette81.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette81.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette81.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette81.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette81.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette81.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette81.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette81.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette81.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette81.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette81.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette81.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette81.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette81.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette81.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette81.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette81.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette81.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette81.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette81.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette81.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette81.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette81.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette81.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette81.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette81.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette81.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette81.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette81.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_35->setPalette(palette81);
        label_35->setAutoFillBackground(true);

        gridLayout->addWidget(label_35, 4, 2, 1, 1);

        label_17 = new QLabel(game_board);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        QPalette palette82;
        palette82.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette82.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette82.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette82.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette82.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette82.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette82.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette82.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette82.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette82.setBrush(QPalette::Active, QPalette::Base, brush);
        palette82.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette82.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette82.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette82.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette82.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette82.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette82.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette82.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette82.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette82.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette82.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette82.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette82.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette82.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette82.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette82.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette82.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette82.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette82.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette82.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette82.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette82.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette82.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette82.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette82.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette82.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette82.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette82.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette82.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette82.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette82.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette82.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette82.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette82.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette82.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette82.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette82.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette82.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_17->setPalette(palette82);
        label_17->setAutoFillBackground(true);

        gridLayout->addWidget(label_17, 2, 5, 1, 1);

        label_94 = new QLabel(game_board);
        label_94->setObjectName(QString::fromUtf8("label_94"));
        QPalette palette83;
        palette83.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette83.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette83.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette83.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette83.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette83.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette83.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette83.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette83.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette83.setBrush(QPalette::Active, QPalette::Base, brush);
        palette83.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette83.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette83.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette83.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette83.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette83.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette83.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette83.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette83.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette83.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette83.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette83.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette83.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette83.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette83.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette83.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette83.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette83.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette83.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette83.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette83.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette83.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette83.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette83.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette83.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette83.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette83.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette83.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette83.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette83.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette83.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette83.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette83.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette83.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette83.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette83.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette83.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette83.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_94->setPalette(palette83);
        label_94->setAutoFillBackground(true);

        gridLayout->addWidget(label_94, 4, 9, 1, 1);

        label_36 = new QLabel(game_board);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        QPalette palette84;
        palette84.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette84.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette84.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette84.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette84.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette84.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette84.setBrush(QPalette::Active, QPalette::Text, brush);
        palette84.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette84.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette84.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette84.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette84.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette84.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette84.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette84.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette84.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette84.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette84.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette84.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette84.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette84.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette84.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette84.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette84.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette84.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette84.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette84.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette84.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette84.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette84.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette84.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette84.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette84.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette84.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette84.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette84.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette84.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette84.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette84.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette84.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette84.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette84.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette84.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette84.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette84.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette84.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette84.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette84.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_36->setPalette(palette84);
        label_36->setAutoFillBackground(true);

        gridLayout->addWidget(label_36, 5, 1, 1, 1);

        label_28 = new QLabel(game_board);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        QPalette palette85;
        palette85.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette85.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette85.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette85.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette85.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette85.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette85.setBrush(QPalette::Active, QPalette::Text, brush);
        palette85.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette85.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette85.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette85.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette85.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette85.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette85.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette85.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette85.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette85.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette85.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette85.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette85.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette85.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette85.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette85.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette85.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette85.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette85.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette85.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette85.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette85.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette85.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette85.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette85.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette85.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette85.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette85.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette85.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette85.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette85.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette85.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette85.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette85.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette85.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette85.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette85.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette85.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette85.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette85.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette85.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_28->setPalette(palette85);
        label_28->setAutoFillBackground(true);

        gridLayout->addWidget(label_28, 3, 5, 1, 1);

        label_87 = new QLabel(game_board);
        label_87->setObjectName(QString::fromUtf8("label_87"));
        QPalette palette86;
        palette86.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette86.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette86.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette86.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette86.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette86.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette86.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette86.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette86.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette86.setBrush(QPalette::Active, QPalette::Base, brush);
        palette86.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette86.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette86.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette86.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette86.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette86.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette86.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette86.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette86.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette86.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette86.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette86.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette86.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette86.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette86.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette86.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette86.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette86.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette86.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette86.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette86.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette86.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette86.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette86.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette86.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette86.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette86.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette86.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette86.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette86.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette86.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette86.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette86.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette86.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette86.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette86.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette86.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette86.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_87->setPalette(palette86);
        label_87->setAutoFillBackground(true);

        gridLayout->addWidget(label_87, 1, 8, 1, 1);

        label_83 = new QLabel(game_board);
        label_83->setObjectName(QString::fromUtf8("label_83"));
        QPalette palette87;
        palette87.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette87.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette87.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette87.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette87.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette87.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette87.setBrush(QPalette::Active, QPalette::Text, brush);
        palette87.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette87.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette87.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette87.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette87.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette87.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette87.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette87.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette87.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette87.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette87.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette87.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette87.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette87.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette87.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette87.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette87.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette87.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette87.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette87.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette87.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette87.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette87.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette87.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette87.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette87.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette87.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette87.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette87.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette87.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette87.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette87.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette87.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette87.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette87.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette87.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette87.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette87.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette87.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette87.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette87.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_83->setPalette(palette87);
        label_83->setAutoFillBackground(true);

        gridLayout->addWidget(label_83, 8, 8, 1, 1);

        label_81 = new QLabel(game_board);
        label_81->setObjectName(QString::fromUtf8("label_81"));
        label_81->setEnabled(true);
        QPalette palette88;
        palette88.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette88.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette88.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette88.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette88.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette88.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette88.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette88.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette88.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette88.setBrush(QPalette::Active, QPalette::Base, brush);
        palette88.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette88.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette88.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette88.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette88.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette88.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette88.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette88.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette88.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette88.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette88.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette88.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette88.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette88.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette88.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette88.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette88.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette88.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette88.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette88.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette88.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette88.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette88.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette88.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette88.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette88.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette88.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette88.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette88.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette88.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette88.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette88.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette88.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette88.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette88.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette88.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette88.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette88.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_81->setPalette(palette88);
        label_81->setAutoFillBackground(true);

        gridLayout->addWidget(label_81, 9, 8, 1, 1);

        label_90 = new QLabel(game_board);
        label_90->setObjectName(QString::fromUtf8("label_90"));
        QPalette palette89;
        palette89.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette89.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette89.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette89.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette89.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette89.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette89.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette89.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette89.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette89.setBrush(QPalette::Active, QPalette::Base, brush);
        palette89.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette89.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette89.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette89.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette89.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette89.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette89.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette89.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette89.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette89.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette89.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette89.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette89.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette89.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette89.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette89.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette89.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette89.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette89.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette89.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette89.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette89.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette89.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette89.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette89.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette89.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette89.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette89.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette89.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette89.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette89.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette89.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette89.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette89.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette89.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette89.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette89.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette89.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_90->setPalette(palette89);
        label_90->setAutoFillBackground(true);

        gridLayout->addWidget(label_90, 7, 8, 1, 1);

        label_100 = new QLabel(game_board);
        label_100->setObjectName(QString::fromUtf8("label_100"));
        QPalette palette90;
        palette90.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette90.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette90.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette90.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette90.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette90.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette90.setBrush(QPalette::Active, QPalette::Text, brush);
        palette90.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette90.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette90.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette90.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette90.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette90.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette90.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette90.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette90.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette90.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette90.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette90.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette90.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette90.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette90.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette90.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette90.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette90.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette90.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette90.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette90.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette90.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette90.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette90.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette90.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette90.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette90.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette90.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette90.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette90.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette90.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette90.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette90.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette90.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette90.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette90.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette90.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette90.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette90.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette90.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette90.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_100->setPalette(palette90);
        label_100->setAutoFillBackground(true);

        gridLayout->addWidget(label_100, 7, 9, 1, 1);

        label_88 = new QLabel(game_board);
        label_88->setObjectName(QString::fromUtf8("label_88"));
        QPalette palette91;
        palette91.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette91.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette91.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette91.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette91.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette91.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette91.setBrush(QPalette::Active, QPalette::Text, brush);
        palette91.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette91.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette91.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette91.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette91.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette91.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette91.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette91.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette91.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette91.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette91.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette91.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette91.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette91.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette91.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette91.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette91.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette91.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette91.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette91.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette91.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette91.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette91.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette91.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette91.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette91.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette91.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette91.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette91.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette91.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette91.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette91.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette91.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette91.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette91.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette91.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette91.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette91.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette91.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette91.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette91.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_88->setPalette(palette91);
        label_88->setAutoFillBackground(true);

        gridLayout->addWidget(label_88, 2, 8, 1, 1);

        label_92 = new QLabel(game_board);
        label_92->setObjectName(QString::fromUtf8("label_92"));
        QPalette palette92;
        palette92.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette92.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette92.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette92.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette92.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette92.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette92.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette92.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette92.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette92.setBrush(QPalette::Active, QPalette::Base, brush);
        palette92.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette92.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette92.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette92.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette92.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette92.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette92.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette92.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette92.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette92.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette92.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette92.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette92.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette92.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette92.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette92.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette92.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette92.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette92.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette92.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette92.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette92.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette92.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette92.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette92.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette92.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette92.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette92.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette92.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette92.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette92.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette92.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette92.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette92.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette92.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette92.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette92.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette92.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_92->setPalette(palette92);
        label_92->setAutoFillBackground(true);

        gridLayout->addWidget(label_92, 6, 9, 1, 1);

        label_93 = new QLabel(game_board);
        label_93->setObjectName(QString::fromUtf8("label_93"));
        label_93->setMaximumSize(QSize(52, 16777215));
        QPalette palette93;
        palette93.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette93.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette93.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette93.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette93.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette93.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette93.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette93.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette93.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette93.setBrush(QPalette::Active, QPalette::Base, brush);
        palette93.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette93.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette93.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette93.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette93.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette93.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette93.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette93.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette93.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette93.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette93.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette93.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette93.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette93.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette93.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette93.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette93.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette93.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette93.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette93.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette93.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette93.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette93.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette93.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette93.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette93.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette93.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette93.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette93.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette93.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette93.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette93.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette93.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette93.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette93.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette93.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette93.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette93.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_93->setPalette(palette93);
        label_93->setAutoFillBackground(true);

        gridLayout->addWidget(label_93, 8, 9, 1, 1);

        label_91 = new QLabel(game_board);
        label_91->setObjectName(QString::fromUtf8("label_91"));
        QPalette palette94;
        palette94.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette94.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette94.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette94.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette94.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette94.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette94.setBrush(QPalette::Active, QPalette::Text, brush);
        palette94.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette94.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette94.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette94.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette94.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette94.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette94.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette94.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette94.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette94.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette94.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette94.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette94.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette94.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette94.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette94.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette94.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette94.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette94.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette94.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette94.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette94.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette94.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette94.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette94.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette94.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette94.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette94.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette94.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette94.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette94.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette94.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette94.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette94.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette94.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette94.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette94.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette94.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette94.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette94.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette94.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_91->setPalette(palette94);
        label_91->setAutoFillBackground(true);

        gridLayout->addWidget(label_91, 9, 9, 1, 1);

        label_82 = new QLabel(game_board);
        label_82->setObjectName(QString::fromUtf8("label_82"));
        QPalette palette95;
        palette95.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette95.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette95.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette95.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette95.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette95.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette95.setBrush(QPalette::Active, QPalette::Text, brush);
        palette95.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette95.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette95.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette95.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette95.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette95.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette95.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette95.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette95.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette95.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette95.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette95.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette95.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette95.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette95.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette95.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette95.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette95.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette95.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette95.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette95.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette95.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette95.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette95.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette95.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette95.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette95.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette95.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette95.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette95.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette95.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette95.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette95.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette95.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette95.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette95.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette95.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette95.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette95.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette95.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette95.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_82->setPalette(palette95);
        label_82->setAutoFillBackground(true);

        gridLayout->addWidget(label_82, 6, 8, 1, 1);

        label_86 = new QLabel(game_board);
        label_86->setObjectName(QString::fromUtf8("label_86"));
        QPalette palette96;
        palette96.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette96.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette96.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette96.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette96.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette96.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette96.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette96.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette96.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette96.setBrush(QPalette::Active, QPalette::Base, brush);
        palette96.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette96.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette96.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette96.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette96.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette96.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette96.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette96.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette96.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette96.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette96.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette96.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette96.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette96.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette96.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette96.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette96.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette96.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette96.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette96.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette96.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette96.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette96.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette96.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette96.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette96.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette96.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette96.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette96.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette96.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette96.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette96.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette96.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette96.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette96.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette96.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette96.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette96.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_86->setPalette(palette96);
        label_86->setAutoFillBackground(true);

        gridLayout->addWidget(label_86, 5, 8, 1, 1);

        label_85 = new QLabel(game_board);
        label_85->setObjectName(QString::fromUtf8("label_85"));
        QPalette palette97;
        palette97.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette97.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette97.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette97.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette97.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette97.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette97.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette97.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette97.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette97.setBrush(QPalette::Active, QPalette::Base, brush);
        palette97.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette97.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette97.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette97.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette97.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette97.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette97.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette97.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette97.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette97.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette97.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette97.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette97.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette97.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette97.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette97.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette97.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette97.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette97.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette97.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette97.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette97.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette97.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette97.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette97.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette97.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette97.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette97.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette97.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette97.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette97.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette97.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette97.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette97.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette97.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette97.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette97.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette97.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        label_85->setPalette(palette97);
        label_85->setAutoFillBackground(true);

        gridLayout->addWidget(label_85, 3, 8, 1, 1);

        label_96 = new QLabel(game_board);
        label_96->setObjectName(QString::fromUtf8("label_96"));
        QPalette palette98;
        palette98.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette98.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette98.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette98.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette98.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette98.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette98.setBrush(QPalette::Active, QPalette::Text, brush);
        palette98.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette98.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette98.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette98.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette98.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette98.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette98.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette98.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette98.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette98.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette98.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette98.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette98.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette98.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette98.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette98.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette98.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette98.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette98.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette98.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette98.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette98.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette98.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette98.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette98.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette98.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette98.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette98.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette98.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette98.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette98.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette98.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette98.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette98.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette98.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette98.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette98.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette98.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette98.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette98.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette98.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_96->setPalette(palette98);
        label_96->setAutoFillBackground(true);
        label_96->setScaledContents(true);

        gridLayout->addWidget(label_96, 5, 9, 1, 1);

        label_84 = new QLabel(game_board);
        label_84->setObjectName(QString::fromUtf8("label_84"));
        QPalette palette99;
        palette99.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette99.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette99.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette99.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette99.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette99.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette99.setBrush(QPalette::Active, QPalette::Text, brush);
        palette99.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette99.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette99.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette99.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette99.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette99.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette99.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette99.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette99.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette99.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette99.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette99.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette99.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette99.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette99.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette99.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette99.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette99.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette99.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette99.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette99.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette99.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette99.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette99.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette99.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette99.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette99.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette99.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette99.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette99.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette99.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette99.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette99.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette99.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette99.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette99.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette99.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette99.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette99.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette99.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette99.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label_84->setPalette(palette99);
        label_84->setAutoFillBackground(true);

        gridLayout->addWidget(label_84, 4, 8, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        snakegame->setCentralWidget(game_board);
        menubar = new QMenuBar(snakegame);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 540, 21));
        snakegame->setMenuBar(menubar);
        statusbar = new QStatusBar(snakegame);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        snakegame->setStatusBar(statusbar);

        retranslateUi(snakegame);

        QMetaObject::connectSlotsByName(snakegame);
    } // setupUi

    void retranslateUi(QMainWindow *snakegame)
    {
        snakegame->setWindowTitle(QCoreApplication::translate("snakegame", "snakegame", nullptr));
        pushButton_2->setText(QCoreApplication::translate("snakegame", "Play", nullptr));
        pushButton->setText(QCoreApplication::translate("snakegame", "Restart", nullptr));
        label_104->setText(QString());
        label_105->setText(QString());
        label_27->setText(QString());
        label_95->setText(QString());
        label_13->setText(QString());
        label_63->setText(QString());
        label_33->setText(QString());
        label_62->setText(QString());
        label_60->setText(QString());
        label_80->setText(QString());
        label_12->setText(QString());
        label_41->setText(QString());
        label_25->setText(QString());
        label_75->setText(QString());
        label_49->setText(QString());
        label_43->setText(QString());
        label_51->setText(QString());
        label_74->setText(QString());
        label_45->setText(QString());
        label_11->setText(QString());
        label_15->setText(QString());
        label_79->setText(QString());
        label_55->setText(QString());
        label_19->setText(QString());
        label_18->setText(QString());
        label_8->setText(QString());
        label_26->setText(QString());
        label_54->setText(QString());
        label_9->setText(QString());
        label_39->setText(QString());
        label_73->setText(QString());
        label_76->setText(QString());
        label_50->setText(QString());
        label_64->setText(QString());
        label_29->setText(QString());
        label_38->setText(QString());
        label_102->setText(QString());
        label_32->setText(QString());
        label_77->setText(QString());
        label_20->setText(QString());
        label_65->setText(QString());
        label_71->setText(QString());
        label_58->setText(QString());
        label_72->setText(QString());
        label_56->setText(QString());
        label_68->setText(QString());
        label_70->setText(QString());
        label_107->setText(QString());
        label_31->setText(QString());
        label_30->setText(QString());
        label_37->setText(QString());
        label_106->setText(QString());
        label_22->setText(QString());
        label_14->setText(QString());
        label_34->setText(QString());
        label_57->setText(QString());
        label_103->setText(QString());
        label_10->setText(QString());
        label_21->setText(QString());
        label_53->setText(QString());
        label_66->setText(QString());
        label_98->setText(QString());
        label_42->setText(QString());
        label_40->setText(QString());
        label_78->setText(QString());
        label_47->setText(QString());
        label_67->setText(QString());
        label_69->setText(QString());
        label_101->setText(QString());
        label_61->setText(QString());
        label_52->setText(QString());
        label_99->setText(QString());
        label_48->setText(QString());
        label_24->setText(QString());
        label_59->setText(QString());
        label_44->setText(QString());
        label_23->setText(QString());
        label_16->setText(QString());
        label_89->setText(QString());
        label_97->setText(QString());
        label_35->setText(QString());
        label_17->setText(QString());
        label_94->setText(QString());
        label_36->setText(QString());
        label_28->setText(QString());
        label_87->setText(QString());
        label_83->setText(QString());
        label_81->setText(QString());
        label_90->setText(QString());
        label_100->setText(QString());
        label_88->setText(QString());
        label_92->setText(QString());
        label_93->setText(QString());
        label_91->setText(QString());
        label_82->setText(QString());
        label_86->setText(QString());
        label_85->setText(QString());
        label_96->setText(QString());
        label_84->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class snakegame: public Ui_snakegame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SNAKEGAME_H
