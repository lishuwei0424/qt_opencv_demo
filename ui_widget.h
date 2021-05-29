/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label_8;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_path;
    QPushButton *path_btn;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *rate_label;
    QLabel *label_5;
    QLabel *time_label;
    QSpacerItem *verticalSpacer;
    QGridLayout *label_layout;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QLineEdit *lineEdit_start_x;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLineEdit *lineEdit_start_y;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_12;
    QLineEdit *lineEdit_size_w;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_13;
    QLineEdit *lineEdit_size_h;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *ok_btn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *cancel_btn;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(734, 636);
        Widget->setMinimumSize(QSize(734, 636));
        Widget->setMaximumSize(QSize(734, 636));
        label_8 = new QLabel(Widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(50, 200, 54, 18));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 710, 599));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_path = new QLineEdit(layoutWidget);
        lineEdit_path->setObjectName(QString::fromUtf8("lineEdit_path"));

        horizontalLayout->addWidget(lineEdit_path);

        path_btn = new QPushButton(layoutWidget);
        path_btn->setObjectName(QString::fromUtf8("path_btn"));

        horizontalLayout->addWidget(path_btn);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(83, 26));
        label_4->setMaximumSize(QSize(83, 26));

        horizontalLayout_2->addWidget(label_4);

        rate_label = new QLabel(layoutWidget);
        rate_label->setObjectName(QString::fromUtf8("rate_label"));
        rate_label->setMinimumSize(QSize(83, 26));
        rate_label->setMaximumSize(QSize(83, 26));

        horizontalLayout_2->addWidget(rate_label);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(83, 26));
        label_5->setMaximumSize(QSize(83, 26));

        horizontalLayout_2->addWidget(label_5);

        time_label = new QLabel(layoutWidget);
        time_label->setObjectName(QString::fromUtf8("time_label"));
        time_label->setMinimumSize(QSize(83, 26));
        time_label->setMaximumSize(QSize(83, 26));

        horizontalLayout_2->addWidget(time_label);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_layout = new QGridLayout();
        label_layout->setSpacing(6);
        label_layout->setObjectName(QString::fromUtf8("label_layout"));

        verticalLayout->addLayout(label_layout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_4->addWidget(label_10);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_8->addWidget(label_3);

        lineEdit_start_x = new QLineEdit(layoutWidget);
        lineEdit_start_x->setObjectName(QString::fromUtf8("lineEdit_start_x"));

        horizontalLayout_8->addWidget(lineEdit_start_x);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_9->addWidget(label_9);

        lineEdit_start_y = new QLineEdit(layoutWidget);
        lineEdit_start_y->setObjectName(QString::fromUtf8("lineEdit_start_y"));

        horizontalLayout_9->addWidget(lineEdit_start_y);


        verticalLayout_3->addLayout(horizontalLayout_9);


        horizontalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_5->addWidget(label_11);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_11->addWidget(label_12);

        lineEdit_size_w = new QLineEdit(layoutWidget);
        lineEdit_size_w->setObjectName(QString::fromUtf8("lineEdit_size_w"));

        horizontalLayout_11->addWidget(lineEdit_size_w);


        verticalLayout_4->addLayout(horizontalLayout_11);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_10->addWidget(label_13);

        lineEdit_size_h = new QLineEdit(layoutWidget);
        lineEdit_size_h->setObjectName(QString::fromUtf8("lineEdit_size_h"));

        horizontalLayout_10->addWidget(lineEdit_size_h);


        verticalLayout_4->addLayout(horizontalLayout_10);


        horizontalLayout_5->addLayout(verticalLayout_4);


        verticalLayout_2->addLayout(horizontalLayout_5);


        horizontalLayout_7->addLayout(verticalLayout_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        ok_btn = new QPushButton(layoutWidget);
        ok_btn->setObjectName(QString::fromUtf8("ok_btn"));

        horizontalLayout_6->addWidget(ok_btn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        cancel_btn = new QPushButton(layoutWidget);
        cancel_btn->setObjectName(QString::fromUtf8("cancel_btn"));

        horizontalLayout_6->addWidget(cancel_btn);


        horizontalLayout_7->addLayout(horizontalLayout_6);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_7);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\345\244\247\344\275\254\347\224\273\346\241\206", nullptr));
        label_8->setText(QString());
        label->setText(QApplication::translate("Widget", "\351\200\211\346\213\251\345\233\276\347\211\207:", nullptr));
        path_btn->setText(QApplication::translate("Widget", "\346\265\217\350\247\210", nullptr));
        label_4->setText(QApplication::translate("Widget", "\345\233\276\345\203\217\351\253\230\357\274\232", nullptr));
        rate_label->setText(QApplication::translate("Widget", "0", nullptr));
        label_5->setText(QApplication::translate("Widget", "\345\233\276\345\203\217\345\256\275\357\274\232", nullptr));
        time_label->setText(QApplication::translate("Widget", "0", nullptr));
        label_10->setText(QApplication::translate("Widget", "\350\265\267\347\202\271:", nullptr));
        label_3->setText(QApplication::translate("Widget", "x:", nullptr));
        lineEdit_start_x->setText(QApplication::translate("Widget", "0", nullptr));
        label_9->setText(QApplication::translate("Widget", "y:", nullptr));
        lineEdit_start_y->setText(QApplication::translate("Widget", "0", nullptr));
        label_11->setText(QApplication::translate("Widget", "\345\244\247\345\260\217:", nullptr));
        label_12->setText(QApplication::translate("Widget", "\345\256\275:", nullptr));
        lineEdit_size_w->setText(QApplication::translate("Widget", "0", nullptr));
        label_13->setText(QApplication::translate("Widget", "\351\253\230:", nullptr));
        lineEdit_size_h->setText(QApplication::translate("Widget", "0", nullptr));
        ok_btn->setText(QApplication::translate("Widget", "\347\241\256\345\256\232", nullptr));
        cancel_btn->setText(QApplication::translate("Widget", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
