/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/Versions/A/AuthenticationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ViewBridge/NSServiceViewController.h>
#import <libobjc.A.dylib/ASExtensionServiceProtocol.h>

@class NSExtensionContext, NSWindow;

@interface ASExtensionServiceViewController : NSServiceViewController <ASExtensionServiceProtocol> {

	NSExtensionContext* _extensionContext;
	NSWindow* _window;

}
-(id)exportedInterface;
-(void)loadView;
-(void)_connectChildView;
-(void)connectToExtensionContextWithRequestIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

