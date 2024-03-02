#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'RepoSig.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPOSIG_H
#define UI_REPOSIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_RepoSig
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *repoNameL;
    QLabel *label_3;
    QLabel *sigUrlL;
    QLabel *label_4;
    QLabel *sigUserIdL;
    QLabel *label_5;
    QLabel *sigIdL;
    QLabel *label;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RepoSig)
    {
        if (RepoSig->objectName().isEmpty())
            RepoSig->setObjectName(QString::fromUtf8("RepoSig"));
        RepoSig->resize(400, 164);
        gridLayout = new QGridLayout(RepoSig);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setRowWrapPolicy(QFormLayout::WrapLongRows);
        label_2 = new QLabel(RepoSig);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        repoNameL = new QLabel(RepoSig);
        repoNameL->setObjectName(QString::fromUtf8("repoNameL"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(repoNameL->sizePolicy().hasHeightForWidth());
        repoNameL->setSizePolicy(sizePolicy1);
        repoNameL->setWordWrap(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, repoNameL);

        label_3 = new QLabel(RepoSig);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        sigUrlL = new QLabel(RepoSig);
        sigUrlL->setObjectName(QString::fromUtf8("sigUrlL"));
        sizePolicy1.setHeightForWidth(sigUrlL->sizePolicy().hasHeightForWidth());
        sigUrlL->setSizePolicy(sizePolicy1);
        sigUrlL->setWordWrap(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, sigUrlL);

        label_4 = new QLabel(RepoSig);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        sigUserIdL = new QLabel(RepoSig);
        sigUserIdL->setObjectName(QString::fromUtf8("sigUserIdL"));
        sizePolicy1.setHeightForWidth(sigUserIdL->sizePolicy().hasHeightForWidth());
        sigUserIdL->setSizePolicy(sizePolicy1);
        sigUserIdL->setWordWrap(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, sigUserIdL);

        label_5 = new QLabel(RepoSig);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        sigIdL = new QLabel(RepoSig);
        sigIdL->setObjectName(QString::fromUtf8("sigIdL"));
        sizePolicy1.setHeightForWidth(sigIdL->sizePolicy().hasHeightForWidth());
        sigIdL->setSizePolicy(sizePolicy1);
        sigIdL->setWordWrap(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, sigIdL);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        label = new QLabel(RepoSig);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMargin(5);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(RepoSig);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Yes);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 1);


        retranslateUi(RepoSig);
        QObject::connect(buttonBox, SIGNAL(accepted()), RepoSig, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RepoSig, SLOT(reject()));

        QMetaObject::connectSlotsByName(RepoSig);
    } // setupUi

    void retranslateUi(QDialog *RepoSig)
    {
        RepoSig->setWindowTitle(tr2i18n("Software signature is required", nullptr));
        label_2->setText(tr2i18n("Repository name:", nullptr));
        label_3->setText(tr2i18n("Signature URL:", nullptr));
        label_4->setText(tr2i18n("Signature user identifier:", nullptr));
        label_5->setText(tr2i18n("Signature identifier:", nullptr));
        label->setText(tr2i18n("Do you trust the origin of packages?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RepoSig: public Ui_RepoSig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // REPOSIG_H

