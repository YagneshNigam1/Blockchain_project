//#include "Blockchain.h"
#include "file_save.h"
Blockchain::Blockchain()
{
    _vChain.emplace_back(Block(0,"Genesis Block"));
    _ndifficulty=6;
}

void Blockchain::AddBlock(Block bNew)
{
    bNew.sPrevHash=_getLastBlock().GetHash();
    
    bNew.MineBlock(_ndifficulty);
    //bNew.getval();
    getval(bNew);
    _vChain.push_back(bNew);
}

void Blockchain::getval(Block bNew)
{
     cout<<bNew.GetHash()<<endl;
     filesave file;
     file.file_write(bNew);

} 

Block Blockchain::_getLastBlock() const
{
    return _vChain.back();
}
