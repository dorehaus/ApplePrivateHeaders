/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/Versions/A/PrivateFederatedLearning
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrivateFederatedLearning/PrivateFederatedLearning-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GPBMessage;

@interface GPBUInt32Array : NSObject <NSCopying> {

	GPBMessage* _autocreator;
	unsigned* _values;
	unsigned long long _count;
	unsigned long long _capacity;

}

@property (nonatomic,readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
+(id)array;
+(id)arrayWithCapacity:(unsigned long long)arg1 ;
+(id)arrayWithValue:(unsigned)arg1 ;
+(id)arrayWithValueArray:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(unsigned long long)count;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)removeAll;
-(void)addValue:(unsigned)arg1 ;
-(unsigned)valueAtIndex:(unsigned long long)arg1 ;
-(void)replaceValueAtIndex:(unsigned long long)arg1 withValue:(unsigned)arg2 ;
-(void)enumerateValuesWithBlock:(/*^block*/id)arg1 ;
-(void)addValuesFromArray:(id)arg1 ;
-(id)initWithValues:(const unsigned*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithValueArray:(id)arg1 ;
-(void)internalResizeToCapacity:(unsigned long long)arg1 ;
-(void)enumerateValuesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)addValues:(const unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)insertValue:(unsigned)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeValueAtIndex:(unsigned long long)arg1 ;
-(void)exchangeValueAtIndex:(unsigned long long)arg1 withValueAtIndex:(unsigned long long)arg2 ;
@end

