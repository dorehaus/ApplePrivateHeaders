/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/Versions/A/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IDSTransactionLogMessage : NSObject {

	NSString* _fromID;
	NSString* _loginID;
	NSString* _accountUniqueID;
	NSString* _serviceName;

}

@property (nonatomic,readonly) NSString * fromID;                       //@synthesize fromID=_fromID - In the implementation block
@property (nonatomic,readonly) NSString * loginID;                      //@synthesize loginID=_loginID - In the implementation block
@property (nonatomic,readonly) NSString * accountUniqueID;              //@synthesize accountUniqueID=_accountUniqueID - In the implementation block
@property (nonatomic,readonly) NSString * serviceName;                  //@synthesize serviceName=_serviceName - In the implementation block
+(id)transactionLogMessageFromDictionaryRepresentation:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)serviceName;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSString *)loginID;
-(NSString *)fromID;
-(id)_initWithAccountUniqueID:(id)arg1 fromID:(id)arg2 loginID:(id)arg3 serviceName:(id)arg4 ;
-(NSString *)accountUniqueID;
@end

