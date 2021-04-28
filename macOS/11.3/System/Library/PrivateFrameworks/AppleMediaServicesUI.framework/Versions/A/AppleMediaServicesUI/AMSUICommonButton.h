/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/Versions/A/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <AppKit/NSButton.h>

@class NSColor, CALayer;

@interface AMSUICommonButton : NSButton {

	NSColor* _backgroundColor;

}

@property (retain) NSColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (retain) CALayer * layer; 
-(id)init;
-(CALayer *)layer;
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(char)isFlipped;
-(NSColor *)backgroundColor;
-(void)setLayer:(CALayer *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)_setup;
@end

