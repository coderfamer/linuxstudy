#include <iostream>
#include "mosquittopp.h"

using namespace std;
using namespace mosqpp;

class MqttClient : public mosqpp :: mosquittopp
{
public:
    MqttClient(const char *id, const char * host, int port);
    ~MqttClient();
    void send_message();
    void on_connect(int rc);
    void on_subscribe(int mid, int qos_count, const int *granted_qos);
    void on_disconnect(int rc);


};

MqttClient::MqttClient(const char *id, const char *host, int port) : mosquittopp(id)
{
    int keepalive = 60;

    connect(host, port, keepalive);
}

MqttClient::~MqttClient()
{

}

void MqttClient::on_connect(int rc)
{
    cout << "connected with code " << rc << endl;

    if (rc)
    {
        reconnect();
    }else{
        subscribe(NULL, "mqtt_server");
    }
}

void MqttClient::on_disconnect(int rc){
    cout << "on_disconnetc " << rc << endl;
}

void MqttClient::on_subscribe(int mid, int qos_count, const int *granted_qos)
{
    cout << "subscribe successed!!!" << endl;
}

void MqttClient :: send_message()
{
    cout << "please enter your message:" << endl;
    string msg;
    cin >> msg;


    publish(NULL, "mqtt_clinet", msg.size(), msg.c_str());
}

int main()
{

        mosqpp::lib_init();
        MqttClient *msg_send = new MqttClient("testsend", "localhost", 1883);

        while(1)
        {
            msg_send->loop();
            msg_send->send_message();
        }

        mosqpp::lib_cleanup();

        return 0;


}










