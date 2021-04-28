/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ViewBridge/NSServiceViewController.h>

@class NSSet;

@interface NSRendezvousWindowController : NSServiceViewController {

	NSSet* _bridgeKeysObserved;

}
+(id)controllerForWindow:(id)arg1 ;
+(id)bridgeKeysForSemiAutonomousWindowBase:(unsigned char)arg1 ;
+(void)addBridgeKeys:(id)arg1 ;
+(id)bridgeKeys;
-(void)windowWillOrder:(long long)arg1 relativeTo:(long long)arg2 ;
-(id)objectToObserveForKey:(id)arg1 withWindow:(id)arg2 ;
-(id)tokenForElement:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(id)initWithWindow:(id)arg1 ;
-(void)loadView;
-(id)accessibilityCancelButton;
-(id)accessibilityDefaultButton;
-(char)_isSecondary;
-(unsigned long long)awakeFromRemoteView;
@end
