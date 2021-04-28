/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/Versions/A/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <AppKit/NSButton.h>

@class NSString;

@interface PKContactButton : NSButton {

	unsigned long long _type;
	NSString* _value;

}

@property (readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (readonly) NSString * value;                     //@synthesize value=_value - In the implementation block
+(id)contactViewWithPhone:(id)arg1 email:(id)arg2 website:(id)arg3 ;
-(unsigned long long)type;
-(NSString *)value;
-(void)drawRect:(CGRect)arg1 ;
-(void)drawFocusRingMask;
-(CGRect)focusRingMaskBounds;
-(id)_buttonTitle;
-(id)initWithType:(unsigned long long)arg1 value:(id)arg2 ;
-(void)buttonAction:(id)arg1 ;
-(id)_backgroundCirclePathInRect:(CGRect)arg1 ;
-(id)_imageGlyph;
-(id)_popOverContent;
-(id)_contactURL;
@end
