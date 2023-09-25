#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

// System includes
#include <memory>

// Qt includes
#include <QMainWindow>
#include <QMenuBar>

// Project includes
#include "./ui_MainWindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = nullptr);

private:
	std::unique_ptr<Ui::MainWindow> ui;
	std::unique_ptr<QMenuBar> primaryMenuBar;
};
#endif // MAINWINDOW_HPP
