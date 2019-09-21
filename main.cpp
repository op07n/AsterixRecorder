#include "AsterixRecorder.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	AsterixRecorder w;
	w.show();
	return a.exec();
}
