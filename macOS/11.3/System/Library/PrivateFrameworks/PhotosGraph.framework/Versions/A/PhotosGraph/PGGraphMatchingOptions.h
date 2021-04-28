/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSArray;

@interface PGGraphMatchingOptions : NSObject {

	char _needsKeywords;
	unsigned short _targetEventDomain;
	unsigned long long _relatedType;
	NSSet* _focusedNodes;
	NSArray* _sortDescriptors;

}

@property (assign,nonatomic) unsigned long long relatedType;                //@synthesize relatedType=_relatedType - In the implementation block
@property (assign,nonatomic) unsigned short targetEventDomain;              //@synthesize targetEventDomain=_targetEventDomain - In the implementation block
@property (nonatomic,retain) NSSet * focusedNodes;                          //@synthesize focusedNodes=_focusedNodes - In the implementation block
@property (nonatomic,retain) NSArray * sortDescriptors;                     //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (assign,nonatomic) char needsKeywords;                            //@synthesize needsKeywords=_needsKeywords - In the implementation block
+(unsigned short)defaultTargetEventDomain;
+(id)optionsWithRelatedType:(unsigned long long)arg1 ;
-(id)init;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(unsigned long long)relatedType;
-(void)setRelatedType:(unsigned long long)arg1 ;
-(unsigned short)targetEventDomain;
-(void)setTargetEventDomain:(unsigned short)arg1 ;
-(NSSet *)focusedNodes;
-(void)setFocusedNodes:(NSSet *)arg1 ;
-(char)needsKeywords;
-(void)setNeedsKeywords:(char)arg1 ;
@end

