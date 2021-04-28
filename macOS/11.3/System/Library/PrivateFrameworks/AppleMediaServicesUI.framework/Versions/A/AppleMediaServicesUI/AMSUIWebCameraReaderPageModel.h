/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/Versions/A/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <libobjc.A.dylib/AMSUIWebPageProvider.h>

@protocol AMSUIWebActionRunnable;
@class AMSUIWebNavigationBarModel, NSString, AMSMetricsEvent, AMSUIWebClientContext, NSViewController;

@interface AMSUIWebCameraReaderPageModel : NSObject <AMSUIWebPageProvider> {

	NSString* _backgroundColor;
	AMSMetricsEvent* _impressionEvent;
	AMSUIWebNavigationBarModel* _navigationBar;
	NSString* _bottomLinkLabel;
	id<AMSUIWebActionRunnable> _bottomLinkAction;
	long long _pageType;
	NSString* _primaryLabel;
	NSString* _secondaryLabel;
	id<AMSUIWebActionRunnable> _action;
	AMSUIWebClientContext* _context;
	NSViewController* _presentedViewController;
	CGSize _windowSize;

}

@property (retain) id<AMSUIWebActionRunnable> action;                         //@synthesize action=_action - In the implementation block
@property (retain) AMSUIWebClientContext * context;                           //@synthesize context=_context - In the implementation block
@property (__weak) NSViewController * presentedViewController;                //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (retain) NSString * bottomLinkLabel;                                //@synthesize bottomLinkLabel=_bottomLinkLabel - In the implementation block
@property (retain) id<AMSUIWebActionRunnable> bottomLinkAction;               //@synthesize bottomLinkAction=_bottomLinkAction - In the implementation block
@property (assign) long long pageType;                                        //@synthesize pageType=_pageType - In the implementation block
@property (retain) NSString * primaryLabel;                                   //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (retain) NSString * secondaryLabel;                                 //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (readonly) AMSUIWebNavigationBarModel * navigationBar;              //@synthesize navigationBar=_navigationBar - In the implementation block
@property (readonly) NSString * backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (readonly) AMSMetricsEvent * impressionEvent;                       //@synthesize impressionEvent=_impressionEvent - In the implementation block
@property (readonly) char disableReappearPlaceholder; 
@property (readonly) CGSize windowSize;                                       //@synthesize windowSize=_windowSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<AMSUIWebActionRunnable>)action;
-(void)setAction:(id<AMSUIWebActionRunnable>)arg1 ;
-(AMSUIWebClientContext *)context;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(NSString *)backgroundColor;
-(NSString *)secondaryLabel;
-(void)setSecondaryLabel:(NSString *)arg1 ;
-(CGSize)windowSize;
-(AMSMetricsEvent *)impressionEvent;
-(long long)pageType;
-(void)setPageType:(long long)arg1 ;
-(id)createViewController;
-(AMSUIWebNavigationBarModel *)navigationBar;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(void)setPrimaryLabel:(NSString *)arg1 ;
-(NSString *)primaryLabel;
-(id<AMSUIWebActionRunnable>)bottomLinkAction;
-(void)setBottomLinkAction:(id<AMSUIWebActionRunnable>)arg1 ;
-(char)disableReappearPlaceholder;
-(NSString *)bottomLinkLabel;
-(void)setBottomLinkLabel:(NSString *)arg1 ;
-(NSViewController *)presentedViewController;
-(void)setPresentedViewController:(NSViewController *)arg1 ;
@end

