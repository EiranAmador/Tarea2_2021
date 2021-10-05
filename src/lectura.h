#ifndef LECTURA_H
#define LECTURA_H

class lectura{
    
    protected:
    lectura() { }

    public:
    ~lectura() {}
    virtual int leer() = 0;   
};

#endif