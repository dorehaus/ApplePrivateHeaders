/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphOptimizedEdge.h>

@interface PGGraphPOIEdge : PGGraphOptimizedEdge {

	unsigned _poiIsImproved : 2;
	unsigned _poiIsSpecial : 2;
	float _weight;

}

@property (assign,nonatomic) float weight;                     //@synthesize weight=_weight - In the implementation block
@property (assign,nonatomic) char poiIsImproved;               //@synthesize poiIsImproved=_poiIsImproved - In the implementation block
@property (nonatomic,readonly) char poiIsSpecial;              //@synthesize poiIsSpecial=_poiIsSpecial - In the implementation block
+(id)filter;
-(unsigned short)domain;
-(id)label;
-(float)weight;
-(void)setWeight:(float)arg1 ;
-(char)hasProperties:(id)arg1 ;
-(id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 ;
-(id)edgeDescription;
-(void)setLocalProperties:(id)arg1 ;
-(id)propertyDictionary;
-(id)initFromMomentNode:(id)arg1 toPOINode:(id)arg2 weight:(float)arg3 ;
-(void)setPoiIsImproved:(char)arg1 ;
-(char)poiIsImproved;
-(char)poiIsSpecial;
@end

