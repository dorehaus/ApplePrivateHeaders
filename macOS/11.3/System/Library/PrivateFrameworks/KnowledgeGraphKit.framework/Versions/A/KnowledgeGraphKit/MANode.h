/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/Versions/A/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
#import <libobjc.A.dylib/KGNode.h>
#import <libobjc.A.dylib/MAElement.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MANodeImplementationProtocol;
@class MABaseGraph, NSString, MAGraphReference, NSArray, NSDictionary;

@interface MANode : NSObject <KGNode, MAElement, NSCopying> {

	unsigned _identifier;
	MAGraphReference* _graphReference;
	id<MANodeImplementationProtocol> _implementation;

}

@property (nonatomic,readonly) unsigned long long identifier; 
@property (nonatomic,readonly) float weight; 
@property (nonatomic,copy,readonly) NSArray * labels; 
@property (nonatomic,copy,readonly) NSDictionary * properties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MAGraphReference * graphReference;                            //@synthesize graphReference=_graphReference - In the implementation block
@property (assign,nonatomic) unsigned identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) id<MANodeImplementationProtocol> implementation;              //@synthesize implementation=_implementation - In the implementation block
@property (assign,nonatomic) float weight; 
@property (nonatomic,__weak,readonly) MABaseGraph * graph; 
@property (nonatomic,copy,readonly) NSString * label; 
@property (nonatomic,readonly) unsigned short domain; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(unsigned long long)identifier;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(void)removePropertyForKey:(id)arg1 ;
-(id)shortDescription;
-(NSDictionary *)properties;
-(void)setProperties:(NSDictionary *)arg1 ;
-(NSArray *)labels;
-(MABaseGraph *)graph;
-(char)isUnique;
-(id<MANodeImplementationProtocol>)implementation;
-(void)enumeratePropertiesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)propertiesCount;
-(char)hasProperties;
-(id)propertyKeys;
-(char)isEqualToNode:(id)arg1 ;
-(void)setImplementation:(id<MANodeImplementationProtocol>)arg1 ;
-(void)removeAllProperties;
-(id)allEdges;
-(void)removeEdge:(id)arg1 ;
-(char)hasProperties:(id)arg1 ;
-(id)edgesForLabel:(id)arg1 ;
-(void)enumerateEdgesWithLabel:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)hasEdgeTowardNode:(id)arg1 ;
-(char)hasEdgeFromNode:(id)arg1 ;
-(void)enumerateNeighborNodesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)countOfEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)anyNeighborNodeThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(void)enumerateNeighborNodesThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)neighborNodesThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(void)setPropertyValue:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)countOfEdgesWithLabel:(id)arg1 ;
-(char)hasEdgeWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(void)updatePersistedWeight:(float)arg1 ;
-(char)isSameNodeAsNode:(id)arg1 ;
-(id)anyEdgeTowardNode:(id)arg1 ;
-(void)enumerateDeepNeighborsWithLabel:(id)arg1 domain:(unsigned short)arg2 edgeType:(unsigned long long)arg3 excluding:(id)arg4 shouldStop:(char*)arg5 block:(/*^block*/id)arg6 ;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(void)setLocalProperties:(id)arg1 ;
-(id)propertyDictionary;
-(void)enumerateOutEdgesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateNeighborNodesThroughOutEdgesUsingBlock:(/*^block*/id)arg1 ;
-(id)edgesForLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)anyNeighborNodeThroughInEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)anyEdgeFromNode:(id)arg1 ;
-(id)anyNeighborNodeThroughOutEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(unsigned long long)edgesCount;
-(unsigned long long)outEdgesCount;
-(void)enumerateNeighborNodesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(char)isIdentifiedByProperties:(id)arg1 ;
-(void)mergeProperties:(id)arg1 ;
-(id)associatedNodesForRemoval;
-(void)enumerateNeighborNodesThroughInEdgesUsingBlock:(/*^block*/id)arg1 ;
-(id)anyNeighborNodeThroughInEdges;
-(id)anyEdgeWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)anyNeighborNodeThroughOutEdges;
-(unsigned long long)inEdgesCount;
-(void)enumerateInEdgesUsingBlock:(/*^block*/id)arg1 ;
-(id)edgesTowardNode:(id)arg1 ;
-(id)edgesFromNode:(id)arg1 ;
-(id)siblingNodesThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)neighborNodes;
-(void)enumerateSiblingNodesThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateNeighborNodesThroughEdgesWithDomains:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateSiblingNodesThroughEdgesWithDomains:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateEdgesUsingBlock:(/*^block*/id)arg1 ;
-(id)neighborNodesWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)propertyForKey:(id)arg1 kindOfClass:(Class)arg2 ;
-(id)visualString;
-(char)matchesNode:(id)arg1 includingProperties:(char)arg2 ;
-(char)hasEdgeWithNode:(id)arg1 ;
-(id)visualStringWithName:(id)arg1 andPropertyKeys:(id)arg2 ;
-(id)edgesWithNode:(id)arg1 ;
-(id)shortestPathToNode:(id)arg1 directed:(char)arg2 ;
-(id)neighborNodesThroughOutEdges;
-(id)neighborNodesThroughInEdges;
-(unsigned long long)memoryFootprint:(id)arg1 ;
-(id)neighborNodesThroughEdgesWithLabel:(id)arg1 ;
-(void)addEdge:(id)arg1 ;
-(id)initWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 weight:(float)arg3 properties:(id)arg4 ;
-(void)setGraphReference:(MAGraphReference *)arg1 ;
-(char)hasEqualPropertiesToNode:(id)arg1 ;
-(char)isOrphan;
-(id)anyEdgeWithNode:(id)arg1 ;
-(id)anyEdgeWithLabel:(id)arg1 ;
-(char)hasEdgeWithLabel:(id)arg1 ;
-(void)enumerateEdgesOfType:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateEdgesWithDomains:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateNeighborNodesThroughEdgesOfType:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateNeighborNodesThroughEdgesWithLabel:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)hasEdge:(id)arg1 isIn:(char*)arg2 ;
-(id)anyNeighborNodeThroughEdgesWithLabel:(id)arg1 ;
-(id)siblingNodesThroughEdgesWithLabel:(id)arg1 ;
-(void)enumerateSiblingNodesThroughEdgesWithLabel:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)visualStringWithName:(id)arg1 ;
-(MAGraphReference *)graphReference;
-(char)conformsToNodeSchema:(id)arg1 ;
@end
