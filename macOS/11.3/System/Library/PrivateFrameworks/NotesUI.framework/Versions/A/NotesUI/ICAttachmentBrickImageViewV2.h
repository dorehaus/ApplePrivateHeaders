/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/Versions/A/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <AppKit/NSView.h>

@class NSImage, CALayer;

@interface ICAttachmentBrickImageViewV2 : NSView {

	char _transparentBackground;
	NSImage* _image;
	unsigned long long _imageScaling;
	CALayer* _imageLayer;

}

@property (nonatomic,retain) CALayer * imageLayer;                         //@synthesize imageLayer=_imageLayer - In the implementation block
@property (nonatomic,retain) NSImage * image;                              //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) unsigned long long imageScaling;              //@synthesize imageScaling=_imageScaling - In the implementation block
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) char transparentBackground;                   //@synthesize transparentBackground=_transparentBackground - In the implementation block
-(void)setImage:(NSImage *)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSImage *)image;
-(void)setCornerRadius:(double)arg1 ;
-(void)setImageScaling:(unsigned long long)arg1 ;
-(void)setContentsScale:(double)arg1 ;
-(double)cornerRadius;
-(unsigned long long)imageScaling;
-(void)viewDidChangeBackingProperties;
-(void)setTransparentBackground:(char)arg1 ;
-(char)transparentBackground;
-(void)updateBackgroundColor;
-(CALayer *)imageLayer;
-(void)setImageLayer:(CALayer *)arg1 ;
-(void)updateSublayersBounds:(CGRect)arg1 ;
@end

