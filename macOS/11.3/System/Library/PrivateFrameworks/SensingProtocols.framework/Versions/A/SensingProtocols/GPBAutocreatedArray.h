/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SensingProtocols.framework/Versions/A/SensingProtocols
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SensingProtocols/SensingProtocols-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@class GPBMessage, NSMutableArray;

@interface GPBAutocreatedArray : NSMutableArray {

	GPBMessage* _autocreator;
	NSMutableArray* _array;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_GP1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)removeObject:(id)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeLastObject;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
@end

