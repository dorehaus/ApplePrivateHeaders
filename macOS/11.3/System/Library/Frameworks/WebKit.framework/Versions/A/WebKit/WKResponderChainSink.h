/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSResponder.h>

@class NSResponder;

@interface WKResponderChainSink : NSResponder {

	NSResponder* _lastResponderInChain;
	BOOL _didReceiveUnhandledCommand;

}
-(void)detach;
-(void)doCommandBySelector:(SEL)arg1 ;
-(char)tryToPerform:(SEL)arg1 with:(id)arg2 ;
-(void)noResponderFor:(SEL)arg1 ;
-(id)initWithResponderChain:(id)arg1 ;
-(BOOL)didReceiveUnhandledCommand;
@end

