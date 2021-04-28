/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIContentButton.h>
#import <libobjc.A.dylib/NSCollectionViewElement.h>
#import <SiriUI/SiriUIReusableView.h>
#import <SiriUI/SiriUISizableHeaderView.h>

@class NSImageView, SiriUISnippetViewController, NSString, SiriUIContentLabel, SiriUIKeyline;

@interface SiriUIReusableHeaderView : SiriUIContentButton <NSCollectionViewElement, SiriUIReusableView, SiriUISizableHeaderView> {

	NSImageView* _chevronView;
	SiriUISnippetViewController* _snippetViewController;
	NSString* _titleText;
	long long _keylineType;
	SiriUIContentLabel* _headerLabel;
	SiriUIKeyline* _keyline;

}

@property (nonatomic,readonly) SiriUIContentLabel * headerLabel;                                      //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,readonly) SiriUIKeyline * keyline;                                               //@synthesize keyline=_keyline - In the implementation block
@property (nonatomic,copy) NSString * titleText;                                                      //@synthesize titleText=_titleText - In the implementation block
@property (assign,nonatomic) long long keylineType;                                                   //@synthesize keylineType=_keylineType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * identifier; 
@property (assign,nonatomic,__weak) SiriUISnippetViewController * snippetViewController;              //@synthesize snippetViewController=_snippetViewController - In the implementation block
+(id)reuseIdentifier;
+(id)elementKind;
+(double)defaultHeight;
-(char)isFlipped;
-(void)updateConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(char)wantsLayer;
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(SiriUIKeyline *)keyline;
-(double)desiredHeightForWidth:(double)arg1 ;
-(SiriUIContentLabel *)headerLabel;
-(long long)keylineType;
-(void)setKeylineType:(long long)arg1 ;
-(SiriUISnippetViewController *)snippetViewController;
-(void)setSnippetViewController:(SiriUISnippetViewController *)arg1 ;
-(void)setAttributedTitleText:(id)arg1 ;
@end
