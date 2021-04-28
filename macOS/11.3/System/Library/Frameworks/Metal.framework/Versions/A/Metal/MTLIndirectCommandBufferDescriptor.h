/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MTLIndirectCommandBufferDescriptor : NSObject <NSCopying> {

	MTLIndirectCommandBufferDescriptorState _state;

}

@property (assign,nonatomic) unsigned long long resourceIndex; 
@property (assign,nonatomic) unsigned long long commandTypes; 
@property (assign,nonatomic) char inheritPipelineState; 
@property (assign,nonatomic) char inheritBuffers; 
@property (assign,nonatomic) unsigned long long maxVertexBufferBindCount; 
@property (assign,nonatomic) unsigned long long maxFragmentBufferBindCount; 
@property (assign,nonatomic) unsigned long long maxKernelBufferBindCount; 
-(void)setCommandTypes:(unsigned long long)arg1 ;
-(void)setInheritPipelineState:(char)arg1 ;
-(void)setMaxKernelBufferBindCount:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(char)inheritPipelineState;
-(unsigned long long)maxKernelBufferBindCount;
-(char)inheritBuffers;
-(unsigned long long)commandTypes;
-(unsigned long long)resourceIndex;
-(void)setMaxVertexBufferBindCount:(unsigned long long)arg1 ;
-(void)setMaxFragmentBufferBindCount:(unsigned long long)arg1 ;
-(void)setInheritBuffers:(char)arg1 ;
-(unsigned long long)maxVertexBufferBindCount;
-(unsigned long long)maxFragmentBufferBindCount;
-(void)setResourceIndex:(unsigned long long)arg1 ;
@end

