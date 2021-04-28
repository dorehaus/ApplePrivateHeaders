/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <SiriUI/SiriUIViewController.h>

@protocol SiriUIAceObjectViewControllerDelegate;
@class AceObject, AFAnalyticsTurnBasedInstrumentationContext, SAUISnippet, NSString;

@interface SiriUIBaseSnippetViewController : NSViewController <SiriUIViewController> {

	AceObject* aceObject;
	AFAnalyticsTurnBasedInstrumentationContext* _instrumentationTurnContext;
	id<SiriUIAceObjectViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) AFAnalyticsTurnBasedInstrumentationContext * instrumentationTurnContext;              //@synthesize instrumentationTurnContext=_instrumentationTurnContext - In the implementation block
@property (nonatomic,retain) SAUISnippet * snippet; 
@property (assign,nonatomic,__weak) id<SiriUIAceObjectViewControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AceObject * aceObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SiriUIAceObjectViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SiriUIAceObjectViewControllerDelegate>)arg1 ;
-(SAUISnippet *)snippet;
-(void)setSnippet:(SAUISnippet *)arg1 ;
-(AceObject *)aceObject;
-(void)setAceObject:(AceObject *)arg1 ;
-(double)desiredHeight;
-(void)siriWillActivateFromSource:(long long)arg1 ;
-(void)siriDidDeactivate;
-(AFAnalyticsTurnBasedInstrumentationContext *)instrumentationTurnContext;
-(void)wasAddedToTranscript;
-(void)setInstrumentationTurnContext:(AFAnalyticsTurnBasedInstrumentationContext *)arg1 ;
@end

