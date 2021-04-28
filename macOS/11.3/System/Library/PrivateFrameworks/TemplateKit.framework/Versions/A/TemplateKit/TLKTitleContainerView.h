/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/Versions/A/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TLKStackView.h>

@class TLKRichTextField, TLKLabel, TLKImageView;

@interface TLKTitleContainerView : TLKStackView {

	TLKRichTextField* _titleField;
	TLKLabel* _secondaryLabel;
	TLKImageView* _secondaryImageView;

}

@property (nonatomic,retain) TLKRichTextField * titleField;                  //@synthesize titleField=_titleField - In the implementation block
@property (nonatomic,retain) TLKLabel * secondaryLabel;                      //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,retain) TLKImageView * secondaryImageView;              //@synthesize secondaryImageView=_secondaryImageView - In the implementation block
+(char)hasNonBoldFormattingInRichText:(id)arg1 ;
-(id)init;
-(id)titleFont;
-(TLKLabel *)secondaryLabel;
-(void)setSecondaryLabel:(TLKLabel *)arg1 ;
-(id)titleLabel;
-(id)viewForLastBaselineLayout;
-(id)viewForFirstBaselineLayout;
-(void)setTitleField:(TLKRichTextField *)arg1 ;
-(TLKRichTextField *)titleField;
-(void)updateResultWithTitle:(id)arg1 secondaryTitle:(id)arg2 image:(id)arg3 detached:(char)arg4 useCompactMode:(char)arg5 truncateMiddle:(char)arg6 ;
-(id)titleLabelString;
-(id)secondaryTitleLabelString;
-(TLKImageView *)secondaryImageView;
-(void)setSecondaryImageView:(TLKImageView *)arg1 ;
@end

