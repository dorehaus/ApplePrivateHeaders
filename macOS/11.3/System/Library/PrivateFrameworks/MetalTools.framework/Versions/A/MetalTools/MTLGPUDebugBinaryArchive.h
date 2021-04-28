/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/Versions/A/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsBinaryArchive.h>

@interface MTLGPUDebugBinaryArchive : MTLToolsBinaryArchive
-(char)addComputePipelineFunctionsWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(char)addComputePipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(char)addRenderPipelineFunctionsWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(char)addRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(char)addTileRenderPipelineFunctionsWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(char)addTileRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithBinaryArchive:(id)arg1 device:(id)arg2 ;
@end
