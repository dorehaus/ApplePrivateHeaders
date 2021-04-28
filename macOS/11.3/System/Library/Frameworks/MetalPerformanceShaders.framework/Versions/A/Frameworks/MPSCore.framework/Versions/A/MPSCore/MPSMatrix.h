/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Versions/A/Frameworks/MPSCore.framework/Versions/A/MPSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MPSCore/MPSCore-Structs.h>
@interface MPSMatrix : NSObject {

	MPSDevice* _device;
	unsigned long long _rows;
	unsigned long long _columns;
	unsigned long long _matrices;
	unsigned long long _rowBytes;
	unsigned long long _matrixBytes;
	unsigned long long _offset;
	unsigned _dataType;
	MPSAutoBuffer* _buffer;

}

@property (nonatomic,retain,readonly) id<MTLDevice> device; 
@property (nonatomic,readonly) unsigned long long rows;                     //@synthesize rows=_rows - In the implementation block
@property (nonatomic,readonly) unsigned long long columns;                  //@synthesize columns=_columns - In the implementation block
@property (nonatomic,readonly) unsigned long long matrices;                 //@synthesize matrices=_matrices - In the implementation block
@property (nonatomic,readonly) unsigned dataType;                           //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) unsigned long long rowBytes;                 //@synthesize rowBytes=_rowBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long matrixBytes;              //@synthesize matrixBytes=_matrixBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long offset;                   //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> data; 
-(void)incrementReadCount;
-(void)resetReadCount;
-(void)decrementReadCount;
-(char)isEqual:(id)arg1 ;
-(id)debugDescription;
-(id)init;
-(id<MTLBuffer>)data;
-(id<MTLDevice>)device;
-(unsigned long long)offset;
-(unsigned)dataType;
-(unsigned long long)rows;
-(unsigned long long)columns;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
-(unsigned long long)rowBytes;
-(id)initWithBuffer:(id)arg1 descriptor:(id)arg2 ;
-(id)initWithDevice:(id)arg1 descriptor:(id)arg2 ;
-(id)ndArrayWithCommandBuffer:(id)arg1 descriptor:(id)arg2 aliasing:(unsigned long long)arg3 ;
-(unsigned long long)matrices;
-(unsigned long long)matrixBytes;
-(unsigned long long)resourceSize;
-(id)initPrivateWithDescriptor:(id)arg1 device:(MPSDevice*)arg2 ;
-(BOOL)canAliasWithNDArrayDescriptor:(id)arg1 ;
-(id)initWithBuffer:(id)arg1 offset:(unsigned long long)arg2 descriptor:(id)arg3 ;
-(BOOL)doesAliasWithNDArray:(id)arg1 ;
@end

