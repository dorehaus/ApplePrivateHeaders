/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/Versions/A/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKitUI/AKAuthorizationSubPane.h>

@class NSImageView, NSArray, NSImage;

@interface AKAuthorizationSubPaneImage : AKAuthorizationSubPane {

	NSImageView* _imageView;
	NSArray* _imageViewConstraints;

}

@property (nonatomic,readonly) NSImageView * imageView;                 //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) NSImage * image; 
@property (nonatomic,copy) NSArray * imageViewConstraints;              //@synthesize imageViewConstraints=_imageViewConstraints - In the implementation block
+(id)_imageViewWithImage:(id)arg1 ;
-(void)setImage:(NSImage *)arg1 ;
-(NSImage *)image;
-(id)initWithImage:(id)arg1 ;
-(NSImageView *)imageView;
-(void)addToStackView:(id)arg1 context:(id)arg2 ;
-(void)addToConstraints:(id)arg1 context:(id)arg2 ;
-(void)setImageViewConstraints:(NSArray *)arg1 ;
-(NSArray *)imageViewConstraints;
@end
