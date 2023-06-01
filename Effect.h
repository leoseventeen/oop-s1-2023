class Cell; 

class Effect {
public:
    virtual void apply(Cell& cell) = 0;
};
