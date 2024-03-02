#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'BrowseView.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BROWSEVIEW_H
#define UI_BROWSEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>
#include "PackageDetails.h"

QT_BEGIN_NAMESPACE

class Ui_BrowseView
{
public:
    QGridLayout *gridLayout;
    QFrame *categoryF;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *categoryMvLeft;
    QListView *categoryView;
    QToolButton *categoryMvRight;
    QFrame *installedF;
    QHBoxLayout *horizontalLayout;
    QPushButton *exportInstalledPB;
    QPushButton *importInstalledPB;
    QSpacerItem *horizontalSpacer;
    QTreeView *packageView;
    PackageDetails *packageDetails;

    void setupUi(QWidget *BrowseView)
    {
        if (BrowseView->objectName().isEmpty())
            BrowseView->setObjectName(QString::fromUtf8("BrowseView"));
        BrowseView->resize(442, 328);
        gridLayout = new QGridLayout(BrowseView);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(0);
        categoryF = new QFrame(BrowseView);
        categoryF->setObjectName(QString::fromUtf8("categoryF"));
        categoryF->setFrameShape(QFrame::HLine);
        categoryF->setFrameShadow(QFrame::Plain);
        horizontalLayout_2 = new QHBoxLayout(categoryF);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        categoryMvLeft = new QToolButton(categoryF);
        categoryMvLeft->setObjectName(QString::fromUtf8("categoryMvLeft"));
        categoryMvLeft->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(categoryMvLeft->sizePolicy().hasHeightForWidth());
        categoryMvLeft->setSizePolicy(sizePolicy);
        categoryMvLeft->setMaximumSize(QSize(16, 16777215));
        categoryMvLeft->setAutoRaise(true);
        categoryMvLeft->setArrowType(Qt::LeftArrow);

        horizontalLayout_2->addWidget(categoryMvLeft);

        categoryView = new QListView(categoryF);
        categoryView->setObjectName(QString::fromUtf8("categoryView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(categoryView->sizePolicy().hasHeightForWidth());
        categoryView->setSizePolicy(sizePolicy1);
        categoryView->setMinimumSize(QSize(0, 30));
        categoryView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        categoryView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        categoryView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        categoryView->setAlternatingRowColors(true);
        categoryView->setTextElideMode(Qt::ElideNone);
        categoryView->setFlow(QListView::LeftToRight);
        categoryView->setSpacing(2);

        horizontalLayout_2->addWidget(categoryView);

        categoryMvRight = new QToolButton(categoryF);
        categoryMvRight->setObjectName(QString::fromUtf8("categoryMvRight"));
        categoryMvRight->setEnabled(true);
        sizePolicy.setHeightForWidth(categoryMvRight->sizePolicy().hasHeightForWidth());
        categoryMvRight->setSizePolicy(sizePolicy);
        categoryMvRight->setMaximumSize(QSize(16, 16777215));
        categoryMvRight->setAutoRaise(true);
        categoryMvRight->setArrowType(Qt::RightArrow);

        horizontalLayout_2->addWidget(categoryMvRight);


        gridLayout->addWidget(categoryF, 0, 0, 1, 1);

        installedF = new QFrame(BrowseView);
        installedF->setObjectName(QString::fromUtf8("installedF"));
        horizontalLayout = new QHBoxLayout(installedF);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        exportInstalledPB = new QPushButton(installedF);
        exportInstalledPB->setObjectName(QString::fromUtf8("exportInstalledPB"));
        exportInstalledPB->setEnabled(false);
        exportInstalledPB->setFlat(true);

        horizontalLayout->addWidget(exportInstalledPB);

        importInstalledPB = new QPushButton(installedF);
        importInstalledPB->setObjectName(QString::fromUtf8("importInstalledPB"));
        importInstalledPB->setFlat(true);

        horizontalLayout->addWidget(importInstalledPB);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addWidget(installedF, 1, 0, 1, 1);

        packageView = new QTreeView(BrowseView);
        packageView->setObjectName(QString::fromUtf8("packageView"));
        packageView->setContextMenuPolicy(Qt::CustomContextMenu);
        packageView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        packageView->setAlternatingRowColors(true);
        packageView->setIconSize(QSize(40, 24));
        packageView->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        packageView->setRootIsDecorated(false);
        packageView->setItemsExpandable(false);
        packageView->setExpandsOnDoubleClick(false);

        gridLayout->addWidget(packageView, 2, 0, 1, 1);

        packageDetails = new PackageDetails(BrowseView);
        packageDetails->setObjectName(QString::fromUtf8("packageDetails"));
        packageDetails->setMaximumSize(QSize(16777215, 0));

        gridLayout->addWidget(packageDetails, 3, 0, 1, 1);


        retranslateUi(BrowseView);

        QMetaObject::connectSlotsByName(BrowseView);
    } // setupUi

    void retranslateUi(QWidget *BrowseView)
    {
        exportInstalledPB->setText(tr2i18n("Export Installed Package List...", nullptr));
        importInstalledPB->setText(tr2i18n("Install Packages from List...", nullptr));
        (void)BrowseView;
    } // retranslateUi

};

namespace Ui {
    class BrowseView: public Ui_BrowseView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // BROWSEVIEW_H

