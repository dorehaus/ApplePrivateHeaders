/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemUIPlugin.framework/Versions/A/SystemUIPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SystemUIPlugin/SystemUIPlugin-Structs.h>
#import <AppKit/NSView.h>

@class NSMenu, NSMenuExtra, NSImage;

@interface NSMenuExtraView : NSView {

	NSMenu* _menu;
	NSMenuExtra* _menuExtra;
	NSImage* _image;
	NSImage* _alternateImage;

}

@property (nonatomic,retain) NSImage * image;                       //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSImage * alternateImage;              //@synthesize alternateImage=_alternateImage - In the implementation block
-(void)setImage:(NSImage *)arg1 ;
-(NSImage *)image;
-(void)mouseDown:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setMenu:(id)arg1 ;
-(NSImage *)alternateImage;
-(void)setAlternateImage:(NSImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 menuExtra:(id)arg2 ;
@end

