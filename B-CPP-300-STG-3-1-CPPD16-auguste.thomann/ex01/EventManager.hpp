/*
** EventManager.hpp for B-CPP-300-STG-3-1-CPPD16-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD16-auguste.thomann/ex01
**
** Made by 
** Login   <>
**
** Started on  Thu Jan 21 17:03:25 2021 
** Last update Fri Jan 21 17:15:31 2021 
*/


class EventManager
{
public:
    EventManager();
    ~EventManager();
    EventManager(EventManager const &other);

    void addEvent(const Event &e);
    void removeEventsAt(unsigned int time);
    void dumpEvents() const;
    void dumpEventAt(unsigned int time) const;
    void addTime(unsigned int time);
    void addEventList(const std::list<Event> &events);

    EventManager &operator=(EventManager const &rhs);

private:
    std::list<Event> _eventList;
};