/*
** Toy.hpp for ex03 in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD13-auguste.thomann/ex03
**
** Made by 
** Login   <>
**
** Started on  Tue Jan 19 18:45:17 2021 
** Last update Wed Jan 19 18:45:19 2021 
*/


#ifndef __TOY__
#define __TOY__

#include "Picture.hpp"

class Toy {
public:
    typedef enum ToyType_e {BASIC_TOY, ALIEN, BUZZ, WOODY} ToyType;
    explicit Toy() noexcept;
    explicit Toy(ToyType const toyType, std::string const &name, std::string const &filePath) noexcept;
    explicit Toy(Toy const &toy) noexcept;
    virtual ~Toy() noexcept;

    virtual void speak(std::string const &statement) noexcept;
    Toy &operator=(Toy const &toy);
    std::string const &getName() const noexcept;
    void setName(std::string const _name) noexcept;
    ToyType getType() const noexcept;
    bool setAscii(std::string const &fileName) noexcept;
    std::string getAscii() const noexcept;
    Picture const &getPicture() const noexcept;
protected:
    ToyType _toyType;
    std::string _name;
    Picture _picture;
};

#endif /* __TOY__ */
