/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Versions/A/Frameworks/MPSCore.framework/Versions/A/MPSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSCore/MPSMatrix.h>

@interface MPSTemporaryMatrix : MPSMatrix {

	unsigned long long _readCount;

}

@property (assign,nonatomic) unsigned long long readCount;              //@synthesize readCount=_readCount - In the implementation block
+(id)temporaryMatrixWithCommandBuffer:(id)arg1 matrixDescriptor:(id)arg2 ;
+(void)prefetchStorageWithCommandBuffer:(id)arg1 matrixDescriptorList:(id)arg2 ;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
-(unsigned long long)readCount;
-(void)setReadCount:(unsigned long long)arg1 ;
-(id)initWithCommandBuffer:(id)arg1 matrixDescriptor:(id)arg2 ;
@end

