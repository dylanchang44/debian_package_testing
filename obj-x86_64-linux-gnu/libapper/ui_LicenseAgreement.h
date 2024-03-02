#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'LicenseAgreement.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LICENSEAGREEMENT_H
#define UI_LICENSEAGREEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_LicenseAgreement
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *textbrowser;
    QLabel *title;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LicenseAgreement)
    {
        if (LicenseAgreement->objectName().isEmpty())
            LicenseAgreement->setObjectName(QString::fromUtf8("LicenseAgreement"));
        LicenseAgreement->resize(527, 472);
        gridLayout = new QGridLayout(LicenseAgreement);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textbrowser = new QTextBrowser(LicenseAgreement);
        textbrowser->setObjectName(QString::fromUtf8("textbrowser"));

        gridLayout->addWidget(textbrowser, 2, 0, 1, 1);

        title = new QLabel(LicenseAgreement);
        title->setObjectName(QString::fromUtf8("title"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        title->setFont(font);
        title->setWordWrap(true);

        gridLayout->addWidget(title, 0, 0, 1, 1);

        label_2 = new QLabel(LicenseAgreement);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setWordWrap(true);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(LicenseAgreement);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 1);


        retranslateUi(LicenseAgreement);
        QObject::connect(buttonBox, SIGNAL(accepted()), LicenseAgreement, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LicenseAgreement, SLOT(reject()));

        QMetaObject::connectSlotsByName(LicenseAgreement);
    } // setupUi

    void retranslateUi(QDialog *LicenseAgreement)
    {
        LicenseAgreement->setWindowTitle(tr2i18n("License Agreement Required", nullptr));
        title->setText(QString());
        label_2->setText(tr2i18n("Please read the following important information before continuing:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LicenseAgreement: public Ui_LicenseAgreement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // LICENSEAGREEMENT_H

