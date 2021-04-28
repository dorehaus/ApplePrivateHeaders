/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SocialUI/SocialUI-Structs.h>
#import <AppKit/NSView.h>

@class NSImage;

@interface SOStaticImageView : NSView {

	char _imageIsOpaque;
	NSImage* _image;

}

@property (nonatomic,retain) NSImage * image;              //@synthesize image=_image - In the implementation block
@property (assign) char imageIsOpaque;                     //@synthesize imageIsOpaque=_imageIsOpaque - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)setImage:(NSImage *)arg1 ;
-(char)isOpaque;
-(char)wantsUpdateLayer;
-(void)updateLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(NSImage *)image;
-(void)viewDidChangeBackingProperties;
-(void)_commonSOStaticImageViewInit;
-(char)imageIsOpaque;
-(void)setImageIsOpaque:(char)arg1 ;
@end

