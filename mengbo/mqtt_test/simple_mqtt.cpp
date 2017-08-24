#include <iostream>
#include <cstring>
#include "mosquittopp.h"

using namespace std;

class myMosq : public mosqpp :: mosquittopp
{
private:
    const char *m_host;
    const char *m_id;
    const char *m_topic;
    int m_port;
    int m_keepalive;
public:
    void on_connect(int rc);
    void on_disconnect(int rc);
    void on_publish(int mid);

public:
    myMosq(const char *id, const char *topic, const char *host, int port);
    ~myMosq();
    bool send_message(const char *message);
};

myMosq::myMosq(const char *id, const char *topic, const char *host, int port) : mosquittopp(id)
{
    mosqpp::lib_init();
    this->m_keepalive = 10;
    this->m_id = id;
    this->m_port = port;
    this->m_host = host;
    this->m_topic = topic;

    connect_async(m_host, m_port, m_keepalive);
    loop_start();
}

myMosq::~myMosq()
{
    loop_stop();
    mosqpp::lib_cleanup();
}

bool myMosq::send_message(const char *message)
{
    int ret = publish(NULL, this->m_topic, strlen(message), message, 1, false);
    return (ret == MOSQ_ERR_SUCCESS);
}

void myMosq::on_disconnect(int rc)
{
    cout << " >> mymosq - disconnection(" << rc << ")" << endl;
}

void myMosq::on_connect(int rc)
{
    if (rc == 0)
    {
        cout << " >> mymosq - connected with server" << endl;
    }else{
        cout << " >> mymosq - Impossible to connect with server(" << rc << ")" << endl;
    }
}

void myMosq::on_publish(int mid)
{
    cout << " >> mymosq - message (" << mid << ") succeed to be published" << endl;
}

int main()
{
    //myMosq mymosq;
    //mymosq = new myMosq("my_mosq", "topic", "localhost", 1883);
    myMosq mymosq("my_mosq", "topic", "localhost", 1883);
    char *message = "hello mqtt, this is my publish ";

    mymosq.send_message(message);
    cout << "about mqtt deletedd" << endl;
    //delete mymosq;
    cout << "mymosq deleted" << endl;
    return 0;
}


















