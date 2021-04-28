/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/Versions/A/DataDetectorsNaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsNaturalLanguage/DataDetectorsNaturalLanguage-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray, NSArray;

@interface IPCircularBufferArray : NSObject <NSFastEnumeration> {

	NSMutableArray* _backingStore;
	unsigned long long _currentIndex;
	unsigned long long _capacity;
	unsigned long long _mutationDetector;
	id _lastObject;

}

@property (nonatomic,readonly) NSArray * allObjects; 
@property (readonly) unsigned long long count; 
@property (nonatomic,readonly) id lastObject; 
-(unsigned long long)count;
-(void)removeAllObjects;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_IP2*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(NSArray *)allObjects;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)lastObject;
-(void)addObject:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

