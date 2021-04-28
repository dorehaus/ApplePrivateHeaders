/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/Versions/A/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PKPass, PKPassViewerViewController, NSWindow, NSView;

@interface PKLiftOffController : NSObject {

	PKPass* _pass;
	PKPassViewerViewController* _viewController;
	NSWindow* _flyingWindow;
	NSView* _flyingPassView;
	NSWindow* _shadowWindow;

}
+(id)_controllers;
-(void)dealloc;
-(id)initWithPass:(id)arg1 inViewController:(id)arg2 ;
-(void)liftOffWithCompletionBlock:(/*^block*/id)arg1 closeHostWindow:(char)arg2 ;
@end

