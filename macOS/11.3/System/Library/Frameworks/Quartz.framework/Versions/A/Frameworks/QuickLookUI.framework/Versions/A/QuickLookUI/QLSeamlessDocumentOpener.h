/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuickLookUI/QuickLookUI-Structs.h>
@class NSURL, NSDictionary, NSImage;

@interface QLSeamlessDocumentOpener : NSObject {

	NSURL* _url;

}

@property (nonatomic,readonly) NSURL * URL;                             //@synthesize url=_url - In the implementation block
@property (assign) double loadingProgress; 
@property (assign) char automaticallyAdjustWindowPosition; 
@property (readonly) NSDictionary * displayState; 
@property (readonly) NSImage * transitionImage; 
@property (getter=isAnimating,readonly) char animating; 
+(void)_resetHelperActiveState;
+(char)_isUIHelperMaybeRunning;
+(void)_discardAllActiveOpeners;
+(void)_checkSeamlessOpeningState;
+(void)setIgnorePIDCheck:(char)arg1 ;
+(void)_someWindowWillOrderOnScreen:(id)arg1 ;
+(void)_pushSeamlessEventForURL:(id)arg1 ;
+(void)_popSeamlessEventForURL:(id)arg1 ;
+(void)_pushShowWindow:(id)arg1 forURL:(id)arg2 ;
+(void)_popShowWindow:(id)arg1 forURL:(id)arg2 ;
+(id)seamlessApplicationOpenerForURL:(id)arg1 ;
+(void)initialize;
+(char)isSeamlesslyOpeningDocuments;
+(id)seamlessDocumentOpenerForURL:(id)arg1 ;
+(id)existingSeamlessDocumentOpenerForURL:(id)arg1 ;
-(char)_beginShowingWindow:(id)arg1 effect:(id*)arg2 ;
-(void)_endShowingWindow:(id)arg1 contentFrame:(CGRect)arg2 alreadyVisible:(char)arg3 effect:(id)arg4 ;
-(void)deferDocumentLoading;
-(void)deferDocumentShowing;
-(char)automaticallyAdjustWindowPosition;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(char)isAnimating;
-(void)beginDocumentOpening;
-(void)endDocumentOpening;
-(void)beginDocumentLoading;
-(void)endDocumentLoading;
-(void)showWindow:(id)arg1 contentFrame:(CGRect)arg2 withBlock:(/*^block*/id)arg3 ;
-(char)isOpening;
-(double)loadingProgress;
-(void)setLoadingProgress:(double)arg1 ;
-(NSDictionary *)displayState;
-(NSImage *)transitionImage;
-(void)setAutomaticallyAdjustWindowPosition:(char)arg1 ;
-(void)showLoadingWindow;
@end

