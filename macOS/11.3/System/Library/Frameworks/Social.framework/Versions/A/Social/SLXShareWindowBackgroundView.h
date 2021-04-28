/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Social.framework/Versions/A/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <AppKit/NSView.h>

@class NSTextView, NSTextField;

@interface SLXShareWindowBackgroundView : NSView {

	NSTextView* _messageTextView;
	NSTextField* _charactersCountTextField;
	int _textureStyle;

}

@property (assign) int textureStyle;              //@synthesize textureStyle=_textureStyle - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(int)textureStyle;
-(void)drawSeparationLineAtHeight:(double)arg1 ;
-(void)setTextureStyle:(int)arg1 ;
@end

