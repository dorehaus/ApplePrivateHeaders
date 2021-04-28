/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSColor;


@protocol NSTouchBarColorPickerView <NSObject>
@property (copy) NSColor * currentColor; 
@property (assign) char allowsAlpha; 
@property (__weak) id target; 
@property (assign) SEL action; 
@optional
-(void)showMostRecentSavedColor;

@required
+(long long)preferredColorSwatchType;
-(void)setTarget:(id)arg1;
-(id)target;
-(SEL)action;
-(void)setAction:(SEL)arg1;
-(NSColor *)currentColor;
-(void)setCurrentColor:(id)arg1;
-(char)allowsAlpha;
-(void)setAllowsAlpha:(char)arg1;

@end

