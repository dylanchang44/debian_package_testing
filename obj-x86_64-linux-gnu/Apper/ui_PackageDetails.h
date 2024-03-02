#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'PackageDetails.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PACKAGEDETAILS_H
#define UI_PACKAGEDETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>
#include "ClickableLabel.h"

QT_BEGIN_NAMESPACE

class Ui_PackageDetails
{
public:
    QGridLayout *gridLayout_2;
    ClickableLabel *screenshotL;
    QStackedWidget *stackedWidget;
    QWidget *pageDescription;
    QGridLayout *gridLayout_3;
    QScrollArea *descriptionW;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *homepageL;
    QLabel *licenseL;
    QLabel *sizeL;
    QHBoxLayout *horizontalLayout_4;
    QLabel *descriptionL;
    QLabel *iconL;
    QLabel *pathL;
    QWidget *pageDepends;
    QGridLayout *gridLayout_4;
    QTreeView *dependsOnLV;
    QWidget *pageRequired;
    QGridLayout *gridLayout_5;
    QTreeView *requiredByLV;
    QWidget *pageFiles;
    QGridLayout *gridLayout_6;
    QPlainTextEdit *filesPTE;
    QPushButton *menuTB;
    QToolButton *hideTB;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *PackageDetails)
    {
        if (PackageDetails->objectName().isEmpty())
            PackageDetails->setObjectName(QString::fromUtf8("PackageDetails"));
        PackageDetails->resize(704, 209);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PackageDetails->sizePolicy().hasHeightForWidth());
        PackageDetails->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(PackageDetails);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        screenshotL = new ClickableLabel(PackageDetails);
        screenshotL->setObjectName(QString::fromUtf8("screenshotL"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(screenshotL->sizePolicy().hasHeightForWidth());
        screenshotL->setSizePolicy(sizePolicy1);
        screenshotL->setMinimumSize(QSize(170, 150));
        screenshotL->setText(QString::fromUtf8(""));
        screenshotL->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(screenshotL, 2, 1, 1, 3);

        stackedWidget = new QStackedWidget(PackageDetails);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy2);
        pageDescription = new QWidget();
        pageDescription->setObjectName(QString::fromUtf8("pageDescription"));
        gridLayout_3 = new QGridLayout(pageDescription);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        descriptionW = new QScrollArea(pageDescription);
        descriptionW->setObjectName(QString::fromUtf8("descriptionW"));
        descriptionW->setMinimumSize(QSize(420, 0));
        descriptionW->setMaximumSize(QSize(16777215, 210));
        descriptionW->setSizeIncrement(QSize(10, 0));
        descriptionW->setFrameShape(QFrame::NoFrame);
        descriptionW->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        descriptionW->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 528, 209));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy3);
        scrollAreaWidgetContents->setMinimumSize(QSize(410, 200));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        homepageL = new QLabel(scrollAreaWidgetContents);
        homepageL->setObjectName(QString::fromUtf8("homepageL"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(homepageL->sizePolicy().hasHeightForWidth());
        homepageL->setSizePolicy(sizePolicy4);
        homepageL->setText(QString::fromUtf8("Home Page"));
        homepageL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        homepageL->setWordWrap(true);
        homepageL->setMargin(5);
        homepageL->setOpenExternalLinks(true);

        gridLayout->addWidget(homepageL, 2, 0, 1, 1);

        licenseL = new QLabel(scrollAreaWidgetContents);
        licenseL->setObjectName(QString::fromUtf8("licenseL"));
        sizePolicy4.setHeightForWidth(licenseL->sizePolicy().hasHeightForWidth());
        licenseL->setSizePolicy(sizePolicy4);
        licenseL->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        licenseL->setMargin(5);

        gridLayout->addWidget(licenseL, 2, 1, 1, 2);

        sizeL = new QLabel(scrollAreaWidgetContents);
        sizeL->setObjectName(QString::fromUtf8("sizeL"));
        sizePolicy4.setHeightForWidth(sizeL->sizePolicy().hasHeightForWidth());
        sizeL->setSizePolicy(sizePolicy4);
        sizeL->setText(QString::fromUtf8("Size"));
        sizeL->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sizeL->setMargin(5);

        gridLayout->addWidget(sizeL, 5, 1, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        descriptionL = new QLabel(scrollAreaWidgetContents);
        descriptionL->setObjectName(QString::fromUtf8("descriptionL"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(descriptionL->sizePolicy().hasHeightForWidth());
        descriptionL->setSizePolicy(sizePolicy5);
        descriptionL->setMinimumSize(QSize(320, 0));
        descriptionL->setText(QString::fromUtf8("description"));
        descriptionL->setTextFormat(Qt::RichText);
        descriptionL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        descriptionL->setWordWrap(true);
        descriptionL->setMargin(5);

        horizontalLayout_4->addWidget(descriptionL);

        iconL = new QLabel(scrollAreaWidgetContents);
        iconL->setObjectName(QString::fromUtf8("iconL"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(iconL->sizePolicy().hasHeightForWidth());
        iconL->setSizePolicy(sizePolicy6);
        iconL->setMinimumSize(QSize(84, 0));
        iconL->setMaximumSize(QSize(84, 16777215));
        iconL->setText(QString::fromUtf8("icon"));
        iconL->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        iconL->setMargin(5);

        horizontalLayout_4->addWidget(iconL);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 3);

        pathL = new QLabel(scrollAreaWidgetContents);
        pathL->setObjectName(QString::fromUtf8("pathL"));
        sizePolicy4.setHeightForWidth(pathL->sizePolicy().hasHeightForWidth());
        pathL->setSizePolicy(sizePolicy4);
        pathL->setText(QString::fromUtf8("Find it in the menu:"));
        pathL->setTextFormat(Qt::RichText);
        pathL->setWordWrap(true);
        pathL->setMargin(5);

        gridLayout->addWidget(pathL, 5, 0, 1, 1);

        descriptionW->setWidget(scrollAreaWidgetContents);

        gridLayout_3->addWidget(descriptionW, 0, 0, 1, 1);

        stackedWidget->addWidget(pageDescription);
        pageDepends = new QWidget();
        pageDepends->setObjectName(QString::fromUtf8("pageDepends"));
        gridLayout_4 = new QGridLayout(pageDepends);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        dependsOnLV = new QTreeView(pageDepends);
        dependsOnLV->setObjectName(QString::fromUtf8("dependsOnLV"));
        dependsOnLV->setFrameShape(QFrame::NoFrame);
        dependsOnLV->setIconSize(QSize(40, 24));
        dependsOnLV->setRootIsDecorated(false);
        dependsOnLV->setItemsExpandable(false);
        dependsOnLV->header()->setVisible(false);

        gridLayout_4->addWidget(dependsOnLV, 0, 0, 1, 1);

        stackedWidget->addWidget(pageDepends);
        pageRequired = new QWidget();
        pageRequired->setObjectName(QString::fromUtf8("pageRequired"));
        gridLayout_5 = new QGridLayout(pageRequired);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        requiredByLV = new QTreeView(pageRequired);
        requiredByLV->setObjectName(QString::fromUtf8("requiredByLV"));
        requiredByLV->setFrameShape(QFrame::NoFrame);
        requiredByLV->setIconSize(QSize(40, 24));
        requiredByLV->setRootIsDecorated(false);
        requiredByLV->setItemsExpandable(false);
        requiredByLV->header()->setVisible(false);

        gridLayout_5->addWidget(requiredByLV, 0, 0, 1, 1);

        stackedWidget->addWidget(pageRequired);
        pageFiles = new QWidget();
        pageFiles->setObjectName(QString::fromUtf8("pageFiles"));
        gridLayout_6 = new QGridLayout(pageFiles);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        filesPTE = new QPlainTextEdit(pageFiles);
        filesPTE->setObjectName(QString::fromUtf8("filesPTE"));
        filesPTE->setFrameShape(QFrame::NoFrame);
        filesPTE->setReadOnly(true);

        gridLayout_6->addWidget(filesPTE, 0, 0, 1, 1);

        stackedWidget->addWidget(pageFiles);

        gridLayout_2->addWidget(stackedWidget, 0, 4, 3, 1);

        menuTB = new QPushButton(PackageDetails);
        menuTB->setObjectName(QString::fromUtf8("menuTB"));
        menuTB->setFlat(true);

        gridLayout_2->addWidget(menuTB, 0, 3, 2, 1);

        hideTB = new QToolButton(PackageDetails);
        hideTB->setObjectName(QString::fromUtf8("hideTB"));
        hideTB->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        hideTB->setAutoRaise(true);

        gridLayout_2->addWidget(hideTB, 0, 1, 2, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Ignored, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 1);


        retranslateUi(PackageDetails);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PackageDetails);
    } // setupUi

    void retranslateUi(QWidget *PackageDetails)
    {
        licenseL->setText(tr2i18n("License:", nullptr));
        menuTB->setText(tr2i18n("More...", nullptr));
        hideTB->setText(tr2i18n("Hide", nullptr));
        (void)PackageDetails;
    } // retranslateUi

};

namespace Ui {
    class PackageDetails: public Ui_PackageDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PACKAGEDETAILS_H

