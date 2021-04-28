/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Versions/A/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VMURangeArray : NSObject <NSCopying> {

	unsigned _count;
	VMURange* _ranges;
	unsigned _max;
	char _sorted;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(unsigned)count;
-(VMURange)rangeAtIndex:(unsigned)arg1 ;
-(VMURange)range;
-(void)addRange:(VMURange)arg1 ;
-(void)setCapacity:(unsigned)arg1 ;
-(id)initWithRanges:(const VMURange*)arg1 count:(unsigned)arg2 ;
-(void)insertRange:(VMURange)arg1 atIndex:(unsigned)arg2 ;
-(void)removeRangeAtIndex:(unsigned)arg1 ;
-(void)sort;
-(char)intersectsRange:(VMURange)arg1 ;
-(VMURange*)ranges;
-(unsigned long long)indexForLocation:(unsigned long long)arg1 ;
-(void)removeAllRanges;
-(char)intersectsLocation:(unsigned long long)arg1 ;
-(void)addRanges:(id)arg1 ;
-(VMURange)rangeForLocation:(unsigned long long)arg1 ;
-(VMURange)subrangeNotExcludedBySelfForRange:(VMURange)arg1 ;
-(VMURange)largestRange;
-(unsigned long long)sumLengths;
@end

