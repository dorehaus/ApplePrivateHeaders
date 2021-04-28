/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/Versions/A/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <libobjc.A.dylib/AMSUIWebPageProvider.h>

@class NSString, AMSMetricsEvent, AMSUIWebNavigationBarModel, AMSUIWebClientContext;

@interface AMSUIWebPageModel : NSObject <AMSUIWebPageProvider> {

	NSString* _backgroundColor;
	AMSMetricsEvent* _impressionEvent;
	AMSUIWebNavigationBarModel* _navigationBar;
	AMSUIWebClientContext* _context;
	CGSize _windowSize;

}

@property (retain) AMSUIWebClientContext * context;                           //@synthesize context=_context - In the implementation block
@property (readonly) AMSUIWebNavigationBarModel * navigationBar;              //@synthesize navigationBar=_navigationBar - In the implementation block
@property (readonly) NSString * backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (readonly) AMSMetricsEvent * impressionEvent;                       //@synthesize impressionEvent=_impressionEvent - In the implementation block
@property (readonly) char disableReappearPlaceholder; 
@property (readonly) CGSize windowSize;                                       //@synthesize windowSize=_windowSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AMSUIWebClientContext *)context;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(NSString *)backgroundColor;
-(CGSize)windowSize;
-(AMSMetricsEvent *)impressionEvent;
-(id)createViewController;
-(AMSUIWebNavigationBarModel *)navigationBar;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(char)disableReappearPlaceholder;
@end

