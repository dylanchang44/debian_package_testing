#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'PkTransactionWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PKTRANSACTIONWIDGET_H
#define UI_PKTRANSACTIONWIDGET_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>
#include "CustomProgressBar.h"

QT_BEGIN_NAMESPACE

class Ui_PkTransactionWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QGridLayout *gridLayout_2;
    QLabel *currentL;
    CustomProgressBar *progressBar;
    QDialogButtonBox *cancelButton;
    QTreeView *progressView;

    void setupUi(QWidget *PkTransactionWidget)
    {
        if (PkTransactionWidget->objectName().isEmpty())
            PkTransactionWidget->setObjectName(QString::fromUtf8("PkTransactionWidget"));
        PkTransactionWidget->resize(400, 159);
        PkTransactionWidget->setMinimumSize(QSize(400, 0));
        gridLayout = new QGridLayout(PkTransactionWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(PkTransactionWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(48, 48));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        currentL = new QLabel(PkTransactionWidget);
        currentL->setObjectName(QString::fromUtf8("currentL"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(currentL->sizePolicy().hasHeightForWidth());
        currentL->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(11);
        currentL->setFont(font);
        currentL->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        currentL->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_2->addWidget(currentL, 0, 0, 1, 1);

        progressBar = new CustomProgressBar(PkTransactionWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        progressBar->setMaximum(0);

        gridLayout_2->addWidget(progressBar, 1, 0, 1, 1);

        cancelButton = new QDialogButtonBox(PkTransactionWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        sizePolicy.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
        cancelButton->setSizePolicy(sizePolicy);
        cancelButton->setStandardButtons(QDialogButtonBox::Cancel);

        gridLayout_2->addWidget(cancelButton, 1, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 1, 1, 1);

        progressView = new QTreeView(PkTransactionWidget);
        progressView->setObjectName(QString::fromUtf8("progressView"));
        progressView->setFocusPolicy(Qt::NoFocus);
        progressView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        progressView->setAlternatingRowColors(true);
        progressView->setSelectionMode(QAbstractItemView::NoSelection);
        progressView->setSelectionBehavior(QAbstractItemView::SelectColumns);
        progressView->setRootIsDecorated(false);
        progressView->setItemsExpandable(false);
        progressView->setExpandsOnDoubleClick(false);
        progressView->header()->setVisible(false);

        gridLayout->addWidget(progressView, 1, 0, 1, 2);


        retranslateUi(PkTransactionWidget);

        QMetaObject::connectSlotsByName(PkTransactionWidget);
    } // setupUi

    void retranslateUi(QWidget *PkTransactionWidget)
    {
        label->setText(tr2i18n("icon", nullptr));
        currentL->setText(tr2i18n("Downloading Packages", nullptr));
        (void)PkTransactionWidget;
    } // retranslateUi

};

namespace Ui {
    class PkTransactionWidget: public Ui_PkTransactionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PKTRANSACTIONWIDGET_H

