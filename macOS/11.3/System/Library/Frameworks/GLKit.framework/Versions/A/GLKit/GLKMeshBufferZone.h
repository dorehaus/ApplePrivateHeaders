/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GLKit.framework/Versions/A/GLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MDLMeshBufferZone.h>

@class NSMutableOrderedSet, GLKMeshBufferAllocator, NSString;

@interface GLKMeshBufferZone : NSObject <MDLMeshBufferZone> {

	NSMutableOrderedSet* _buffers;
	char _destroyInvoked;
	GLKMeshBufferAllocator* _allocator;
	unsigned _glBufferName;
	unsigned long long _capacity;

}

@property (nonatomic,readonly) unsigned long long capacity;                       //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,readonly) id<MDLMeshBufferAllocator> allocator;              //@synthesize allocator=_allocator - In the implementation block
@property (nonatomic,readonly) unsigned glBufferName;                             //@synthesize glBufferName=_glBufferName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned long long)capacity;
-(id)initWithCapacity:(unsigned long long)arg1 allocator:(id)arg2 ;
-(id<MDLMeshBufferAllocator>)allocator;
-(id)newBufferWithLength:(unsigned long long)arg1 type:(unsigned long long)arg2 ;
-(void)destroyBuffer:(id)arg1 ;
-(unsigned)glBufferName;
@end
