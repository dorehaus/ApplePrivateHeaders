/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSURLConnectionDelegate <NSObject>
@optional
-(void)connection:(id)arg1 didFailWithError:(id)arg2;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
-(void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
-(char)connectionShouldUseCredentialStorage:(id)arg1;
-(char)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;

@end

