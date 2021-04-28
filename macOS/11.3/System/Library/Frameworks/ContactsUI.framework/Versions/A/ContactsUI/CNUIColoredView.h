/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <AppKit/NSView.h>

@class NSColor;

@interface CNUIColoredView : NSView {

	NSColor* _backgroundColor;

}

@property (nonatomic,retain) NSColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(id)init;
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(char)wantsUpdateLayer;
-(void)updateLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSColor *)backgroundColor;
@end

