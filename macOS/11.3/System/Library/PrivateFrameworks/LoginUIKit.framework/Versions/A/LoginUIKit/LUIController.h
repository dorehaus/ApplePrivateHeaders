/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSView, NSDictionary;

@interface LUIController : NSObject {

	/*^block*/id _actionHandler;
	NSView* _contentView;
	int _style;
	NSDictionary* _attributes;
	NSDictionary* _pressedAttributes;

}

@property (readonly) NSView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (readonly) int style;                         //@synthesize style=_style - In the implementation block
-(void)tearDownController;
-(void)pauseController;
-(void)resumeController;
-(id)attributedStringFont;
-(id)_pressedAttributedStringFromString:(id)arg1 ;
-(id)imageForCurrentStyleFromImage:(id)arg1 pressed:(char)arg2 ;
-(void)dealloc;
-(id)init;
-(int)style;
-(NSView *)contentView;
-(id)initWithStyle:(int)arg1 ;
-(void)setActionHandler:(/*^block*/id)arg1 ;
-(void)setUIEnabled:(char)arg1 ;
-(id)_attributedStringFromString:(id)arg1 ;
@end

