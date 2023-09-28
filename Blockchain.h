#include<cstdint>
#include<vector>
#include "Block.h"

using namespace std;

class Blockchain
{
    public:
    Blockchain();

    void AddBlock(Block bNew);
    void getval(Block bNew);

    private:
    uint32_t _ndifficulty;
    vector<Block> _vChain;

    Block _getLastBlock() const;   // output of the method cannot be changed
};

