#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
    private:
        Brain* brain;
    public:
        Dog();
        Dog(const Dog& copy);
        Dog &operator=(const Dog& assign);
        ~Dog();

        void makeSound() const;
        void setIdea(std::string _idea, int i);
        std::string getIdea(int i);
};

#endif