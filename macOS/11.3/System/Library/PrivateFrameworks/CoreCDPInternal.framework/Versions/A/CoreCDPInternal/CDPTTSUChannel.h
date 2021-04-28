/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/Versions/A/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CDPSecureChannelProxy.h>
#import <libobjc.A.dylib/CDPSecureChannelApprovingProxy.h>

@class CUMessageSession, NSString;

@interface CDPTTSUChannel : NSObject <CDPSecureChannelProxy, CDPSecureChannelApprovingProxy> {

	CUMessageSession* _sharingSession;
	char _approverBackupRecordsExist;
	unsigned long long _approveriCloudKeychainState;
	char _sentInitialResponse;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContext:(id)arg1 ;
-(char)approverBackupRecordsExist;
-(unsigned long long)approveriCloudKeychainState;
-(void)sendPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)listenForPayloadsWithHandler:(/*^block*/id)arg1 ;
-(void)setApproverBackupRecordsExist:(char)arg1 ;
-(void)setApproveriCloudKeychainState:(unsigned long long)arg1 ;
@end

