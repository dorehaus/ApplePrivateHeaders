/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/Versions/A/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <AppleMediaServicesUI/AMSUIWebAction.h>
#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@protocol AMSUIWebPageProvider;
@class NSString, AMSUIWebLoadingPageModel, NSDictionary, AMSUIWebNavigationBarModel;

@interface AMSUIWebFlowAction : AMSUIWebAction <AMSUIWebActionRunnable> {

	char _deferredPresentation;
	id _actionData;
	long long _animationType;
	NSString* _backgroundColor;
	AMSUIWebLoadingPageModel* _loadingPage;
	NSDictionary* _metrics;
	AMSUIWebNavigationBarModel* _navigationBar;
	long long _popToRelativeIndex;
	long long _presentationType;
	id<AMSUIWebPageProvider> _replacementPage;
	long long _replacementType;
	CGSize _modalWindowSize;

}

@property (retain) id actionData;                                           //@synthesize actionData=_actionData - In the implementation block
@property (assign) long long animationType;                                 //@synthesize animationType=_animationType - In the implementation block
@property (assign) char deferredPresentation;                               //@synthesize deferredPresentation=_deferredPresentation - In the implementation block
@property (retain) NSString * backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (retain) AMSUIWebLoadingPageModel * loadingPage;                  //@synthesize loadingPage=_loadingPage - In the implementation block
@property (retain) NSDictionary * metrics;                                  //@synthesize metrics=_metrics - In the implementation block
@property (assign) CGSize modalWindowSize;                                  //@synthesize modalWindowSize=_modalWindowSize - In the implementation block
@property (retain) AMSUIWebNavigationBarModel * navigationBar;              //@synthesize navigationBar=_navigationBar - In the implementation block
@property (assign) long long popToRelativeIndex;                            //@synthesize popToRelativeIndex=_popToRelativeIndex - In the implementation block
@property (assign) long long presentationType;                              //@synthesize presentationType=_presentationType - In the implementation block
@property (retain) id<AMSUIWebPageProvider> replacementPage;                //@synthesize replacementPage=_replacementPage - In the implementation block
@property (assign) long long replacementType;                               //@synthesize replacementType=_replacementType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContext:(id)arg1 ;
-(void)setBackgroundColor:(NSString *)arg1 ;
-(NSString *)backgroundColor;
-(long long)animationType;
-(NSDictionary *)metrics;
-(void)setMetrics:(NSDictionary *)arg1 ;
-(long long)presentationType;
-(void)setPresentationType:(long long)arg1 ;
-(id)actionData;
-(void)setActionData:(id)arg1 ;
-(AMSUIWebNavigationBarModel *)navigationBar;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
-(void)setDeferredPresentation:(char)arg1 ;
-(AMSUIWebLoadingPageModel *)loadingPage;
-(void)setLoadingPage:(AMSUIWebLoadingPageModel *)arg1 ;
-(void)setNavigationBar:(AMSUIWebNavigationBarModel *)arg1 ;
-(char)deferredPresentation;
-(void)_runWithType:(long long)arg1 options:(id)arg2 ;
-(long long)replacementType;
-(id<AMSUIWebPageProvider>)replacementPage;
-(CGSize)modalWindowSize;
-(long long)popToRelativeIndex;
-(void)setAnimationType:(long long)arg1 ;
-(void)setModalWindowSize:(CGSize)arg1 ;
-(void)setPopToRelativeIndex:(long long)arg1 ;
-(void)setReplacementPage:(id<AMSUIWebPageProvider>)arg1 ;
-(void)setReplacementType:(long long)arg1 ;
@end
