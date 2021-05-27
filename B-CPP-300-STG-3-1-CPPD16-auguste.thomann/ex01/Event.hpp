/*
** Event.hpp for B-CPP-300-STG-3-1-CPPD16-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD16-auguste.thomann/ex01
**
** Made by 
** Login   <>
**
** Started on  Thu Jan 21 17:02:23 2021 
** Last update Fri Jan 21 17:03:09 2021 
*/

class Event
{
public:
    Event();
    Event(unsigned int time, const std::string &event);
    ~Event();
    Event(const Event &other);

    unsigned int getTime() const;
    const std::string &getEvent() const;

    void setTime(unsigned int time);
    void setEvent(const std::string &event);

    Event &operator=(const Event &rhs);

private:
    unsigned int _time;
    std::string _event;
};
