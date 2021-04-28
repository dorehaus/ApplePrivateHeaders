/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/Versions/A/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <AppleMediaServicesUI/AMSUICommonView.h>

@protocol AMSUIWebActionRunnable;
@class NSButton, NSTextField;

@interface AMSUIWebCameraReaderInfoView : AMSUICommonView {

	NSButton* _bottomLink;
	id<AMSUIWebActionRunnable> _bottomLinkAction;
	NSTextField* _primaryLabel;
	NSTextField* _secondaryLabel;

}

@property (nonatomic,retain) NSButton * bottomLink;                                    //@synthesize bottomLink=_bottomLink - In the implementation block
@property (nonatomic,retain) id<AMSUIWebActionRunnable> bottomLinkAction;              //@synthesize bottomLinkAction=_bottomLinkAction - In the implementation block
@property (nonatomic,retain) NSTextField * primaryLabel;                               //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,retain) NSTextField * secondaryLabel;                             //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(NSTextField *)secondaryLabel;
-(void)setSecondaryLabel:(NSTextField *)arg1 ;
-(void)layoutSubviews;
-(id)_createLabelWithLines:(long long)arg1 title:(char)arg2 ;
-(void)setPrimaryLabel:(NSTextField *)arg1 ;
-(NSTextField *)primaryLabel;
-(void)_bottomLinkSelected:(id)arg1 ;
-(id)_createButtonWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)setBottomLink:(NSButton *)arg1 ;
-(NSButton *)bottomLink;
-(id<AMSUIWebActionRunnable>)bottomLinkAction;
-(void)setBottomLinkAction:(id<AMSUIWebActionRunnable>)arg1 ;
@end

