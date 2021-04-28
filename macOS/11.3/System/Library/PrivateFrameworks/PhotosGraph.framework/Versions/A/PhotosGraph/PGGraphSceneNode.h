/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphOptimizedNode.h>
#import <libobjc.A.dylib/PGGraphLocalizable.h>
#import <libobjc.A.dylib/PGGraphSynonymSupport.h>

@class NSArray, NSString, PVSceneTaxonomyNode;

@interface PGGraphSceneNode : PGGraphOptimizedNode <PGGraphLocalizable, PGGraphSynonymSupport> {

	unsigned level : 8;
	NSString* _label;
	unsigned long long _level;
	PVSceneTaxonomyNode* _sceneTaxonomyNode;

}

@property (nonatomic,readonly) PVSceneTaxonomyNode * sceneTaxonomyNode;                      //@synthesize sceneTaxonomyNode=_sceneTaxonomyNode - In the implementation block
@property (nonatomic,readonly) unsigned sceneIdentifier; 
@property (nonatomic,readonly) unsigned long long level;                                     //@synthesize level=_level - In the implementation block
@property (nonatomic,readonly) char isIndexed; 
@property (nonatomic,readonly) char isSuitableForSuggestions; 
@property (nonatomic,readonly) unsigned long long numberOfAssets; 
@property (nonatomic,readonly) unsigned long long numberOfHighConfidenceAssets; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * localizedSynonyms; 
+(id)filter;
+(id)suggestionWhitelistedScenes;
+(char)isSceneSuitableForSuggestionsWithLabel:(id)arg1 ;
+(char)isSceneSuitableForSuggestionsWithIdentifier:(unsigned)arg1 confidence:(double)arg2 ;
-(NSString *)description;
-(unsigned short)domain;
-(NSString *)localizedName;
-(id)label;
-(unsigned long long)level;
-(id)initWithLabel:(id)arg1 ;
-(unsigned)sceneIdentifier;
-(char)isIndexed;
-(unsigned long long)numberOfAssets;
-(char)hasProperties:(id)arg1 ;
-(NSArray *)localizedSynonyms;
-(id)momentNodes;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(void)setLocalProperties:(id)arg1 ;
-(id)propertyDictionary;
-(unsigned long long)numberOfHighConfidenceAssets;
-(char)isSuitableForSuggestions;
-(PVSceneTaxonomyNode *)sceneTaxonomyNode;
@end

