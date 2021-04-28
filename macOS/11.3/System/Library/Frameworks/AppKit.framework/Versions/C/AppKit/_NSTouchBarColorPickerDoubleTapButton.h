/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSView.h>

@class _NSTouchBarColorPickerSwatch, NSImageView, NSColor;

@interface _NSTouchBarColorPickerDoubleTapButton : NSView {

	_NSTouchBarColorPickerSwatch* _swatchView;
	NSImageView* _armedImageView;
	NSImageView* _successImageView;
	long long _state;
	char _prearmed;
	/*^block*/id _actionHandler;

}

@property (copy) NSColor * color; 
@property (copy) id actionHandler;              //@synthesize actionHandler=_actionHandler - In the implementation block
@property (assign) char prearmed;               //@synthesize prearmed=_prearmed - In the implementation block
-(void)dealloc;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSColor *)color;
-(void)setColor:(NSColor *)arg1 ;
-(id)declaredLayoutConstraints;
-(void)highlight:(char)arg1 ;
-(long long)_defaultState;
-(void)handlePress:(id)arg1 ;
-(void)updateSubviewsForState;
-(char)prearmed;
-(void)fallback;
-(void)unsetFallbackTimer;
-(void)engage;
-(void)setFallbackTimer;
-(id)initWithArmedImage:(id)arg1 successImage:(id)arg2 ;
-(void)setPrearmed:(char)arg1 ;
-(id)actionHandler;
-(void)setActionHandler:(id)arg1 ;
@end

