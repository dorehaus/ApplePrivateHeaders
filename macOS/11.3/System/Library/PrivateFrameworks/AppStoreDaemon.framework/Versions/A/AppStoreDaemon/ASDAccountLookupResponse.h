/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Versions/A/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/ASDRequestResponse.h>

@class NSNumber, NSError;

@interface ASDAccountLookupResponse : ASDRequestResponse {

	char _askToBuyEnabled;
	NSNumber* _accountID;

}

@property (copy) NSNumber * accountID;                //@synthesize accountID=_accountID - In the implementation block
@property (assign) char askToBuyEnabled;              //@synthesize askToBuyEnabled=_askToBuyEnabled - In the implementation block
@property (copy) NSError * error; 
-(id)init;
-(NSNumber *)accountID;
-(void)setAccountID:(NSNumber *)arg1 ;
-(id)initWithAccountID:(id)arg1 ;
-(char)askToBuyEnabled;
-(void)setAskToBuyEnabled:(char)arg1 ;
@end
