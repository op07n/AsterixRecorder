#pragma once

#include <QtWidgets/QMainWindow>
#include <QUdpSocket>
#include "ui_AsterixRecorder.h"
#include <fstream>

class AsterixRecorder : public QMainWindow
{
	Q_OBJECT

public:
	AsterixRecorder(QWidget *parent = Q_NULLPTR);

private:
	Ui::AsterixRecorderClass ui;
	QUdpSocket *RecvSocket;
	std::ofstream OutFile;

public slots:
	void BtnSelRecFile_Clicked(void);
	void BtnListen_Clicked(void);
	void BtnRecord_Clicked(void);
	void RecvPacket(void);
};
