#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {}

void TargetGenerator::learnTargetType(ATarget * target)
{
	this->targets.push_back(target);
}

void TargetGenerator::forgetTargetType(std::string const targettype)
{
	for (std::vector<ATarget *>::iterator it = this->targets.begin(); it != this->targets.end(); it++)
		if (targettype == (*it)->getType())
        {
            this->targets.erase(it);
            break;
       }
}

ATarget * TargetGenerator::createTarget(std::string targettype)
{
      for (std::vector<ATarget *>::iterator it = this->targets.begin(); it != this->targets.end(); it++)
          if (targettype == (*it)->getType())
              return *it;
 
     return NULL;
}

