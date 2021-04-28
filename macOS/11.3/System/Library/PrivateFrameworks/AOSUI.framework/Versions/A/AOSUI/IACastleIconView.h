/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AOSUI/AOSUI-Structs.h>
#import <AppKit/NSView.h>

@class NSImage;

@interface IACastleIconView : NSView {

	NSImage* _icon;
	char _enabled;

}

@property (assign,nonatomic) char enabled;                //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSImage * icon;              //@synthesize icon=_icon - In the implementation block
-(char)enabled;
-(void)setEnabled:(char)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(void)setIcon:(NSImage *)arg1 ;
-(NSImage *)icon;
-(void)drawRect:(CGRect)arg1 ;
@end
