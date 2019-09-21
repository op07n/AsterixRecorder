#include "AsterixRecorder.h"
#include <qfiledialog.h>
#include <windows.h>

AsterixRecorder::AsterixRecorder(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	RecvSocket = new QUdpSocket(this);
	connect(RecvSocket, SIGNAL(readyRead()), this, SLOT(RecvPacket()));

	connect(ui.BtnSelRecFile, &QAbstractButton::clicked, this, &AsterixRecorder::BtnSelRecFile_Clicked);
	connect(ui.BtnListen, &QAbstractButton::clicked, this, &AsterixRecorder::BtnListen_Clicked);
	connect(ui.BtnRecord, &QAbstractButton::clicked, this, &AsterixRecorder::BtnRecord_Clicked);
}

void AsterixRecorder::BtnSelRecFile_Clicked(void)
{
	QString filename = QFileDialog::getSaveFileName(
		this,
		"Save as",
		QDir::currentPath(),
		"ASTERIX files (*.asx);; All files (*.*)");
	if (!filename.isNull())
	{
		ui.EdRecFileName->setText(filename);
		ui.plainTextEdit->appendPlainText("Selected file to save data");
	}
	
}

void AsterixRecorder::BtnListen_Clicked(void)
{
	if (ui.BtnListen->text() == "Start listening")
	{
		ui.plainTextEdit->appendPlainText("Started listening");
		ui.BtnListen->setText("Stop listening");
		RecvSocket->bind(QHostAddress::Any, ui.EdRecvPort->text().trimmed().toInt());
	}
	else
	{
		ui.plainTextEdit->appendPlainText("Stoped listening");
		ui.BtnListen->setText("Start listening");
		RecvSocket->close();
	}
}

void AsterixRecorder::BtnRecord_Clicked(void)
{
	if ((ui.BtnRecord->text() == "Start recording") && (ui.EdRecFileName->text().length() != 0))
	{
		char* RecFileName;
		RecFileName = new char[ui.EdRecFileName->text().length() + 1];

		for (int i = 0; i < ui.EdRecFileName->text().length(); i++)
		{
			RecFileName[i] = ui.EdRecFileName->text().data()[i].toLatin1();
			RecFileName[ui.EdRecFileName->text().length()] = 0x00;
		}

		ui.plainTextEdit->appendPlainText("Started recording");
		ui.BtnRecord->setText("Stop recording");
		OutFile.open(RecFileName, std::ofstream::out | std::ofstream::binary);		
	}
	else
	{
		ui.plainTextEdit->appendPlainText("Stoped recording");
		ui.BtnRecord->setText("Start recording");
		OutFile.flush();
		OutFile.close();
	}
}

void AsterixRecorder::RecvPacket(void)
{
	char * RecvData;
	uint16_t RecvDataSize;

	while (RecvSocket->hasPendingDatagrams())
	{
		RecvDataSize = RecvSocket->pendingDatagramSize();
		RecvData = new char[RecvDataSize];

		RecvSocket->readDatagram(RecvData, RecvDataSize);
		ui.plainTextEdit->appendPlainText("UDP packet received. Packet size: " + QString::number(RecvDataSize) + " bytes.");
		//ui.plainTextEdit->appendPlainText("Category: " + QString::number(RecvData[0]));
		if (OutFile.is_open())
		{
			if ((RecvData[0] == 1) || (RecvData[0] == 2) || (RecvData[0] == -6))
			{
				OutFile.write(RecvData, RecvDataSize);
			}
		}

		delete[] RecvData;
	}
	
}

//MessageBox((HWND)this->winId(), (LPCWSTR)L"Button ckicked!", (LPCWSTR)L"Notification", MB_OK + MB_ICONINFORMATION);