/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <AppKit/NSPanel.h>

@class QLBubble;

@interface QLBubbleWindow : NSPanel {

	double _absolutePosition;
	QLBubble* _bubble;

}

@property (assign) QLBubble * bubble;              //@synthesize bubble=_bubble - In the implementation block
-(void)setBubble:(QLBubble *)arg1 ;
-(void)setFrame:(CGRect)arg1 display:(char)arg2 ;
-(void)mouseDown:(id)arg1 ;
-(char)_presenterOnly;
-(char)isKeyWindow;
-(void)makeKeyAndOrderFront:(id)arg1 ;
-(id)initWithContentRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(char)arg4 ;
-(char)canBecomeKeyWindow;
-(id)standardWindowButton:(unsigned long long)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(void)endEditingFor:(id)arg1 ;
-(id)fieldEditor:(char)arg1 forObject:(id)arg2 ;
-(id)_cornerMask;
-(char)_ownerOnly;
-(char)_canBecomeSecondaryKeyWindow;
-(QLBubble *)bubble;
@end
