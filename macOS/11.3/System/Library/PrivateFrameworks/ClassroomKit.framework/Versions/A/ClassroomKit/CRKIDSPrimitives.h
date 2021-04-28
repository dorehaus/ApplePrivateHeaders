/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol CRKIDSPrimitives
@property (nonatomic,copy,readonly) NSDictionary * debugInfo; 
@required
-(NSDictionary *)debugInfo;
-(void)sendMessage:(id)arg1 destinationAddress:(id)arg2 sourceAppleID:(id)arg3 options:(id)arg4 completion:(/*^block*/id)arg5;
-(void)sendMessage:(id)arg1 destinationAddress:(id)arg2 sourceAppleID:(id)arg3 completion:(/*^block*/id)arg4;
-(void)listenForMessagesWithHandler:(/*^block*/id)arg1 completion:(/*^block*/id)arg2;

@end

