#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'TransactionHistory.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACTIONHISTORY_H
#define UI_TRANSACTIONHISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TransactionHistory
{
public:
    QGridLayout *gridLayout;
    QTreeView *treeView;
    QLabel *timeCacheLabel;

    void setupUi(QWidget *TransactionHistory)
    {
        if (TransactionHistory->objectName().isEmpty())
            TransactionHistory->setObjectName(QString::fromUtf8("TransactionHistory"));
        gridLayout = new QGridLayout(TransactionHistory);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        treeView = new QTreeView(TransactionHistory);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setContextMenuPolicy(Qt::CustomContextMenu);
        treeView->setAlternatingRowColors(true);
        treeView->setIconSize(QSize(24, 24));
        treeView->setRootIsDecorated(false);
        treeView->setItemsExpandable(false);
        treeView->setSortingEnabled(true);

        gridLayout->addWidget(treeView, 1, 0, 1, 1);

        timeCacheLabel = new QLabel(TransactionHistory);
        timeCacheLabel->setObjectName(QString::fromUtf8("timeCacheLabel"));
        timeCacheLabel->setText(QString::fromUtf8("Time since last cache refresh: 5 hours"));

        gridLayout->addWidget(timeCacheLabel, 0, 0, 1, 1);


        retranslateUi(TransactionHistory);

        QMetaObject::connectSlotsByName(TransactionHistory);
    } // setupUi

    void retranslateUi(QWidget *TransactionHistory)
    {
        (void)TransactionHistory;
    } // retranslateUi

};

namespace Ui {
    class TransactionHistory: public Ui_TransactionHistory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // TRANSACTIONHISTORY_H

