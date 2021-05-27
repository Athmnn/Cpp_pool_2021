/*
** Toy.hpp for ex03 in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD13-auguste.thomann/ex03
**
** Made by 
** Login   <>
**
** Started on  Tue Jan 19 18:45:17 2021 
** Last update Wed Jan 19 18:56:43 2021 
*/


#ifndef __TOY__
#define __TOY__

#include "Picture.hpp"

class Toy {
public:
    typedef enum ToyType_e {BASIC_TOY, ALIEN, BUZZ, WOODY} ToyType;
    explicit Toy();
    explicit Toy(ToyType const toyType, std::string const &name, std::string const &filePath);
    explicit Toy(Toy const &toy);
    virtual ~Toy();

    virtual void speak(std::string const &statement);
    Toy &operator=(Toy const &toy);
    std::string const &getName() const;
    void setName(std::string const _name);
    ToyType getType() const;
    bool setAscii(std::string const &fileName);
    std::string getAscii() const;
    Picture const &getPicture() const;
protected:
    ToyType _toyType;
    std::string _name;
    Picture _picture;
};

#endif /* __TOY__ */
