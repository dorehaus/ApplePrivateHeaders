/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCGSWindowBackingStore.h>

@class NSCGSWindow, CALayer, NSCGSWindowBuffer;

@interface NSCGSCAWindowBackingStore : NSCGSWindowBackingStore {

	NSCGSWindow* _window;
	CALayer* _backingStoreLayer;
	opaque_pthread_mutex_t _backBufferMutex;
	NSCGSWindowBuffer* _backBuffer;
	CABackingStoreRef _backing;
	CGColorSpaceRef _colorSpace;
	unsigned _depth;
	unsigned _opaque : 1;
	unsigned _flushOnUnlock : 1;
	unsigned _updating : 1;

}

@property (readonly) CABackingStoreRef CABackingStore; 
-(CGSize)size;
-(void)dealloc;
-(void)setDepth:(unsigned)arg1 ;
-(unsigned)depth;
-(double)scale;
-(char)isOpaque;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(void)setOpaque:(char)arg1 ;
-(CGColorSpaceRef)colorSpace;
-(void)lockBackBuffer;
-(void)defineBackBufferInRect:(CGRect)arg1 ;
-(void)dirtyBackBufferInRegion:(CGSRegionObjectRef)arg1 ;
-(void)unlockBackBuffer;
-(id)backBuffer;
-(void)flushBackBufferInRegion:(CGSRegionObjectRef)arg1 ;
-(CGImageRef)imageInRect:(CGRect)arg1 ;
-(id)initWithWindow:(id)arg1 backingStoreLayer:(id)arg2 ;
-(CABackingStoreRef)CABackingStore;
-(char)keepsExcessAllocation;
-(void)setKeepsExcessAllocation:(char)arg1 ;
-(void)invalidateAlphaShape;
-(void)defineBackBufferInRegion:(CGSRegionObjectRef)arg1 ;
-(void)dirtyBackBufferInRect:(CGRect)arg1 ;
-(void)flushBackBufferInRect:(CGRect)arg1 ;
@end
