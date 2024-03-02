#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'BackendDetails.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BACKENDDETAILS_H
#define UI_BACKENDDETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_BackendDetails
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QCheckBox *getUpdatesCB;
    QCheckBox *refreshCacheCB;
    QCheckBox *searchNameCB;
    QCheckBox *getDependsCB;
    QCheckBox *searchDetailsCB;
    QCheckBox *getRequiresCB;
    QCheckBox *searchGroupCB;
    QCheckBox *getUpdateDetailCB;
    QCheckBox *searchFileCB;
    QCheckBox *getDescriptionCB;
    QCheckBox *getFilesCB;
    QCheckBox *getDistroUpgradesCB;
    QCheckBox *installPackageCB;
    QCheckBox *updatePackageCB;
    QCheckBox *removePackageCB;
    QCheckBox *installFileCB;
    QCheckBox *resolveCB;
    QCheckBox *cancelCB;
    QCheckBox *getPackagesCB;
    QCheckBox *whatProvidesCB;
    QCheckBox *repositorySetEnableCB;
    QCheckBox *repositoryEnableCB;
    QCheckBox *getRepositoryListCB;
    QCheckBox *repairSystemCB;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *nameL;
    QLabel *label_3;
    QLabel *descriptionL;
    QLabel *label_2;
    QLabel *authorL;
    QLabel *label_4;
    QLabel *distroL;
    QGroupBox *groupBox_4;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QLabel *pkVersionL;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QCheckBox *installedCB;
    QCheckBox *developmentCB;
    QCheckBox *visibleCB;
    QCheckBox *newestCB;
    QCheckBox *guiCB;
    QCheckBox *freeCB;
    QCheckBox *supportedCB;
    QCheckBox *archCB;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *BackendDetails)
    {
        if (BackendDetails->objectName().isEmpty())
            BackendDetails->setObjectName(QString::fromUtf8("BackendDetails"));
        BackendDetails->resize(552, 648);
        gridLayout_4 = new QGridLayout(BackendDetails);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(11, -1, -1, -1);
        groupBox_3 = new QGroupBox(BackendDetails);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setEnabled(true);
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        getUpdatesCB = new QCheckBox(groupBox_3);
        getUpdatesCB->setObjectName(QString::fromUtf8("getUpdatesCB"));
        getUpdatesCB->setEnabled(false);

        gridLayout_3->addWidget(getUpdatesCB, 0, 0, 1, 1);

        refreshCacheCB = new QCheckBox(groupBox_3);
        refreshCacheCB->setObjectName(QString::fromUtf8("refreshCacheCB"));
        refreshCacheCB->setEnabled(false);

        gridLayout_3->addWidget(refreshCacheCB, 2, 0, 1, 1);

        searchNameCB = new QCheckBox(groupBox_3);
        searchNameCB->setObjectName(QString::fromUtf8("searchNameCB"));
        searchNameCB->setEnabled(false);

        gridLayout_3->addWidget(searchNameCB, 4, 0, 1, 1);

        getDependsCB = new QCheckBox(groupBox_3);
        getDependsCB->setObjectName(QString::fromUtf8("getDependsCB"));
        getDependsCB->setEnabled(false);

        gridLayout_3->addWidget(getDependsCB, 4, 2, 1, 1);

        searchDetailsCB = new QCheckBox(groupBox_3);
        searchDetailsCB->setObjectName(QString::fromUtf8("searchDetailsCB"));
        searchDetailsCB->setEnabled(false);

        gridLayout_3->addWidget(searchDetailsCB, 5, 0, 1, 1);

        getRequiresCB = new QCheckBox(groupBox_3);
        getRequiresCB->setObjectName(QString::fromUtf8("getRequiresCB"));
        getRequiresCB->setEnabled(false);

        gridLayout_3->addWidget(getRequiresCB, 5, 2, 1, 1);

        searchGroupCB = new QCheckBox(groupBox_3);
        searchGroupCB->setObjectName(QString::fromUtf8("searchGroupCB"));
        searchGroupCB->setEnabled(false);

        gridLayout_3->addWidget(searchGroupCB, 6, 0, 1, 1);

        getUpdateDetailCB = new QCheckBox(groupBox_3);
        getUpdateDetailCB->setObjectName(QString::fromUtf8("getUpdateDetailCB"));
        getUpdateDetailCB->setEnabled(false);

        gridLayout_3->addWidget(getUpdateDetailCB, 6, 2, 1, 1);

        searchFileCB = new QCheckBox(groupBox_3);
        searchFileCB->setObjectName(QString::fromUtf8("searchFileCB"));
        searchFileCB->setEnabled(false);

        gridLayout_3->addWidget(searchFileCB, 7, 0, 1, 1);

        getDescriptionCB = new QCheckBox(groupBox_3);
        getDescriptionCB->setObjectName(QString::fromUtf8("getDescriptionCB"));
        getDescriptionCB->setEnabled(false);

        gridLayout_3->addWidget(getDescriptionCB, 7, 2, 1, 1);

        getFilesCB = new QCheckBox(groupBox_3);
        getFilesCB->setObjectName(QString::fromUtf8("getFilesCB"));
        getFilesCB->setEnabled(false);

        gridLayout_3->addWidget(getFilesCB, 8, 2, 1, 1);

        getDistroUpgradesCB = new QCheckBox(groupBox_3);
        getDistroUpgradesCB->setObjectName(QString::fromUtf8("getDistroUpgradesCB"));
        getDistroUpgradesCB->setEnabled(false);

        gridLayout_3->addWidget(getDistroUpgradesCB, 1, 0, 1, 1);

        installPackageCB = new QCheckBox(groupBox_3);
        installPackageCB->setObjectName(QString::fromUtf8("installPackageCB"));
        installPackageCB->setEnabled(false);

        gridLayout_3->addWidget(installPackageCB, 0, 2, 1, 1);

        updatePackageCB = new QCheckBox(groupBox_3);
        updatePackageCB->setObjectName(QString::fromUtf8("updatePackageCB"));
        updatePackageCB->setEnabled(false);

        gridLayout_3->addWidget(updatePackageCB, 2, 2, 1, 1);

        removePackageCB = new QCheckBox(groupBox_3);
        removePackageCB->setObjectName(QString::fromUtf8("removePackageCB"));
        removePackageCB->setEnabled(false);

        gridLayout_3->addWidget(removePackageCB, 3, 2, 1, 1);

        installFileCB = new QCheckBox(groupBox_3);
        installFileCB->setObjectName(QString::fromUtf8("installFileCB"));
        installFileCB->setEnabled(false);

        gridLayout_3->addWidget(installFileCB, 1, 2, 1, 1);

        resolveCB = new QCheckBox(groupBox_3);
        resolveCB->setObjectName(QString::fromUtf8("resolveCB"));
        resolveCB->setEnabled(false);

        gridLayout_3->addWidget(resolveCB, 8, 0, 1, 1);

        cancelCB = new QCheckBox(groupBox_3);
        cancelCB->setObjectName(QString::fromUtf8("cancelCB"));
        cancelCB->setEnabled(false);

        gridLayout_3->addWidget(cancelCB, 3, 0, 1, 1);

        getPackagesCB = new QCheckBox(groupBox_3);
        getPackagesCB->setObjectName(QString::fromUtf8("getPackagesCB"));
        getPackagesCB->setEnabled(false);

        gridLayout_3->addWidget(getPackagesCB, 4, 3, 1, 1);

        whatProvidesCB = new QCheckBox(groupBox_3);
        whatProvidesCB->setObjectName(QString::fromUtf8("whatProvidesCB"));
        whatProvidesCB->setEnabled(false);

        gridLayout_3->addWidget(whatProvidesCB, 3, 3, 1, 1);

        repositorySetEnableCB = new QCheckBox(groupBox_3);
        repositorySetEnableCB->setObjectName(QString::fromUtf8("repositorySetEnableCB"));
        repositorySetEnableCB->setEnabled(false);

        gridLayout_3->addWidget(repositorySetEnableCB, 2, 3, 1, 1);

        repositoryEnableCB = new QCheckBox(groupBox_3);
        repositoryEnableCB->setObjectName(QString::fromUtf8("repositoryEnableCB"));
        repositoryEnableCB->setEnabled(false);

        gridLayout_3->addWidget(repositoryEnableCB, 1, 3, 1, 1);

        getRepositoryListCB = new QCheckBox(groupBox_3);
        getRepositoryListCB->setObjectName(QString::fromUtf8("getRepositoryListCB"));
        getRepositoryListCB->setEnabled(false);

        gridLayout_3->addWidget(getRepositoryListCB, 0, 3, 1, 1);

        repairSystemCB = new QCheckBox(groupBox_3);
        repairSystemCB->setObjectName(QString::fromUtf8("repairSystemCB"));
        repairSystemCB->setEnabled(false);

        gridLayout_3->addWidget(repairSystemCB, 5, 3, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 2, 0, 1, 1);

        groupBox = new QGroupBox(BackendDetails);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        nameL = new QLabel(groupBox);
        nameL->setObjectName(QString::fromUtf8("nameL"));
        nameL->setText(QString::fromUtf8("backend name here"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nameL);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        descriptionL = new QLabel(groupBox);
        descriptionL->setObjectName(QString::fromUtf8("descriptionL"));
        descriptionL->setText(QString::fromUtf8("backend description here"));

        formLayout->setWidget(1, QFormLayout::FieldRole, descriptionL);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        authorL = new QLabel(groupBox);
        authorL->setObjectName(QString::fromUtf8("authorL"));
        authorL->setText(QString::fromUtf8("backend author name here"));

        formLayout->setWidget(2, QFormLayout::FieldRole, authorL);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        distroL = new QLabel(groupBox);
        distroL->setObjectName(QString::fromUtf8("distroL"));
        distroL->setText(QString::fromUtf8("distribution id here"));

        formLayout->setWidget(3, QFormLayout::FieldRole, distroL);


        gridLayout_4->addWidget(groupBox, 1, 0, 1, 1);

        groupBox_4 = new QGroupBox(BackendDetails);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        formLayout_2 = new QFormLayout(groupBox_4);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_5);

        pkVersionL = new QLabel(groupBox_4);
        pkVersionL->setObjectName(QString::fromUtf8("pkVersionL"));
        pkVersionL->setText(QString::fromUtf8("packagekit version here"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, pkVersionL);


        gridLayout_4->addWidget(groupBox_4, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(BackendDetails);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout_4->addWidget(buttonBox, 6, 0, 1, 1);

        groupBox_2 = new QGroupBox(BackendDetails);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        installedCB = new QCheckBox(groupBox_2);
        installedCB->setObjectName(QString::fromUtf8("installedCB"));
        installedCB->setEnabled(false);

        gridLayout->addWidget(installedCB, 0, 0, 1, 1);

        developmentCB = new QCheckBox(groupBox_2);
        developmentCB->setObjectName(QString::fromUtf8("developmentCB"));
        developmentCB->setEnabled(false);

        gridLayout->addWidget(developmentCB, 0, 1, 1, 1);

        visibleCB = new QCheckBox(groupBox_2);
        visibleCB->setObjectName(QString::fromUtf8("visibleCB"));
        visibleCB->setEnabled(false);

        gridLayout->addWidget(visibleCB, 0, 2, 1, 1);

        newestCB = new QCheckBox(groupBox_2);
        newestCB->setObjectName(QString::fromUtf8("newestCB"));
        newestCB->setEnabled(false);

        gridLayout->addWidget(newestCB, 0, 3, 1, 1);

        guiCB = new QCheckBox(groupBox_2);
        guiCB->setObjectName(QString::fromUtf8("guiCB"));
        guiCB->setEnabled(false);

        gridLayout->addWidget(guiCB, 1, 0, 1, 1);

        freeCB = new QCheckBox(groupBox_2);
        freeCB->setObjectName(QString::fromUtf8("freeCB"));
        freeCB->setEnabled(false);

        gridLayout->addWidget(freeCB, 1, 1, 1, 1);

        supportedCB = new QCheckBox(groupBox_2);
        supportedCB->setObjectName(QString::fromUtf8("supportedCB"));
        supportedCB->setEnabled(false);

        gridLayout->addWidget(supportedCB, 1, 2, 1, 1);

        archCB = new QCheckBox(groupBox_2);
        archCB->setObjectName(QString::fromUtf8("archCB"));
        archCB->setEnabled(false);

        gridLayout->addWidget(archCB, 1, 3, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 5, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 4, 0, 1, 1);


        retranslateUi(BackendDetails);
        QObject::connect(buttonBox, SIGNAL(rejected()), BackendDetails, SLOT(reject()));

        QMetaObject::connectSlotsByName(BackendDetails);
    } // setupUi

    void retranslateUi(QDialog *BackendDetails)
    {
        groupBox_3->setTitle(tr2i18n("Methods", nullptr));
        getUpdatesCB->setText(tr2i18n("Get Updates", nullptr));
        refreshCacheCB->setText(tr2i18n("Refresh Cache", nullptr));
        searchNameCB->setText(tr2i18n("Search Name", nullptr));
        getDependsCB->setText(tr2i18n("Get Package Depends", nullptr));
        searchDetailsCB->setText(tr2i18n("Search Details", nullptr));
        getRequiresCB->setText(tr2i18n("Get Package Requires", nullptr));
        searchGroupCB->setText(tr2i18n("Search Group", nullptr));
        getUpdateDetailCB->setText(tr2i18n("Get Update Detail", nullptr));
        searchFileCB->setText(tr2i18n("Search File", nullptr));
        getDescriptionCB->setText(tr2i18n("Get Package Description", nullptr));
        getFilesCB->setText(tr2i18n("Get Package Files", nullptr));
        getDistroUpgradesCB->setText(tr2i18n("Get Distro Upgrades", nullptr));
        installPackageCB->setText(tr2i18n("Install Packages", nullptr));
        updatePackageCB->setText(tr2i18n("Update Packages", nullptr));
        removePackageCB->setText(tr2i18n("Remove Packages", nullptr));
        installFileCB->setText(tr2i18n("Install Files", nullptr));
        resolveCB->setText(tr2i18n("Resolve", nullptr));
        cancelCB->setText(tr2i18n("Cancel", nullptr));
        getPackagesCB->setText(tr2i18n("Get Packages", nullptr));
        whatProvidesCB->setText(tr2i18n("What Provides", nullptr));
        repositorySetEnableCB->setText(tr2i18n("Set Repository Data", nullptr));
        repositoryEnableCB->setText(tr2i18n("Enable Repository", nullptr));
        getRepositoryListCB->setText(tr2i18n("Get Repository List", nullptr));
        repairSystemCB->setText(tr2i18n("Repair System", nullptr));
        groupBox->setTitle(tr2i18n("About Backend", nullptr));
        label->setText(tr2i18n("Backend name:", nullptr));
        label_3->setText(tr2i18n("Backend description:", nullptr));
        label_2->setText(tr2i18n("Backend author:", nullptr));
        label_4->setText(tr2i18n("Distribution ID:", nullptr));
        groupBox_4->setTitle(tr2i18n("PackageKit", nullptr));
        label_5->setText(tr2i18n("Version:", nullptr));
        groupBox_2->setTitle(tr2i18n("Filters", nullptr));
        installedCB->setText(tr2i18n("Installed", nullptr));
        developmentCB->setText(tr2i18n("Development", nullptr));
        visibleCB->setText(tr2i18n("Package is visible", nullptr));
        newestCB->setText(tr2i18n("Newest", nullptr));
        guiCB->setText(tr2i18n("GUI", nullptr));
        freeCB->setText(tr2i18n("Free software", nullptr));
        supportedCB->setText(tr2i18n("Supported", nullptr));
        archCB->setText(tr2i18n("Only native", nullptr));
        (void)BackendDetails;
    } // retranslateUi

};

namespace Ui {
    class BackendDetails: public Ui_BackendDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // BACKENDDETAILS_H

