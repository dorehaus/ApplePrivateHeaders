/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServerKit.framework/Versions/A/SpotlightServerKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightServerKit/MDSMachPortObject.h>

@protocol OS_dispatch_queue;
@class NSObject, MDSMachSubsystem;

@interface MDSTwoFaceMachPortObject : MDSMachPortObject {

	NSObject*<OS_dispatch_queue> _backgroundQueue;
	unsigned _backgroundPort;
	MDSMachSubsystem* _backgroundSubsystem;

}
-(void)dealloc;
-(void)shutdown;
-(id)initWithDeferredShutdown:(char)arg1 ;
-(void)addBackgroundMachDispatchLinks;
-(unsigned)backgroundPort;
-(unsigned long long)backgroundPortRights;
-(void)setBackgroundPort:(unsigned)arg1 ;
-(void)setupBackgroundMachSubsystem;
@end

