#include <qobject.h>
#include <qudpsocket.h>
#include <Qtime>
#include "UDPListener.h"

class UDPListener : public QObject
{
	Q_OBJECT
private:
	QUdpSocket* RecvSocket;

public:
	UDPListener()
	{
		RecvSocket = new QUdpSocket(this);
	}

	~UDPListener()
	{
		delete RecvSocket;
	}

public slots:
	void StartListening(const QHostAddress& Address, quint16 port = 0)
	{
		for (int i = 0; i < 25; i++)
		{
			QTime t = QTime::currentTime();
			t = t.addSecs(2);
			while (t > QTime::currentTime())
			{

			}
			emit PacketReceived();
		}
	}

signals:
	void PacketReceived(void);

};