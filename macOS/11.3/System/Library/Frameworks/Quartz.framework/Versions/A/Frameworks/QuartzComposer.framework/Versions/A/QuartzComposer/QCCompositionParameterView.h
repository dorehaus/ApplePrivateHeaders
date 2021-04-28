/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <AppKit/NSView.h>

@interface QCCompositionParameterView : NSView {

	void* _QCCompositionParameterViewPrivate;

}
-(void)finalize;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBorderType:(unsigned long long)arg1 ;
-(id)backgroundColor;
-(void)setDrawsBackground:(char)arg1 ;
-(unsigned long long)borderType;
-(char)drawsBackground;
-(void)_finishInitialization;
-(char)hasParameters;
-(void)_setPatch:(id)arg1 ;
-(void)__patchUpdated:(id)arg1 ;
-(void)setCompositionRenderer:(id)arg1 ;
-(id)compositionRenderer;
@end

