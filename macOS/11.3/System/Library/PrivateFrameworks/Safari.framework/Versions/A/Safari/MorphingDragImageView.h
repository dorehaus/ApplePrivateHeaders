/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSView.h>

@class CALayer, NSImage;

@interface MorphingDragImageView : NSView {

	CALayer* _previousImageLayer;
	CALayer* _currentImageLayer;
	NSImage* _image;

}

@property (nonatomic,retain) NSImage * image;              //@synthesize image=_image - In the implementation block
-(void)setImage:(NSImage *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSImage *)image;
-(void)setImage:(id)arg1 animated:(char)arg2 ;
-(id)_createImageLayer;
-(id)_animationWithKeyPath:(id)arg1 fromValue:(id)arg2 ;
@end

