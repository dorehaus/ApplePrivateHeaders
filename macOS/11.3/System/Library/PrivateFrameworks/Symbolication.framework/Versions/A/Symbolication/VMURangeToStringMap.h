/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Versions/A/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface VMURangeToStringMap : NSObject <NSSecureCoding> {

	NSMutableArray* _strings;
	void* _stringToIndexMapVoidPtr;
	void* _rangeAndStringVectorVoidPtr;
	char _sorted;

}
+(void)initialize;
+(char)supportsSecureCoding;
+(void)_claimUnarchivingOfClass:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(unsigned)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)sort;
-(id)stringForIndex:(unsigned)arg1 ;
-(unsigned)uniquedStringCount;
-(unsigned)indexForString:(id)arg1 insertIfMissing:(char)arg2 ;
-(void)setString:(id)arg1 forRange:(VMURange)arg2 ;
-(id)stringForAddress:(unsigned long long)arg1 ;
-(VMURange)rangeContainingAddress:(unsigned long long)arg1 ;
-(VMURange)rangeForString:(id)arg1 startingAtAddress:(unsigned long long)arg2 ;
@end
