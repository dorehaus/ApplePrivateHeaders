/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/JavaScriptAppleEvents.framework/Versions/A/JavaScriptAppleEvents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <JavaScriptAppleEvents/AEScriptableEntity.h>

@class NSAppleEventDescriptor;

@interface AEApplication : AEScriptableEntity {

	NSAppleEventDescriptor* _address;

}

@property (retain) NSAppleEventDescriptor * address; 
+(id)currentApplication;
+(id)applicationWithPath:(id)arg1 ;
+(id)remoteApplicationWithPath:(id)arg1 ;
-(NSAppleEventDescriptor *)address;
-(char)isRunning;
-(char)launch;
-(void)setAddress:(NSAppleEventDescriptor *)arg1 ;
-(id)sendAppleEvent:(id)arg1 withContext:(id)arg2 waitForReply:(char)arg3 error:(id*)arg4 ;
-(id)emptyAppleEventWithEventClass:(unsigned)arg1 eventID:(unsigned)arg2 ;
-(id)sendAppleEvent:(id)arg1 timeout:(long long)arg2 withContext:(id)arg3 waitForReply:(char)arg4 error:(id*)arg5 ;
-(id)initCurrentApplication;
-(id)initRemoteApplicationWithPath:(id)arg1 ;
-(void)setPSNAddress;
@end
