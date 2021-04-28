/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Versions/A/Frameworks/MPSRayIntersector.framework/Versions/A/MPSRayIntersector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSRayIntersector/MPSRayIntersector-Structs.h>
#import <MPSCore/MPSKernel.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MTLComputePipelineState;
@class MPSAccelerationStructureGroup, NSDictionary;

@interface MPSAccelerationStructure : MPSKernel <NSSecureCoding, NSCopying> {

	MPSAccelerationStructureGroup* _group;
	NSDictionary* _privateOptions;
	id<MTLComputePipelineState> _boundingBoxCopyPipeline;
	unsigned long long _status;
	unsigned long long _usage;

}

@property (nonatomic,readonly) MPSAccelerationStructureGroup * group; 
@property (nonatomic,readonly) MPSAxisAlignedBoundingBoxRef boundingBox; 
@property (nonatomic,readonly) unsigned long long status; 
@property (assign,nonatomic) unsigned long long usage; 
+(char)supportsSecureCoding;
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setGroup:(MPSAccelerationStructureGroup *)arg1 ;
-(unsigned long long)status;
-(void)setUsage:(unsigned long long)arg1 ;
-(unsigned long long)usage;
-(id)statistics;
-(MPSAccelerationStructureGroup *)group;
-(void)validate;
-(MPSAxisAlignedBoundingBoxRef)boundingBox;
-(id)initWithDevice:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)setStatus:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)initWithGroup:(id)arg1 ;
-(id)initWithCoder:(id)arg1 group:(id)arg2 ;
-(MPSBVHOptions)getBVHOptions;
-(void)rebuild;
-(void)bindResourcesWithEncoder:(id)arg1 commandBuffer:(id)arg2 retainedResources:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 group:(id)arg2 ;
-(char)useResourceBuffer;
-(void)encodeClearWithEncoder:(id)arg1 buffer:(id)arg2 bufferOffset:(unsigned long long)arg3 value:(unsigned)arg4 ;
-(void)encodeIndirectDispatchWithEncoder:(id)arg1 pipeline:(id)arg2 threadCountBuffer:(id)arg3 threadCountBufferOffset:(unsigned long long)arg4 indirectDispatchBuffer:(id)arg5 indirectDispatchBufferOffset:(unsigned long long)arg6 ;
-(id)boundingBoxCopyPipeline;
-(void)rebuildWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)encodeRefitToCommandBuffer:(id)arg1 ;
-(void)sharedInitAccelerationStructureWithGroup:(id)arg1 ;
-(void)decodeAccelerationStructureWithCoder:(id)arg1 ;
-(id)copyAccelerationStructureWithZone:(NSZone*)arg1 device:(id)arg2 group:(id)arg3 ;
-(id)privateOptions;
-(void)setPrivateOptions:(id)arg1 ;
-(void)updateResourceBufferWithEncoder:(id)arg1 commandBuffer:(id)arg2 retainedResources:(id)arg3 ;
@end
