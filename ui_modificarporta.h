/********************************************************************************
** Form generated from reading UI file 'modificarporta.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFICARPORTA_H
#define UI_MODIFICARPORTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ModificarPorta
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *labelPorta;
    QLabel *labelIdPorta;
    QLabel *labelTipoPorta;
    QComboBox *comboTipoPorta;
    QLabel *labelNumInputs;
    QSpinBox *spinNumInputs;
    QLabel *labelInput1;
    QSpinBox *spinInput1;
    QLabel *labelInput2;
    QSpinBox *spinInput2;
    QLabel *labelInput3;
    QSpinBox *spinInput3;
    QLabel *labelInput4;
    QSpinBox *spinInput4;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ModificarPorta)
    {
        if (ModificarPorta->objectName().isEmpty())
            ModificarPorta->setObjectName(QString::fromUtf8("ModificarPorta"));
        ModificarPorta->resize(174, 225);
        verticalLayout = new QVBoxLayout(ModificarPorta);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelPorta = new QLabel(ModificarPorta);
        labelPorta->setObjectName(QString::fromUtf8("labelPorta"));

        gridLayout->addWidget(labelPorta, 0, 0, 1, 1);

        labelIdPorta = new QLabel(ModificarPorta);
        labelIdPorta->setObjectName(QString::fromUtf8("labelIdPorta"));

        gridLayout->addWidget(labelIdPorta, 0, 1, 1, 1);

        labelTipoPorta = new QLabel(ModificarPorta);
        labelTipoPorta->setObjectName(QString::fromUtf8("labelTipoPorta"));

        gridLayout->addWidget(labelTipoPorta, 1, 0, 1, 1);

        comboTipoPorta = new QComboBox(ModificarPorta);
        comboTipoPorta->setObjectName(QString::fromUtf8("comboTipoPorta"));

        gridLayout->addWidget(comboTipoPorta, 1, 1, 1, 1);

        labelNumInputs = new QLabel(ModificarPorta);
        labelNumInputs->setObjectName(QString::fromUtf8("labelNumInputs"));

        gridLayout->addWidget(labelNumInputs, 2, 0, 1, 1);

        spinNumInputs = new QSpinBox(ModificarPorta);
        spinNumInputs->setObjectName(QString::fromUtf8("spinNumInputs"));
        spinNumInputs->setMinimum(1);
        spinNumInputs->setMaximum(4);

        gridLayout->addWidget(spinNumInputs, 2, 1, 1, 1);

        labelInput1 = new QLabel(ModificarPorta);
        labelInput1->setObjectName(QString::fromUtf8("labelInput1"));

        gridLayout->addWidget(labelInput1, 3, 0, 1, 1);

        spinInput1 = new QSpinBox(ModificarPorta);
        spinInput1->setObjectName(QString::fromUtf8("spinInput1"));

        gridLayout->addWidget(spinInput1, 3, 1, 1, 1);

        labelInput2 = new QLabel(ModificarPorta);
        labelInput2->setObjectName(QString::fromUtf8("labelInput2"));

        gridLayout->addWidget(labelInput2, 4, 0, 1, 1);

        spinInput2 = new QSpinBox(ModificarPorta);
        spinInput2->setObjectName(QString::fromUtf8("spinInput2"));

        gridLayout->addWidget(spinInput2, 4, 1, 1, 1);

        labelInput3 = new QLabel(ModificarPorta);
        labelInput3->setObjectName(QString::fromUtf8("labelInput3"));

        gridLayout->addWidget(labelInput3, 5, 0, 1, 1);

        spinInput3 = new QSpinBox(ModificarPorta);
        spinInput3->setObjectName(QString::fromUtf8("spinInput3"));

        gridLayout->addWidget(spinInput3, 5, 1, 1, 1);

        labelInput4 = new QLabel(ModificarPorta);
        labelInput4->setObjectName(QString::fromUtf8("labelInput4"));

        gridLayout->addWidget(labelInput4, 6, 0, 1, 1);

        spinInput4 = new QSpinBox(ModificarPorta);
        spinInput4->setObjectName(QString::fromUtf8("spinInput4"));

        gridLayout->addWidget(spinInput4, 6, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(ModificarPorta);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ModificarPorta);
        QObject::connect(buttonBox, SIGNAL(accepted()), ModificarPorta, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ModificarPorta, SLOT(reject()));

        QMetaObject::connectSlotsByName(ModificarPorta);
    } // setupUi

    void retranslateUi(QDialog *ModificarPorta)
    {
        ModificarPorta->setWindowTitle(QApplication::translate("ModificarPorta", "Dialog", nullptr));
        labelPorta->setText(QApplication::translate("ModificarPorta", "PORTA:", nullptr));
        labelIdPorta->setText(QString());
        labelTipoPorta->setText(QApplication::translate("ModificarPorta", "Tipo da porta:", nullptr));
        labelNumInputs->setText(QApplication::translate("ModificarPorta", "N\302\272 de entradas:", nullptr));
        labelInput1->setText(QApplication::translate("ModificarPorta", "Id da entrada 1:", nullptr));
        labelInput2->setText(QApplication::translate("ModificarPorta", "Id da entrada 2:", nullptr));
        labelInput3->setText(QApplication::translate("ModificarPorta", "Id da entrada 3:", nullptr));
        labelInput4->setText(QApplication::translate("ModificarPorta", "Id da entrada 4:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModificarPorta: public Ui_ModificarPorta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFICARPORTA_H
