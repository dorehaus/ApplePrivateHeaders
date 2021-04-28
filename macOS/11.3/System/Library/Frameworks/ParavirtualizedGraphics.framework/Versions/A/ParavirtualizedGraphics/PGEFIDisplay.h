/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ParavirtualizedGraphics.framework/Versions/A/ParavirtualizedGraphics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLTextureSPI, OS_dispatch_queue, OS_dispatch_source;
#import <ParavirtualizedGraphics/ParavirtualizedGraphics-Structs.h>
@class _PGDevice, _PGDisplay, NSObject;

@interface PGEFIDisplay : NSObject {

	_PGDevice* _device;
	unsigned _currentModeIndex;
	_PGDisplay* _display;
	unsigned _framebufferStartPage;
	unsigned _framebufferLength;
	unsigned _framebufferDepth;
	unsigned _framebufferMode;
	unsigned _currentWidth;
	unsigned _currentHeight;
	PGTask_sRef _efiDisplayTask;
	void* _efiDisplayTaskBase;
	id<MTLTextureSPI> _texture;
	NSObject*<OS_dispatch_queue> _presentQueue;
	NSObject*<OS_dispatch_source> _presentTimer;
	NSObject*<OS_dispatch_source> _presentSource;
	BOOL _mapped;
	unsigned _mappedLength;
	unsigned _totalFramebufferSize;
	PGTraceRange_sRef _traceRange;

}
-(void)dealloc;
-(void)present;
-(id)initWithDevice:(id)arg1 ;
-(void)setDisplay:(id)arg1 ;
-(void)teardown;
-(void)setModeSelect:(unsigned)arg1 ;
-(unsigned)getModeCount;
-(unsigned)getModeValue;
-(void)setFramebufferStart:(unsigned)arg1 ;
-(void)setFramebufferLength:(unsigned)arg1 ;
-(void)setFramebufferDepth:(unsigned)arg1 ;
-(void)setFramebufferMode:(unsigned)arg1 ;
-(void)stopPresentation;
-(void)updateFramebufferMapping;
-(void)updateFramebufferMode;
-(void)cancelFramePresents;
-(void)scheduleFramePresents;
@end

