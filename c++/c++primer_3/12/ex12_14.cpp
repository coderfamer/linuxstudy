#include <iostream>
#include <memory>
#include <string>

using namespace  std;

struct connection{
    string ip;
    int port;
    connection(string ip_, int port_) : ip(ip_), port(port_) {}
};

struct destination
{
    string ip;
    int port;
    destination(string ip_, int port_) : ip(ip_), port(port_) {}
};

connection connect(destination *pDest)
{
    shared_ptr<connection> pConn(new connection(pDest->ip, pDest->port));
    cout << "create connection( " << pConn.use_count() << ")" << endl;
    return *pConn;
}

void disconnect(connection pConn)
{
    cout << "connection close(" << pConn.ip << ":" << pConn.port << ")" << endl;
}

void end_connection(connection *pConn)
{
    disconnect(*pConn);
}

void f(destination &d)
{
    connection conn = connect(&d);
    shared_ptr<connection> p(&conn, end_connection);
    cout << "connecting noew(" << p.use_count() << ")" << endl;
}

int main()
{
    destination dest("202.118.176.67", 3316);
    f(dest);

    return 0;
}
