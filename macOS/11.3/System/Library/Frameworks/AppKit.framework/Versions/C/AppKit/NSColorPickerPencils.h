/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSColorPicker.h>
#import <libobjc.A.dylib/NSColorPickingCustom.h>

@class NSTextField, NSView, NSColorPickerPencilView;

@interface NSColorPickerPencils : NSColorPicker <NSColorPickingCustom> {

	id _colorNameTextField;
	id _pencilView;
	id _containerView;

}

@property (retain) NSTextField * colorNameTextField;                  //@synthesize colorNameTextField=_colorNameTextField - In the implementation block
@property (retain) NSView * containerView;                            //@synthesize containerView=_containerView - In the implementation block
@property (retain) NSColorPickerPencilView * pencilView;              //@synthesize pencilView=_pencilView - In the implementation block
-(void)dealloc;
-(long long)currentMode;
-(void)setColor:(id)arg1 ;
-(NSView *)containerView;
-(void)setContainerView:(NSView *)arg1 ;
-(id)initWithPickerMask:(unsigned long long)arg1 colorPanel:(id)arg2 ;
-(id)provideNewButtonImage;
-(id)buttonToolTip;
-(CGSize)minContentSize;
-(char)supportsMode:(long long)arg1 ;
-(id)provideNewView:(char)arg1 ;
-(void)changeColor:(id)arg1 ;
-(double)_insertionOrder;
-(void)setColorNameTextField:(NSTextField *)arg1 ;
-(void)setPencilView:(NSColorPickerPencilView *)arg1 ;
-(NSColorPickerPencilView *)pencilView;
-(NSTextField *)colorNameTextField;
-(void)changeDisplayedColorName:(id)arg1 ;
@end

