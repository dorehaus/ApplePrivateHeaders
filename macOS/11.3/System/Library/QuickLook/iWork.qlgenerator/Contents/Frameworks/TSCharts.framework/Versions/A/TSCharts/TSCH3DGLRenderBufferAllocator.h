/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCH3DRenderBufferAllocator.h>

@class TSCH3DRenderBufferStorage, NSString;

@interface TSCH3DGLRenderBufferAllocator : NSObject <TSCH3DRenderBufferAllocator> {

	TSCH3DRenderBufferStorage* _storage;

}

@property (nonatomic,readonly) char isTexturable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocator;
+(id)allocatorWithStorage:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)initWithStorage:(id)arg1 ;
-(char)isTexturable;
-(id)bufferWithAllocatorInfo:(id)arg1 internalFormat:(unsigned)arg2 attachment:(unsigned)arg3 ;
-(id)colorbufferWithAllocatorInfo:(id)arg1 ;
-(id)depthbufferWithAllocatorInfo:(id)arg1 ;
@end
