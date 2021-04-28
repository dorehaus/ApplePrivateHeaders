/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <AppKit/NSView.h>
#import <QTKit/QTImageConsumerDelegateHelper.h>

@class NSString;

@interface QTCaptureView : NSView <QTImageConsumerDelegateHelper>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)finalize;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)isOpaque;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFillColor:(id)arg1 ;
-(void)setLayer:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)fillColor;
-(void)resizeSubviewsWithOldSize:(CGSize)arg1 ;
-(void)_applyDelegateHelperToRenderer;
-(id)_alteredImageForImage:(id)arg1 ;
-(char)preservesAspectRatio;
-(void)setPreservesAspectRatio:(char)arg1 ;
-(void)formatDidChange:(id)arg1 ;
-(id)availableVideoPreviewConnections;
-(id)videoPreviewConnection;
-(void)_drawIBPreviewInRect:(CGRect)arg1 ;
-(CGRect)previewBounds;
-(void)_setCaptureViewNeedsLayout:(char)arg1 ;
-(void)_updateRendererView;
-(void)_updateVideoPreviewConnectionFromVideoPreviewOutput;
-(void)setVideoPreviewConnection:(id)arg1 ;
-(void)setAvailableVideoPreviewConnections:(id)arg1 ;
-(void)_setCaptureViewDoesNeedLayoutOnMainThread;
-(void)setCaptureSession:(id)arg1 ;
-(id)captureSession;
@end

