/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNTCC
@required
-(long long)checkAuthorizationStatusOfCurrentProcess;
-(long long)checkAuthorizationStatusOfAuditToken:(SCD_Struct_CN1)arg1;
-(char)isAuthorizationRestricted;
-(void)requestAuthorization:(long long)arg1 completionHandler:(/*^block*/id)arg2;

@end

