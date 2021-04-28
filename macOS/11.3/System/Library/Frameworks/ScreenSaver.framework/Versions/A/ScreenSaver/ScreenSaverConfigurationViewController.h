/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ScreenSaver.framework/Versions/A/ScreenSaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ViewBridge/NSServiceViewController.h>

@class NSExtensionContext;

@interface ScreenSaverConfigurationViewController : NSServiceViewController {

	NSExtensionContext* _extensionContext;

}

@property (retain) NSExtensionContext * extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
-(void)dealloc;
-(NSExtensionContext *)extensionContext;
-(void)setExtensionContext:(NSExtensionContext *)arg1 ;
-(unsigned long long)awakeFromRemoteView;
-(void)configureSheetDidEnd;
-(void)configureSheetWillPresent;
@end

