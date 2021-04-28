/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableIndexSet;

@interface TSTHiddenStateIndexSet : NSObject <NSCopying> {

	NSMutableIndexSet* _visibleIndexSet;

}

@property (nonatomic,retain) NSMutableIndexSet * visibleIndexSet;              //@synthesize visibleIndexSet=_visibleIndexSet - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setCount:(unsigned long long)arg1 ;
-(void)swapIndex:(unsigned long long)arg1 withIndex:(unsigned long long)arg2 ;
-(id)visibleIndices;
-(char)isIndexHidden:(unsigned long long)arg1 ;
-(unsigned long long)numberHiddenIndicesInRange:(NSRange)arg1 ;
-(char)anyHiddenIndicesInRange:(NSRange)arg1 ;
-(unsigned long long)findNthPreviousVisibleIndex:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2 ;
-(unsigned long long)findNthNextVisibleIndex:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2 ;
-(void)moveRangeFrom:(NSRange)arg1 toIndex:(unsigned long long)arg2 ;
-(void)deleteRange:(NSRange)arg1 ;
-(void)insertRange:(NSRange)arg1 ;
-(NSMutableIndexSet *)visibleIndexSet;
-(void)setHidden:(char)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setVisibleIndexSet:(NSMutableIndexSet *)arg1 ;
-(void)setHidden:(char)arg1 atIndexes:(id)arg2 ;
-(void)setHidden:(char)arg1 inRange:(NSRange)arg2 ;
-(unsigned long long)numberVisibleIndicesInRange:(NSRange)arg1 ;
-(unsigned long long)visibleIndexAfterIndex:(unsigned long long)arg1 ;
-(unsigned long long)visibleIndexAfterAndIncludingIndex:(unsigned long long)arg1 ;
-(unsigned long long)visibleIndexBeforeIndex:(unsigned long long)arg1 ;
-(unsigned long long)visibleIndexBeforeAndIncludingIndex:(unsigned long long)arg1 ;
@end

