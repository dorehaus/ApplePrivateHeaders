/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSText.framework/Versions/A/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSText/TSText-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface TSWPRangeArray : NSObject <NSCopying, NSMutableCopying> {

	vector<_NSRange, std::__1::allocator<_NSRange>>* _rangeVector;

}

@property (nonatomic,readonly) unsigned long long rangeCount; 
@property (nonatomic,readonly) NSRange superRange; 
@property (nonatomic,readonly) unsigned long long indexCount; 
+(id)rangeArray;
+(id)rangeArrayWithRange:(NSRange)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)rangeCount;
-(NSRange)rangeAtIndex:(unsigned long long)arg1 ;
-(id)initWithRange:(NSRange)arg1 ;
-(BOOL)containsRange:(NSRange)arg1 ;
-(unsigned long long)indexCount;
-(BOOL)intersectsRange:(NSRange)arg1 ;
-(id)intersection:(NSRange)arg1 ;
-(id)initWithRangeVector:(const vector<_NSRange, std::__1::allocator<_NSRange>>*)arg1 ;
-(void)enumerateRangesInRange:(NSRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NSRange)superRange;
-(BOOL)containsCharacterAtIndex:(unsigned long long)arg1 ;
-(char)isEqualToRangeArray:(id)arg1 ;
-(void)enumerateRanges:(/*^block*/id)arg1 ;
-(unsigned long long)p_start;
-(unsigned long long)p_finish;
-(BOOL)containsCharacterAtIndex:(unsigned long long)arg1 inclusive:(BOOL)arg2 ;
-(NSRange)rangeContainingPosition:(unsigned long long)arg1 ;
-(void)reverseEnumerateRanges:(/*^block*/id)arg1 ;
-(unsigned long long)indexForRange:(NSRange)arg1 ;
-(id)rangesIntersecting:(NSRange)arg1 ;
@end

