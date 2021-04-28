/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/Versions/A/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <TemplateKit/TLKView.h>

@class TLKLabel, NSView;

@interface TLKRoundedCornerLabel : TLKView {

	TLKLabel* _label;
	unsigned long long _sizeConfiguration;
	NSView* _borderView;

}

@property (nonatomic,retain) NSView * borderView;                               //@synthesize borderView=_borderView - In the implementation block
@property (nonatomic,retain) TLKLabel * label;                                  //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned long long sizeConfiguration;              //@synthesize sizeConfiguration=_sizeConfiguration - In the implementation block
-(TLKLabel *)label;
-(void)setLabel:(TLKLabel *)arg1 ;
-(void)layout;
-(void)viewDidChangeEffectiveAppearance;
-(void)viewDidMoveToWindow;
-(CGSize)effectiveLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)updateFont;
-(id)initWithProminence:(unsigned long long)arg1 ;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)setBorderView:(NSView *)arg1 ;
-(unsigned long long)sizeConfiguration;
-(NSView *)borderView;
-(void)setSizeConfiguration:(unsigned long long)arg1 ;
@end
