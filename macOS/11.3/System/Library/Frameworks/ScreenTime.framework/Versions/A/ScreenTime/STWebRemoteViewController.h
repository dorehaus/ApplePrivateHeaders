/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ScreenTime.framework/Versions/A/ScreenTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTime/ScreenTime-Structs.h>
#import <ViewBridge/NSRemoteViewController.h>
#import <libobjc.A.dylib/STWebServiceDelegate.h>

@class NSString;

@interface STWebRemoteViewController : NSRemoteViewController <STWebServiceDelegate> {

	char _URLIsBlocked;

}

@property (assign) char URLIsBlocked;                               //@synthesize URLIsBlocked=_URLIsBlocked - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(void)instantiateWebViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)setURLIsBlocked:(char)arg1 ;
-(char)URLIsBlocked;
-(void)setURLIsBlocked:(char)arg1 replyHandler:(/*^block*/id)arg2 ;
@end

