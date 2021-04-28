/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <TSTables/TSDHint.h>

@class NSNumber, TSTLayout, NSString;

@interface TSTLayoutHint : NSObject <NSCopying, TSDHint> {

	char _isValid;
	char _horizontal;
	unsigned _partitionPosition;
	TSUCellCoord _cacheHintID;
	NSNumber* _partitioningPass;
	TSTLayout* _layout;
	TSUCellRect _cellRange;
	CGSize _maximumSize;
	CGSize _effectiveSize;

}

@property (assign,nonatomic) char isValid;                              //@synthesize isValid=_isValid - In the implementation block
@property (assign,nonatomic) TSUCellRect cellRange;                     //@synthesize cellRange=_cellRange - In the implementation block
@property (assign,nonatomic) TSUCellCoord cacheHintID;                  //@synthesize cacheHintID=_cacheHintID - In the implementation block
@property (nonatomic,retain) NSNumber * partitioningPass;               //@synthesize partitioningPass=_partitioningPass - In the implementation block
@property (assign,nonatomic) unsigned partitionPosition;                //@synthesize partitionPosition=_partitionPosition - In the implementation block
@property (assign,nonatomic) CGSize maximumSize;                        //@synthesize maximumSize=_maximumSize - In the implementation block
@property (assign,nonatomic) CGSize effectiveSize;                      //@synthesize effectiveSize=_effectiveSize - In the implementation block
@property (assign,nonatomic,__weak) TSTLayout * layout;                 //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) char horizontal;                           //@synthesize horizontal=_horizontal - In the implementation block
@property (nonatomic,readonly) id<TSDHint> firstChildHint; 
@property (nonatomic,readonly) id<TSDHint> lastChildHint; 
@property (nonatomic,readonly) char isFirstHint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)archivedHintClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)invalidate;
-(char)isValid;
-(TSTLayout *)layout;
-(CGSize)maximumSize;
-(void)setLayout:(TSTLayout *)arg1 ;
-(void)setIsValid:(char)arg1 ;
-(void)setHorizontal:(char)arg1 ;
-(unsigned)partitionPosition;
-(void)setMaximumSize:(CGSize)arg1 ;
-(char)horizontal;
-(id)initWithArchive:(const LayoutHintArchive*)arg1 ;
-(void)saveToArchive:(LayoutHintArchive*)arg1 ;
-(id<TSDHint>)firstChildHint;
-(id<TSDHint>)lastChildHint;
-(id)copyForArchiving;
-(char)isFirstHint;
-(CGSize)effectiveSize;
-(TSUCellRect)cellRange;
-(void)setCellRange:(TSUCellRect)arg1 ;
-(void)setCacheHintID:(TSUCellCoord)arg1 ;
-(void)setPartitionPosition:(unsigned)arg1 ;
-(TSUCellCoord)cacheHintID;
-(void)setPartitioningPass:(NSNumber *)arg1 ;
-(NSNumber *)partitioningPass;
-(id)initWithRange:(TSUCellRect)arg1 hintId:(TSUCellCoord)arg2 partitionPosition:(unsigned)arg3 maximumSize:(CGSize)arg4 effectiveSize:(CGSize)arg5 layout:(id)arg6 validity:(char)arg7 horizontal:(char)arg8 ;
-(void)setEffectiveSize:(CGSize)arg1 ;
-(char)overlapsWithSelectionPath:(id)arg1 ;
@end
