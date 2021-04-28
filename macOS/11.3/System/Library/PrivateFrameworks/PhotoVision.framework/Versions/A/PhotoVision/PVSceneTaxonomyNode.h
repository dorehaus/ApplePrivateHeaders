/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/Versions/A/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PVSceneTaxonomy, NSString, NSMutableSet, NSSet;

@interface PVSceneTaxonomyNode : NSObject {

	char _indexed;
	unsigned _sceneClassId;
	PVSceneTaxonomy* _taxonomy;
	NSString* _name;
	double _threshold;
	double _highRecallThreshold;
	double _highPrecisionThreshold;
	NSMutableSet* _parentNodes;
	NSMutableSet* _childNodes;
	NSMutableSet* _detectorNodes;

}

@property (retain) NSMutableSet * parentNodes;                        //@synthesize parentNodes=_parentNodes - In the implementation block
@property (retain) NSMutableSet * childNodes;                         //@synthesize childNodes=_childNodes - In the implementation block
@property (retain) NSMutableSet * detectorNodes;                      //@synthesize detectorNodes=_detectorNodes - In the implementation block
@property (readonly) PVSceneTaxonomy * taxonomy;                      //@synthesize taxonomy=_taxonomy - In the implementation block
@property (readonly) unsigned sceneClassId;                           //@synthesize sceneClassId=_sceneClassId - In the implementation block
@property (copy,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (getter=isIndexed,readonly) char indexed;                   //@synthesize indexed=_indexed - In the implementation block
@property (readonly) double threshold;                                //@synthesize threshold=_threshold - In the implementation block
@property (readonly) double highRecallThreshold;                      //@synthesize highRecallThreshold=_highRecallThreshold - In the implementation block
@property (readonly) double highPrecisionThreshold;                   //@synthesize highPrecisionThreshold=_highPrecisionThreshold - In the implementation block
@property (readonly) double graphHighPrecisionThreshold; 
@property (readonly) double graphHighRecallThreshold; 
@property (copy,readonly) NSSet * parents; 
@property (copy,readonly) NSSet * children; 
@property (copy,readonly) NSSet * detectors; 
@property (getter=isRoot,readonly) char root; 
+(id)localizedStringForKey:(id)arg1 localizationBundle:(id)arg2 tableName:(id)arg3 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(NSSet *)children;
-(NSSet *)parents;
-(NSMutableSet *)childNodes;
-(void)setChildNodes:(NSMutableSet *)arg1 ;
-(double)threshold;
-(char)isRoot;
-(void)addChildNode:(id)arg1 ;
-(id)localizedLabel;
-(char)isEqualToNode:(id)arg1 ;
-(char)isIndexed;
-(double)highPrecisionThreshold;
-(double)highRecallThreshold;
-(unsigned)sceneClassId;
-(id)initWithSceneClassId:(unsigned)arg1 name:(id)arg2 indexed:(char)arg3 threshold:(double)arg4 highRecallThreshold:(double)arg5 highPrecisionThreshold:(double)arg6 taxonomy:(id)arg7 ;
-(NSSet *)detectors;
-(void)addDetectorNode:(id)arg1 ;
-(void)recursivelyReleaseParents;
-(void)traverse:(long long)arg1 visitor:(/*^block*/id)arg2 ;
-(id)localizedSynonyms;
-(double)graphHighPrecisionThreshold;
-(double)graphHighRecallThreshold;
-(PVSceneTaxonomy *)taxonomy;
-(NSMutableSet *)parentNodes;
-(void)setParentNodes:(NSMutableSet *)arg1 ;
-(NSMutableSet *)detectorNodes;
-(void)setDetectorNodes:(NSMutableSet *)arg1 ;
@end

