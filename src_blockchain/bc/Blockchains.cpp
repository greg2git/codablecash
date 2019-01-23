/*
 * Blockchains.cpp
 *
 *  Created on: 2019/01/01
 *      Author: iizuka
 */

#include "bc/Blockchains.h"
#include "bc/BlockchainsConfig.h"
#include "bc_network/NetworkShardsStatus.h"
#include "flash/FlashBlockchain.h"
#include "main/Blockchain.h"

#include "base/StackRelease.h"
#include "base_io/File.h"

namespace codablecash {

Blockchains::Blockchains(const BlockchainsConfig* config) {
	this->config = new BlockchainsConfig(*config);
	this->shardStatus = nullptr;
	this->flashChain = nullptr;
	this->blockchain = nullptr;
	this->baseDir = new File(*config->baseFolder);
}

Blockchains::~Blockchains() {
	delete this->config;
	if(this->shardStatus != nullptr){
		delete this->shardStatus;
	}
	if(this->flashChain != nullptr){
		delete this->flashChain;
	}
	if(this->blockchain != nullptr){
		delete this->blockchain;
	}
	if(this->baseDir != nullptr){
		delete this->baseDir;
	}
}

void Blockchains::init() {
	this->shardStatus = new NetworkShardsStatus(this->config->numShards);

	File* flashBase = this->baseDir->get(L"flash");
	StackRelease<File> __st_flashBase(flashBase);

	this->flashChain = new FlashBlockchain(flashBase);
	this->blockchain = new Blockchain();

}

} /* namespace codablecash */
