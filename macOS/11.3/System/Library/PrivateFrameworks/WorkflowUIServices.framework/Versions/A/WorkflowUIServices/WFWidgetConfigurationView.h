/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUIServices.framework/Versions/A/WorkflowUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUIServices/WorkflowUIServices-Structs.h>
#import <AppKit/NSView.h>

@class NSView, WFWidgetConfigurationContainerView, WFWidgetConfigurationRemoteViewController;

@interface WFWidgetConfigurationView : NSView {

	CGSize _preferredConfigurationCardViewSize;
	NSView* _remoteView;
	WFWidgetConfigurationContainerView* _containerView;
	WFWidgetConfigurationRemoteViewController* _remoteViewController;
	CGRect _overridingCardViewFrame;

}

@property (nonatomic,readonly) NSView * remoteView;                                                         //@synthesize remoteView=_remoteView - In the implementation block
@property (nonatomic,retain) WFWidgetConfigurationContainerView * containerView;                            //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) WFWidgetConfigurationRemoteViewController * remoteViewController;              //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (assign,nonatomic) CGRect overridingCardViewFrame;                                                //@synthesize overridingCardViewFrame=_overridingCardViewFrame - In the implementation block
-(void)layout;
-(char)isFlipped;
-(id)initWithFrame:(CGRect)arg1 ;
-(WFWidgetConfigurationContainerView *)containerView;
-(void)setContainerView:(WFWidgetConfigurationContainerView *)arg1 ;
-(NSView *)remoteView;
-(WFWidgetConfigurationRemoteViewController *)remoteViewController;
-(void)setRemoteViewController:(WFWidgetConfigurationRemoteViewController *)arg1 ;
-(CGRect)overridingCardViewFrame;
-(id)initWithFrame:(CGRect)arg1 preferredCardSize:(CGSize)arg2 ;
-(void)setOverridingCardViewFrame:(CGRect)arg1 ;
@end
