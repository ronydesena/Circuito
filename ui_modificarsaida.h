/********************************************************************************
** Form generated from reading UI file 'modificarsaida.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFICARSAIDA_H
#define UI_MODIFICARSAIDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ModificarSaida
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *labelSaida;
    QLabel *labelIdSaida;
    QLabel *labelOrigemSaida;
    QSpinBox *spinOrigemSaida;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ModificarSaida)
    {
        if (ModificarSaida->objectName().isEmpty())
            ModificarSaida->setObjectName(QString::fromUtf8("ModificarSaida"));
        ModificarSaida->resize(174, 95);
        verticalLayout = new QVBoxLayout(ModificarSaida);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelSaida = new QLabel(ModificarSaida);
        labelSaida->setObjectName(QString::fromUtf8("labelSaida"));

        gridLayout->addWidget(labelSaida, 0, 0, 1, 1);

        labelIdSaida = new QLabel(ModificarSaida);
        labelIdSaida->setObjectName(QString::fromUtf8("labelIdSaida"));

        gridLayout->addWidget(labelIdSaida, 0, 1, 1, 1);

        labelOrigemSaida = new QLabel(ModificarSaida);
        labelOrigemSaida->setObjectName(QString::fromUtf8("labelOrigemSaida"));

        gridLayout->addWidget(labelOrigemSaida, 1, 0, 1, 1);

        spinOrigemSaida = new QSpinBox(ModificarSaida);
        spinOrigemSaida->setObjectName(QString::fromUtf8("spinOrigemSaida"));

        gridLayout->addWidget(spinOrigemSaida, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(ModificarSaida);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ModificarSaida);
        QObject::connect(buttonBox, SIGNAL(accepted()), ModificarSaida, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ModificarSaida, SLOT(reject()));

        QMetaObject::connectSlotsByName(ModificarSaida);
    } // setupUi

    void retranslateUi(QDialog *ModificarSaida)
    {
        ModificarSaida->setWindowTitle(QApplication::translate("ModificarSaida", "Dialog", nullptr));
        labelSaida->setText(QApplication::translate("ModificarSaida", "SA\303\215DA:", nullptr));
        labelIdSaida->setText(QString());
        labelOrigemSaida->setText(QApplication::translate("ModificarSaida", "Id da origem:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModificarSaida: public Ui_ModificarSaida {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFICARSAIDA_H
