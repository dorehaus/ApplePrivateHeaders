/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/Versions/A/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TLKView.h>

@class TLKImage, NSArray, TLKImageView, TLKContentsContainerView;

@interface TLKMediaInfoView : TLKView {

	TLKImage* _image;
	NSArray* _contents;
	TLKImageView* _imageView;
	TLKContentsContainerView* _contentsContainer;

}

@property (nonatomic,retain) TLKImageView * imageView;                                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) TLKContentsContainerView * contentsContainer;              //@synthesize contentsContainer=_contentsContainer - In the implementation block
@property (nonatomic,retain) TLKImage * image;                                          //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSArray * contents;                                        //@synthesize contents=_contents - In the implementation block
-(void)setImage:(TLKImage *)arg1 ;
-(NSArray *)contents;
-(TLKImage *)image;
-(void)setContents:(NSArray *)arg1 ;
-(TLKImageView *)imageView;
-(void)setImageView:(TLKImageView *)arg1 ;
-(id)setupContentView;
-(void)observedPropertiesChanged;
-(void)setContentsContainer:(TLKContentsContainerView *)arg1 ;
-(TLKContentsContainerView *)contentsContainer;
-(char)imageViewIsHidden;
-(id)titleLabelStrings;
-(id)detailLabelStrings;
@end

