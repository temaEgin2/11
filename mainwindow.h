#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTWidgets>
class QLabel;
class QTimer;

class MainWindow : public QMainWindow{
	public:
		MainWindow();
		void openButtonClick();
	protected:
		void paintEvent(QPaintEvent *event);
	private:
		QLabel *pathLabel;
		QPushButton *openButton;
		QLineEdit *pathEdit;
		QPainter *painter;
		QPixmap pixmap;
		QString imgPath;
	};


#endif // MAINWINDOW_H
