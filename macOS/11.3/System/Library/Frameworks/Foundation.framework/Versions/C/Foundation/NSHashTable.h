/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSPointerFunctions, NSArray, NSSet;

@interface NSHashTable : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>

@property (copy,readonly) NSPointerFunctions * pointerFunctions; 
@property (readonly) unsigned long long count; 
@property (copy,readonly) NSArray * allObjects; 
@property (nonatomic,readonly) id anyObject; 
@property (copy,readonly) NSSet * setRepresentation; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)alloc;
+(char)supportsSecureCoding;
+(id)weakObjectsHashTable;
+(id)hashTableWithWeakObjects;
+(id)hashTableWithOptions:(unsigned long long)arg1 ;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(id)objectEnumerator;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS29*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(NSArray *)allObjects;
-(void)removeObject:(id)arg1 ;
-(id)member:(id)arg1 ;
-(Class)classForCoder;
-(char)containsObject:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)anyObject;
-(id)initWithOptions:(unsigned long long)arg1 capacity:(unsigned long long)arg2 ;
-(id)initWithPointerFunctions:(id)arg1 capacity:(unsigned long long)arg2 ;
-(void*)getItem:(const void*)arg1 ;
-(void)removeItem:(const void*)arg1 ;
-(void)removeAllItems;
-(unsigned long long)weakCount;
-(void)insertKnownAbsentItem:(const void*)arg1 ;
-(void)getKeys:(const void*)arg1 count:(unsigned long long*)arg2 ;
-(NSPointerFunctions *)pointerFunctions;
-(char)intersectsHashTable:(id)arg1 ;
-(char)isEqualToHashTable:(id)arg1 ;
-(char)isSubsetOfHashTable:(id)arg1 ;
-(void)intersectHashTable:(id)arg1 ;
-(void)unionHashTable:(id)arg1 ;
-(void)minusHashTable:(id)arg1 ;
-(id)mutableSet;
-(NSSet *)setRepresentation;
@end
