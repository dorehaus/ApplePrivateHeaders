/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ShareKit.framework/Versions/A/ShareKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareKit/NSSharingExtensionContext.h>

@protocol NSSharingPlugInViewControllerProtocol;
@class NSViewController, SHKServiceCompletionInfo, SHKSharingViewService;

@interface NSSharingUIExtensionContext : NSSharingExtensionContext {

	NSViewController*<NSSharingPlugInViewControllerProtocol> _viewController;
	SHKServiceCompletionInfo* _completionInfo;
	SHKSharingViewService* _viewService;

}

@property (__weak) SHKSharingViewService * viewService;                                                  //@synthesize viewService=_viewService - In the implementation block
@property (__weak) NSViewController*<NSSharingPlugInViewControllerProtocol> viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (retain) SHKServiceCompletionInfo * completionInfo;                                            //@synthesize completionInfo=_completionInfo - In the implementation block
+(char)shouldDimSourceWindow;
-(void)cancel;
-(void)completeRequestReturningItems:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelRequestWithError:(id)arg1 ;
-(id)title;
-(SHKSharingViewService *)viewService;
-(void)setViewService:(SHKSharingViewService *)arg1 ;
-(void)setViewController:(NSViewController*<NSSharingPlugInViewControllerProtocol>)arg1 ;
-(NSViewController*<NSSharingPlugInViewControllerProtocol>)viewController;
-(void)performServiceWithOptionsDictionaryData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelServiceUI;
-(void)closeServiceWindowWithSuccess:(char)arg1 completion:(/*^block*/id)arg2 ;
-(id)displayState;
-(void)setDisplayState:(id)arg1 ;
-(char)serviceNeedsUserConfiguration;
-(void)startUserConfiguration;
-(SHKServiceCompletionInfo *)completionInfo;
-(void)_endServicePrematurelyWithViewService:(id)arg1 ;
-(void)_serviceWindowDidShowWithViewService:(id)arg1 ;
-(char)hasNarrowLayout;
-(void)prepareUIWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)getPreviewImageForAttachments:(id)arg1 block:(/*^block*/id)arg2 timeoutBlock:(/*^block*/id)arg3 ;
-(void)_endServicePrematurely;
-(char)_fadesOutSuccessfulClosingAnimation;
-(void)_reallyCompleteRequestReturningItems:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCompletionInfo:(SHKServiceCompletionInfo *)arg1 ;
-(void)_reallyCancelRequestWithError:(id)arg1 ;
-(id)previewItemSupportedTypes;
-(Class)accountDelegateClass;
-(char)disableWindowPresentation;
-(id)imageForItem:(id)arg1 ;
@end
