/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IASUtilities.framework/Versions/A/IASUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IASUtilities/IASUtilities-Structs.h>
#import <AppKit/NSView.h>

@class CAShapeLayer, IASCursiveTextPath, NSEvent, NSTextField, NSImageView, NSArray, NSImage, NSBundle;

@interface IASCursiveTextView : NSView {

	CAShapeLayer* textLayer;
	IASCursiveTextPath* textPath;
	CGAffineTransform textTransform;
	NSEvent* eventMonitor;
	NSTextField* dismissButtonLabel;
	NSImageView* dismissButtonImageView;
	NSArray* _languages;
	NSImage* _ltrButtonImage;
	NSImage* _rtlButtonImage;
	NSBundle* _locBundle;

}

@property (nonatomic,retain) NSImage * ltrButtonImage;              //@synthesize ltrButtonImage=_ltrButtonImage - In the implementation block
@property (nonatomic,retain) NSImage * rtlButtonImage;              //@synthesize rtlButtonImage=_rtlButtonImage - In the implementation block
@property (assign,nonatomic) NSBundle * locBundle;                  //@synthesize locBundle=_locBundle - In the implementation block
@property (readonly) float duration; 
@property (readonly) NSArray * languages;                           //@synthesize languages=_languages - In the implementation block
-(void)addGetStartedIcon;
-(void)addGetStartedLabel;
-(NSImage *)rtlButtonImage;
-(NSImage *)ltrButtonImage;
-(void)removeEventMonitor;
-(id)imageForLanguage:(id)arg1 ;
-(id)localizedGetStartedStringForLanguageCode:(id)arg1 ;
-(NSBundle *)locBundle;
-(void)setLtrButtonImage:(NSImage *)arg1 ;
-(void)setRtlButtonImage:(NSImage *)arg1 ;
-(void)setLocBundle:(NSBundle *)arg1 ;
-(void)layout;
-(float)duration;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)acceptsFirstResponder;
-(char)acceptsFirstMouse:(id)arg1 ;
-(NSArray *)languages;
-(void)setTime:(float)arg1 ;
-(void)configure;
-(void)setCurrentLanguageCode:(id)arg1 ;
-(void)loadText:(id)arg1 pointSize:(double)arg2 ;
@end
