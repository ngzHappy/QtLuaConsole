#ifndef TESTWIDGET_HPP
#define TESTWIDGET_HPP

#include "testwidget_global.h"

#include <QWidget>
class TESTWIDGETSHARED_EXPORT TestWidget : public QWidget
{
	Q_OBJECT
public:
	TestWidget();
    TestWidget(QWidget *  );
	~TestWidget();

	void print();
	void show() { QWidget::show(); }
	void hide() { QWidget::hide(); }
};

#endif // TESTWIDGET_HPP
