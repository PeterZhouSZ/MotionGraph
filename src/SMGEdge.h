//
//  SMGEdge.h
//  
//
//  Created by NAOYAIWAMOTO on 25/10/2016.
//
//

#ifndef ____SMGEdge__
#define ____SMGEdge__

#include <stdio.h>
#include "SMGNode.h"

class SMGNode;

class SMGEdge
{
public:
    SMGEdge();
    ~SMGEdge();
    
    void setStartNode(SMGNode *node);
    void setDestNode(SMGNode *node);
    void setError(const float &errorValue);
    
    SMGNode *getStartNode() const;
    SMGNode *getDestNode() const;
    Euclid::Node *getStartMGNode() const;
    Euclid::Node *getDestMGNode() const;
    const float getError() const;
    
    static bool compareEdgeError(const SMGEdge* lhs, const SMGEdge* rhs);
    
private:
    float mError;
    SMGNode *mNode1;
    SMGNode *mNode2;
};

#endif /* defined(____SMGEdge__) */
