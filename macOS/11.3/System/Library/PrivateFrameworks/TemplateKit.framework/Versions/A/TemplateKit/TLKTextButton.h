/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/Versions/A/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <TemplateKit/TLKSButton.h>

@class TLKRichText, TLKImage, TLKImageView;

@interface TLKTextButton : TLKSButton {

	char _matchesHeightForAlignmentRectWithIntrinsicContentSize;
	char _attributedTitleExplicitlySet;
	unsigned long long _prominence;
	TLKRichText* _richTitle;
	TLKImage* _tlkImage;
	TLKImageView* _tlkImageView;

}

@property (assign) char attributedTitleExplicitlySet;                                       //@synthesize attributedTitleExplicitlySet=_attributedTitleExplicitlySet - In the implementation block
@property (nonatomic,retain) TLKImageView * tlkImageView;                                   //@synthesize tlkImageView=_tlkImageView - In the implementation block
@property (assign,nonatomic) unsigned long long prominence;                                 //@synthesize prominence=_prominence - In the implementation block
@property (nonatomic,copy) TLKRichText * richTitle;                                         //@synthesize richTitle=_richTitle - In the implementation block
@property (nonatomic,copy) TLKImage * tlkImage;                                             //@synthesize tlkImage=_tlkImage - In the implementation block
@property (assign,nonatomic) CGSize minimumSize; 
@property (assign,nonatomic) CGSize maximumSize; 
@property (assign,nonatomic) char alwaysShowPlaceholderView; 
@property (assign) char matchesHeightForAlignmentRectWithIntrinsicContentSize;              //@synthesize matchesHeightForAlignmentRectWithIntrinsicContentSize=_matchesHeightForAlignmentRectWithIntrinsicContentSize - In the implementation block
-(id)init;
-(void)setImage:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)setAlignment:(long long)arg1 ;
-(void)layout;
-(CGSize)minimumSize;
-(CGSize)maximumSize;
-(char)allowsVibrancy;
-(CGSize)intrinsicContentSize;
-(void)viewDidChangeEffectiveAppearance;
-(void)viewDidMoveToWindow;
-(id)font;
-(void)setFont:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setMinimumSize:(CGSize)arg1 ;
-(void)setMaximumSize:(CGSize)arg1 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(unsigned long long)prominence;
-(void)setProminence:(unsigned long long)arg1 ;
-(TLKImage *)tlkImage;
-(char)alwaysShowPlaceholderView;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)setTlkImage:(TLKImage *)arg1 ;
-(void)setAlwaysShowPlaceholderView:(char)arg1 ;
-(void)setMatchesHeightForAlignmentRectWithIntrinsicContentSize:(char)arg1 ;
-(TLKRichText *)richTitle;
-(void)setRichTitle:(TLKRichText *)arg1 ;
-(TLKImageView *)tlkImageView;
-(void)setTlkImageView:(TLKImageView *)arg1 ;
-(char)isImageMode;
-(char)attributedTitleExplicitlySet;
-(void)updateAttributedTitle;
-(char)matchesHeightForAlignmentRectWithIntrinsicContentSize;
-(void)matchHeightForAlignmentRectWithIntrinsicContentSizeIfNecessary;
-(char)hasTemplateUIImage;
-(void)setAttributedTitleExplicitlySet:(char)arg1 ;
@end
