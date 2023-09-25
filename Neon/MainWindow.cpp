#include "MainWindow.hpp"

// Qt includes
#include <QDebug>
#include <QMenu>

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent),
	ui(std::make_unique<Ui::MainWindow>()),
	primaryMenuBar(std::make_unique<QMenuBar>(this))
{
	ui->setupUi(this);
	setMenuBar(primaryMenuBar.get());

	// Application menu
	QMenu* menu = primaryMenuBar->addMenu(tr("Application"));
	QAction* action = menu->addAction(tr("Quit"));
	connect(action, &QAction::triggered, qApp, [&]
	{
		qDebug().noquote() << "Application quit by the user.";
		qApp->quit();
	});
}

