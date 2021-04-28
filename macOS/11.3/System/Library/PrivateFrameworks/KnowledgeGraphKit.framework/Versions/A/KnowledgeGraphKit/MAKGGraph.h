/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/Versions/A/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeGraphKit/MABaseGraph.h>

@class KGGraph, NSMutableDictionary;

@interface MAKGGraph : MABaseGraph {

	KGGraph* _graph;
	NSMutableDictionary* _labelByDomain;
	NSMutableDictionary* _domainByLabel;

}

@property (nonatomic,readonly) KGGraph * graph;              //@synthesize graph=_graph - In the implementation block
+(Class)persistentStoreClass;
+(void)disableKGDB;
+(void)enableKGDB;
+(char)copyPersistentStoreFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(id)persistentStoreURLWithPath:(id)arg1 andName:(id)arg2 ;
+(void)deleteMarker:(id)arg1 ;
+(char)destroyPersistentStoreAtURL:(id)arg1 error:(id*)arg2 ;
+(char)hasMarker:(id)arg1 ;
+(char)setMarkerAtURL:(id)arg1 ;
+(char)migratePersistentStoreFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(id)persistentStoreFileExtension;
-(id)description;
-(id)identifier;
-(unsigned long long)version;
-(void)setVersion:(unsigned long long)arg1 ;
-(id)initWithDataRepresentation:(id)arg1 ;
-(id)databaseURL;
-(KGGraph *)graph;
-(id)initWithSpecification:(id)arg1 ;
-(id)allNodes;
-(void)removeNode:(id)arg1 ;
-(void)enumerateEdgesWithBlock:(/*^block*/id)arg1 ;
-(void)readUsingBlock:(/*^block*/id)arg1 ;
-(Class)nodeClass;
-(id)allEdges;
-(void)removeEdge:(id)arg1 ;
-(void)removeNodeEdges:(id)arg1 ;
-(id)addNodeWithLabel:(id)arg1 ;
-(void)removeNodes:(id)arg1 ;
-(id)nodesForLabel:(id)arg1 ;
-(void)enumerateNodesWithBlock:(/*^block*/id)arg1 ;
-(void)removeEdges:(id)arg1 ;
-(id)edgesForLabel:(id)arg1 ;
-(void)invalidateMemoryCaches;
-(void)closePersistentStore;
-(void)enumerateNodesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)neighborNodesThroughEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)addUniqueEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6 ;
-(id)addUniqueNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 didCreate:(char*)arg5 ;
-(id)anyNodeForLabel:(id)arg1 ;
-(void)setMarker;
-(id)edgesForLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(void)persistModelProperty:(id)arg1 forKey:(id)arg2 forNodeWithIdentifier:(unsigned)arg3 ;
-(void)deleteMarker;
-(unsigned long long)edgesCount;
-(void)persistWeight:(float)arg1 forEdgeWithIdentifier:(unsigned)arg2 ;
-(void)leaveBatch;
-(void)enterBatch;
-(id)nodesForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(id)anyNodeForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(void)persistModelProperties:(id)arg1 forNodeWithIdentifier:(unsigned)arg2 clobberExisting:(char)arg3 ;
-(unsigned long long)edgesCountForLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(id)nodeForIdentifier:(unsigned)arg1 ;
-(void)enumerateNodesWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(char)savePersistentStore;
-(id)addNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 ;
-(void)persistModelProperty:(id)arg1 forKey:(id)arg2 forEdgeWithIdentifier:(unsigned)arg3 ;
-(unsigned long long)nodesCount;
-(char)hasMarker;
-(id)nodesForIdentifiers:(id)arg1 ;
-(void)enumerateNodesInDomain:(unsigned short)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)nodesForDomain:(unsigned short)arg1 ;
-(void)enumerateEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(char)copyPersistentStoreToURL:(id)arg1 error:(id*)arg2 ;
-(id)nodeIdentifiersRelatedToSourceNodeIdentifiers:(id)arg1 relation:(id)arg2 ;
-(id)addUniquelyIdentifiedNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 didCreate:(char*)arg5 ;
-(id)nodesDomains;
-(unsigned long long)nodesCountForDomain:(unsigned short)arg1 ;
-(id)edgesDomains;
-(id)nodesLabels;
-(id)edgesLabels;
-(char)hasPendingRead;
-(id)addEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6 ;
-(id)abstractEdges;
-(unsigned long long)memoryFootprint:(id)arg1 ;
-(id)addNodeFromBase:(id)arg1 ;
-(id)nodeIdentifiersMatchingFilter:(id)arg1 ;
-(id)nodesMatchingFilter:(id)arg1 ;
-(unsigned long long)nodesCountForLabel:(id)arg1 ;
-(id)anyNodeMatchingFilter:(id)arg1 ;
-(unsigned long long)numberOfNodesMatchingFilter:(id)arg1 ;
-(unsigned long long)nodesCountForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(id)nodesForDomain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)nodesForDomains:(id)arg1 ;
-(void)enumerateNodesWithIdentifiers:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateNodesMatchingFilter:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)neighborNodesThroughEdgesWithLabel:(id)arg1 ;
-(id)orphanNodes;
-(char)edgesStoreWeakReferencesToNodes;
-(id)edgeForIdentifier:(unsigned)arg1 ;
-(id)edgesForIdentifiers:(id)arg1 ;
-(id)edgeIdentifiersMatchingFilter:(id)arg1 ;
-(id)edgesMatchingFilter:(id)arg1 ;
-(unsigned long long)numberOfEdgesMatchingFilter:(id)arg1 ;
-(id)edgesForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(id)edgesForDomain:(unsigned short)arg1 ;
-(unsigned long long)edgesCountForDomain:(unsigned short)arg1 ;
-(id)edgesForDomains:(id)arg1 ;
-(unsigned long long)edgesCountForLabel:(id)arg1 ;
-(unsigned long long)edgesCountForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(void)enumerateEdgesWithIdentifiers:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateEdgesMatchingFilter:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateEdgesInDomain:(unsigned short)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateNodesRelatedToNodeWithIdentifier:(unsigned)arg1 withRelation:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(unsigned long long)countOfNodesRelatedToNodesWithIdentifiers:(id)arg1 relation:(id)arg2 ;
-(void)writeUsingBlock:(/*^block*/id)arg1 ;
-(char)hasPendingWrite;
-(void)waitUntilQuiescentUsingBlock:(/*^block*/id)arg1 ;
-(id)labelsForLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(void)labelAndDomainFromLabels:(id)arg1 outLabel:(id*)arg2 outDomain:(unsigned short*)arg3 ;
-(void)populateEntityDescription:(id)arg1 fromGraphSpecification:(id)arg2 ;
-(id)maNodeFromKGNode:(id)arg1 ;
-(id)maNodesFromKGNodeCollection:(id)arg1 ;
-(id)maEdgeFromKGEdge:(id)arg1 ;
-(id)maEdgesFromKGEdgeCollection:(id)arg1 ;
-(id)_addNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 ;
-(id)_nodeIdentifiersWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(id)_addEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6 ;
-(id)_edgeIdentifiersForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(id)_anyEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6 ;
-(id)edgesOfType:(unsigned long long)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 ;
-(id)edgesWithLabel:(id)arg1 inDomain:(unsigned short)arg2 onNode:(id)arg3 edgeDirection:(unsigned long long)arg4 ;
-(unsigned long long)countOfEdgesOfType:(unsigned long long)arg1 withLabel:(id)arg2 domain:(unsigned short)arg3 properties:(id)arg4 startNode:(id)arg5 ;
-(void)savePersistentStoreWithCompletion:(/*^block*/id)arg1 ;
-(char)migratePersistentStoreToURL:(id)arg1 error:(id*)arg2 ;
-(void)removeModelPropertyForKey:(id)arg1 forNodeWithIdentifier:(unsigned)arg2 ;
-(void)removeModelPropertiesForNodeWithIdentifier:(unsigned)arg1 ;
-(void)persistModelProperties:(id)arg1 forEdgeWithIdentifier:(unsigned)arg2 clobberExisting:(char)arg3 ;
-(void)removeModelPropertyForKey:(id)arg1 forEdgeWithIdentifier:(unsigned)arg2 ;
-(void)removeModelPropertiesForEdgeWithIdentifier:(unsigned)arg1 ;
-(void)persistWeight:(float)arg1 forNodeWithIdentifier:(unsigned)arg2 ;
-(char)compareWithPersistedState;
-(id)nodeFromFetchedRowWithIdentifier:(int)arg1 domain:(short)arg2 label:(id)arg3 weight:(float)arg4 ;
-(id)edgeFromFetchedRowWithIdentifier:(int)arg1 domain:(short)arg2 label:(id)arg3 weight:(float)arg4 sourceNodeIdentifier:(int)arg5 targetNodeIdentifier:(int)arg6 ;
-(void)loadDomains:(id)arg1 ;
-(void)unloadDomains:(id)arg1 ;
-(id)initWithSpecification:(id)arg1 persistenceStoreURL:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(void)unloadEdge:(id)arg1 ;
-(void)mergeWithGraph:(id)arg1 strictNodes:(char)arg2 strictEdges:(char)arg3 saveToDatabase:(char)arg4 createdNodes:(out id*)arg5 createdEdges:(out id*)arg6 ;
-(id)initWithSpecification:(id)arg1 dataURL:(id)arg2 ;
-(id)initWithGraphMLURL:(id)arg1 ;
-(id)initWithGraphJSONURL:(id)arg1 ;
-(void)_loadWithGraphDictionary:(id)arg1 ;
-(void)_instantiateGraphWithStoreAtURL:(id)arg1 ;
@end

