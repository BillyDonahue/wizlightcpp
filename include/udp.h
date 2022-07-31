#include <iostream>

class UDPSocket
{

public:
    UDPSocket();
    ~UDPSocket();
    std::string sendUDPCommand(const std::string& msg, const std::string& targetIp, 
    const u_int16_t port);

private:
    bool initializeUDPSocket();
    std::string parseResponse(std::string);

    int m_bCastSock;
};