/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSTables/TSTables-Structs.h>
@class NSHashTable, TSTCellRegion, TSKShuffleMapping, NSSet;

@interface TSTChangeDescriptor : NSObject {

	char _processedByLayoutEngine;
	int _changeDescriptor;
	NSHashTable* _referenceIdentifiers;
	TSTCellRegion* _cellRegion;
	TSUCellCoord _cellID;
	TSTCellRegion* _strokeRegion;
	TSKShuffleMapping* _shuffleMapping;
	NSSet* _annotations;
	unsigned long long _beforeCountValue;
	unsigned long long _afterCountValue;

}

@property (assign,nonatomic) int changeDescriptor;                             //@synthesize changeDescriptor=_changeDescriptor - In the implementation block
@property (nonatomic,retain) TSTCellRegion * cellRegion;                       //@synthesize cellRegion=_cellRegion - In the implementation block
@property (assign,nonatomic) TSUCellCoord cellID;                              //@synthesize cellID=_cellID - In the implementation block
@property (nonatomic,retain) TSTCellRegion * strokeRegion;                     //@synthesize strokeRegion=_strokeRegion - In the implementation block
@property (nonatomic,retain) NSHashTable * referenceIdentifiers;               //@synthesize referenceIdentifiers=_referenceIdentifiers - In the implementation block
@property (nonatomic,retain) TSKShuffleMapping * shuffleMapping;               //@synthesize shuffleMapping=_shuffleMapping - In the implementation block
@property (nonatomic,retain) NSSet * annotations;                              //@synthesize annotations=_annotations - In the implementation block
@property (assign,nonatomic) unsigned long long beforeCountValue;              //@synthesize beforeCountValue=_beforeCountValue - In the implementation block
@property (assign,nonatomic) unsigned long long afterCountValue;               //@synthesize afterCountValue=_afterCountValue - In the implementation block
@property (nonatomic,readonly) char hasBeforeAfterCounts; 
@property (nonatomic,readonly) TSUCellRect strokeRange; 
@property (nonatomic,readonly) TSUCellRect cellRange; 
@property (assign,nonatomic) char processedByLayoutEngine;                     //@synthesize processedByLayoutEngine=_processedByLayoutEngine - In the implementation block
+(id)changeDescriptorWithType:(int)arg1 cellRegion:(id)arg2 ;
+(id)changeDescriptorWithType:(int)arg1 cellRegion:(id)arg2 strokeRegion:(id)arg3 ;
+(id)changeDescriptorWithType:(int)arg1 strokeRegion:(id)arg2 ;
+(id)changeDescriptorWithType:(int)arg1 cellID:(TSUCellCoord)arg2 cellRegion:(id)arg3 strokeRegion:(id)arg4 ;
+(id)changeDescriptorWithType:(int)arg1 ;
+(id)changeDescriptorWithType:(int)arg1 cellID:(TSUCellCoord)arg2 cellRange:(TSUCellRect)arg3 ;
+(id)changeDescriptorWithType:(int)arg1 cellID:(TSUCellCoord)arg2 cellRange:(TSUCellRect)arg3 strokeRange:(TSUCellRect)arg4 ;
+(id)changeDescriptorWithType:(int)arg1 cellID:(TSUCellCoord)arg2 strokeRange:(TSUCellRect)arg3 ;
+(id)changeDescriptorWithType:(int)arg1 cellRange:(TSUCellRect)arg2 ;
+(id)changeDescriptorWithType:(int)arg1 strokeRange:(TSUCellRect)arg2 ;
+(id)changeDescriptorWithType:(int)arg1 cellRange:(TSUCellRect)arg2 strokeRange:(TSUCellRect)arg3 ;
+(id)changeDescriptorWithType:(int)arg1 referenceIdentifiers:(id)arg2 ;
+(id)changeDescriptorWithType:(int)arg1 cellRegion:(id)arg2 strokeRegion:(id)arg3 beforeCount:(unsigned long long)arg4 afterCount:(unsigned long long)arg5 ;
+(id)changeDescriptorWithType:(int)arg1 cellRegion:(id)arg2 beforeCount:(unsigned long long)arg3 afterCount:(unsigned long long)arg4 ;
+(id)changeDescriptorWithType:(int)arg1 shuffleMapping:(id)arg2 ;
+(id)changeDescriptorWithAnnotationsRemovedForMerge:(id)arg1 ;
+(void)enumerateChangeRecords:(id)arg1 withType:(int)arg2 block:(/*^block*/id)arg3 ;
-(char)isEqual:(id)arg1 ;
-(NSSet *)annotations;
-(void)setAnnotations:(NSSet *)arg1 ;
-(TSTCellRegion *)cellRegion;
-(TSUCellRect)cellRange;
-(int)changeDescriptor;
-(TSUCellCoord)cellID;
-(void)setCellID:(TSUCellCoord)arg1 ;
-(TSTCellRegion *)strokeRegion;
-(TSUCellRect)strokeRange;
-(NSHashTable *)referenceIdentifiers;
-(TSKShuffleMapping *)shuffleMapping;
-(char)processedByLayoutEngine;
-(void)setProcessedByLayoutEngine:(char)arg1 ;
-(char)hasBeforeAfterCounts;
-(id)initWithChangeDescriptorType:(int)arg1 cellRegion:(id)arg2 cellID:(TSUCellCoord)arg3 strokeRegion:(id)arg4 referenceIdentifiers:(id)arg5 shuffleMapping:(id)arg6 annotations:(id)arg7 ;
-(id)initWithChangeDescriptorType:(int)arg1 cellRegion:(id)arg2 cellID:(TSUCellCoord)arg3 strokeRegion:(id)arg4 referenceIdentifiers:(id)arg5 shuffleMapping:(id)arg6 ;
-(void)setBeforeCountValue:(unsigned long long)arg1 ;
-(void)setAfterCountValue:(unsigned long long)arg1 ;
-(void)markAsProcessed;
-(void)setReferenceIdentifiers:(NSHashTable *)arg1 ;
-(void)setChangeDescriptor:(int)arg1 ;
-(void)setCellRegion:(TSTCellRegion *)arg1 ;
-(void)setStrokeRegion:(TSTCellRegion *)arg1 ;
-(void)setShuffleMapping:(TSKShuffleMapping *)arg1 ;
-(unsigned long long)beforeCountValue;
-(unsigned long long)afterCountValue;
@end
