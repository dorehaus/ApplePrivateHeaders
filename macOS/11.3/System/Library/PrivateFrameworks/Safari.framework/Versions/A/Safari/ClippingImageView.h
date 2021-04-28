/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSImageView.h>

@class ClippingIconImageRenderer;

@interface ClippingImageView : NSImageView {

	ClippingIconImageRenderer* _renderer;

}

@property (assign,nonatomic) long long imageViewStyle; 
@property (assign,nonatomic) char drawsDropShadowAndMask; 
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDrawsDropShadowAndMask:(char)arg1 ;
-(char)drawsDropShadowAndMask;
-(void)setImageViewStyle:(long long)arg1 ;
-(long long)imageViewStyle;
@end

