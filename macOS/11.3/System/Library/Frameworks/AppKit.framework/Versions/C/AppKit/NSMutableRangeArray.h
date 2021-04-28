/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@interface NSMutableRangeArray : NSMutableArray {

	unsigned long long _count;
	unsigned long long _capacity;
	NSRange* _ranges;

}
+(id)array;
+(id)arrayWithRanges:(const NSRange*)arg1 count:(unsigned long long)arg2 ;
+(id)arrayWithRange:(NSRange)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)removeAllObjects;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeLastObject;
-(NSRange)rangeAtIndex:(unsigned long long)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(char)isEqualToArray:(id)arg1 ;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(id)initWithRange:(NSRange)arg1 ;
-(unsigned long long)indexOfFirstRangeContainingOrFollowing:(unsigned long long)arg1 ;
-(void)addRangesFromArray:(id)arg1 ;
-(void)addRange:(NSRange)arg1 ;
-(NSRange)firstRange;
-(NSRange)lastRange;
-(id)initWithRanges:(const NSRange*)arg1 count:(unsigned long long)arg2 ;
-(id)rangesAtIndexes:(id)arg1 ;
-(void)_setCapacity:(unsigned long long)arg1 ;
-(void)_growIfNecessary;
-(void)insertRange:(NSRange)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeRangeAtIndex:(unsigned long long)arg1 ;
-(void)insertRanges:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeLastRange;
-(void)replaceRangeAtIndex:(unsigned long long)arg1 withRange:(NSRange)arg2 ;
-(void)removeRangesAtIndexes:(id)arg1 ;
@end

