/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/CommerceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommerceKit/CKServiceInterface.h>

@interface CKMachineAuthorization : CKServiceInterface
+(id)sharedMachineAuthorization;
-(void)authorizeMachineWithAppleID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deauthorizeMachineWithCompletionHandler:(/*^block*/id)arg1 ;
@end

