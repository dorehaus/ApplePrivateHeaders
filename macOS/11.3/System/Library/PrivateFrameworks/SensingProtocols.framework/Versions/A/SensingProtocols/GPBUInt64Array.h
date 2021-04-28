/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SensingProtocols.framework/Versions/A/SensingProtocols
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SensingProtocols/SensingProtocols-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GPBMessage;

@interface GPBUInt64Array : NSObject <NSCopying> {

	GPBMessage* _autocreator;
	unsigned long long* _values;
	unsigned long long _count;
	unsigned long long _capacity;

}

@property (nonatomic,readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
+(id)array;
+(id)arrayWithCapacity:(unsigned long long)arg1 ;
+(id)arrayWithValue:(unsigned long long)arg1 ;
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
-(void)addValue:(unsigned long long)arg1 ;
-(unsigned long long)valueAtIndex:(unsigned long long)arg1 ;
-(void)replaceValueAtIndex:(unsigned long long)arg1 withValue:(unsigned long long)arg2 ;
-(void)enumerateValuesWithBlock:(/*^block*/id)arg1 ;
-(void)addValuesFromArray:(id)arg1 ;
-(id)initWithValues:(const unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithValueArray:(id)arg1 ;
-(void)internalResizeToCapacity:(unsigned long long)arg1 ;
-(void)enumerateValuesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)addValues:(const unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)insertValue:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeValueAtIndex:(unsigned long long)arg1 ;
-(void)exchangeValueAtIndex:(unsigned long long)arg1 withValueAtIndex:(unsigned long long)arg2 ;
@end

