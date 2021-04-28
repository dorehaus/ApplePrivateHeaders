/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSView, CALayer;


@protocol QLPreviewOverlayDataSource <NSObject>
@property (readonly) NSView * overlayParentView; 
@property (readonly) CALayer * overlayParentLayer; 
@property (readonly) double backingScaleFactor; 
@property (readonly) CGRect overlayFrame; 
@property (readonly) CGRect rolloverFrame; 
@property (readonly) char showControls; 
@property (readonly) char shouldAlwaysHandleMultiClicks; 
@property (readonly) char needsPlayControl; 
@property (readonly) char needsTimeControl; 
@property (assign) char playing; 
@property (readonly) float progress; 
@property (readonly) char needsPageControl; 
@property (readonly) unsigned long long numberOfPages; 
@property (assign) unsigned long long currentPage; 
@property (readonly) double rolloverActivationDelay; 
@optional
-(double)rolloverActivationDelay;

@required
-(char)needsPageControl;
-(char)needsTimeControl;
-(CGRect)rolloverFrame;
-(CALayer *)overlayParentLayer;
-(NSView *)overlayParentView;
-(char)shouldAlwaysHandleMultiClicks;
-(float)progress;
-(double)backingScaleFactor;
-(unsigned long long)currentPage;
-(void)setCurrentPage:(unsigned long long)arg1;
-(char)playing;
-(unsigned long long)numberOfPages;
-(CGRect)overlayFrame;
-(void)setPlaying:(char)arg1;
-(char)showControls;
-(char)needsPlayControl;

@end

