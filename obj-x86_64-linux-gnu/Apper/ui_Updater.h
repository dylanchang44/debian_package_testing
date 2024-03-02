#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'Updater.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATER_H
#define UI_UPDATER_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Updater/DistroUpgrade.h"
#include "Updater/UpdateDetails.h"

QT_BEGIN_NAMESPACE

class Ui_Updater
{
public:
    QVBoxLayout *verticalLayout_2;
    DistroUpgrade *distroUpgrade;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QTreeView *packageView;
    QWidget *page_2;
    QGridLayout *gridLayout_3;
    QFrame *frame;
    QGridLayout *gridLayout_4;
    QFrame *backgroundFrame;
    QGridLayout *gridLayout_5;
    QLabel *iconL;
    QLabel *titleL;
    QLabel *descriptionL;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    UpdateDetails *updateDetails;

    void setupUi(QWidget *Updater)
    {
        if (Updater->objectName().isEmpty())
            Updater->setObjectName(QString::fromUtf8("Updater"));
        Updater->resize(528, 523);
        Updater->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        verticalLayout_2 = new QVBoxLayout(Updater);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        distroUpgrade = new DistroUpgrade(Updater);
        distroUpgrade->setObjectName(QString::fromUtf8("distroUpgrade"));

        verticalLayout_2->addWidget(distroUpgrade);

        stackedWidget = new QStackedWidget(Updater);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        packageView = new QTreeView(page);
        packageView->setObjectName(QString::fromUtf8("packageView"));
        packageView->setMouseTracking(true);
        packageView->setContextMenuPolicy(Qt::CustomContextMenu);
        packageView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        packageView->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        packageView->setProperty("showDropIndicator", QVariant(false));
        packageView->setAlternatingRowColors(true);
        packageView->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        packageView->setRootIsDecorated(false);
        packageView->setItemsExpandable(false);
        packageView->setExpandsOnDoubleClick(false);

        gridLayout_2->addWidget(packageView, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_3 = new QGridLayout(page_2);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        frame = new QFrame(page_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFocusPolicy(Qt::WheelFocus);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);
        gridLayout_4 = new QGridLayout(frame);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        backgroundFrame = new QFrame(frame);
        backgroundFrame->setObjectName(QString::fromUtf8("backgroundFrame"));
        backgroundFrame->setAutoFillBackground(true);
        gridLayout_5 = new QGridLayout(backgroundFrame);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        iconL = new QLabel(backgroundFrame);
        iconL->setObjectName(QString::fromUtf8("iconL"));
        iconL->setText(QString::fromUtf8("Icon"));

        gridLayout_5->addWidget(iconL, 0, 2, 2, 1);

        titleL = new QLabel(backgroundFrame);
        titleL->setObjectName(QString::fromUtf8("titleL"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(titleL->sizePolicy().hasHeightForWidth());
        titleL->setSizePolicy(sizePolicy1);
        titleL->setText(QString::fromUtf8("Title"));
        titleL->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        titleL->setWordWrap(true);

        gridLayout_5->addWidget(titleL, 0, 4, 1, 1);

        descriptionL = new QLabel(backgroundFrame);
        descriptionL->setObjectName(QString::fromUtf8("descriptionL"));
        sizePolicy1.setHeightForWidth(descriptionL->sizePolicy().hasHeightForWidth());
        descriptionL->setSizePolicy(sizePolicy1);
        descriptionL->setText(QString::fromUtf8("Description"));
        descriptionL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        descriptionL->setWordWrap(true);
        descriptionL->setMargin(10);

        gridLayout_5->addWidget(descriptionL, 1, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(140, 210, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 0, 1, 2, 1);

        horizontalSpacer_2 = new QSpacerItem(159, 52, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 0, 5, 2, 1);


        gridLayout_4->addWidget(backgroundFrame, 0, 2, 1, 1);


        gridLayout_3->addWidget(frame, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);

        verticalLayout_2->addWidget(stackedWidget);

        updateDetails = new UpdateDetails(Updater);
        updateDetails->setObjectName(QString::fromUtf8("updateDetails"));
        updateDetails->setMaximumSize(QSize(16777215, 0));

        verticalLayout_2->addWidget(updateDetails);


        retranslateUi(Updater);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Updater);
    } // setupUi

    void retranslateUi(QWidget *Updater)
    {
        (void)Updater;
    } // retranslateUi

};

namespace Ui {
    class Updater: public Ui_Updater {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UPDATER_H

