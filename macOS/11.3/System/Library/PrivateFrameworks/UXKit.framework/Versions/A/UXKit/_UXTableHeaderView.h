/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UXKit.framework/Versions/A/UXKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UXKit/UXKit-Structs.h>
#import <UXKit/UXCollectionReusableView.h>

@class UXView, UXLabel, NSBox;

@interface _UXTableHeaderView : UXCollectionReusableView {

	char _floating;
	UXView* _contentView;
	UXLabel* _titleLabel;
	NSBox* _separator;

}

@property (assign,getter=isFloating,nonatomic) char floating;              //@synthesize floating=_floating - In the implementation block
@property (nonatomic,readonly) UXView * contentView;                       //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) UXLabel * titleLabel;                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) NSBox * separator;                          //@synthesize separator=_separator - In the implementation block
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(UXView *)contentView;
-(void)mouseDown:(id)arg1 ;
-(void)setFloating:(char)arg1 ;
-(char)isFloating;
-(NSBox *)separator;
-(UXLabel *)titleLabel;
@end
