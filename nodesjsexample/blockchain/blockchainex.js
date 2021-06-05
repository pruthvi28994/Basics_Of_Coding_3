///creation blockchain using js
const SHA256 = require("crypto-js/sha256")
//creating new blocks for the blockchain
class Block{
    constructor(timestamp, data) {
        this.index = 0;
        this.timestamp = timestamp;
        this.data = data;
        this.previousHash = "0";
        this.hash = this.calculateHash();
         
    }
    calculateHash() {
        return SHA256(this.index + this.previousHash + this.timestamp + this.data + this.nonce).toString();
    }    
}

//creating blockchain class which holds all the nodes
class Blockchain{
    constructor() {
        this.chain = [this.createGenesis()];
    }

    createGenesis() {
        return new Block("01/01/2019", "Fist Block Genesis block", "0")
    }

    latestBlock() {
        return this.chain[this.chain.length - 1]
    }

    addBlock(newBlock){
        newBlock.previousHash = this.latestBlock().hash;
        newBlock.hash = newBlock.calculateHash();
        this.chain.push(newBlock);
    }

} 
//Blockchain
let jsChain = new Blockchain();
jsChain.addBlock(new Block("8/25/2019", {sender:"pruthvi",reciver:"shivanna",amount: 5}));
jsChain.addBlock(new Block("8/26/2019", {sender:"pruthvi",reciver:"kumari",amount: 10}));
jsChain.addBlock(new Block("7/22/2019",{sender:"pruthvi",reciver:"bhavani",amount:566}));
jsChain.addBlock(new Block("7/22/2019",{sender:"pruthvi",reciver:"bhavani",amount:56}));
console.log(JSON.stringify(jsChain, null, 4));
