/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/Versions/A/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CardKit/CardKit-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/CRKCardSectionView.h>

@protocol CRKComposableView;
@class NSString, NSView;

@interface CRKContainerCardSectionView : NSView <CRKCardSectionView> {

	NSView* _userInputEventInterceptView;
	NSView*<CRKComposableView> _composedSuperview;
	NSString* _cardSectionViewIdentifier;
	NSView* _contentView;
	CGSize _contentSize;

}

@property (nonatomic,retain) NSView * contentView;                                             //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                               //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) char interceptsTouches; 
@property (nonatomic,copy) NSString * cardSectionViewIdentifier;                               //@synthesize cardSectionViewIdentifier=_cardSectionViewIdentifier - In the implementation block
@property (assign,nonatomic,__weak) NSView*<CRKComposableView> composedSuperview;              //@synthesize composedSuperview=_composedSuperview - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFitsCardSection:(id)arg1 boundingSize:(CGSize)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSView *)contentView;
-(void)setContentView:(NSView *)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(CGSize)contentSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)resizeSubviewsWithOldSize:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)removeFromComposedSuperview;
-(NSString *)cardSectionViewIdentifier;
-(void)setCardSectionViewIdentifier:(NSString *)arg1 ;
-(NSView*<CRKComposableView>)composedSuperview;
-(void)setComposedSuperview:(NSView*<CRKComposableView>)arg1 ;
-(void)setInterceptsTouches:(char)arg1 ;
-(char)interceptsTouches;
@end
