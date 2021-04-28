/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MTLRenderPassSampleBufferAttachmentDescriptor : NSObject <NSCopying>

@property (nonatomic,retain) id<MTLCounterSampleBuffer> sampleBuffer; 
@property (assign,nonatomic) unsigned long long startOfVertexSampleIndex; 
@property (assign,nonatomic) unsigned long long endOfVertexSampleIndex; 
@property (assign,nonatomic) unsigned long long startOfFragmentSampleIndex; 
@property (assign,nonatomic) unsigned long long endOfFragmentSampleIndex; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)alloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

