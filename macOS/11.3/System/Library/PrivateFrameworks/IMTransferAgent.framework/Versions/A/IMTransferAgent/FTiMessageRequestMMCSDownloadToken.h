/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMTransferAgent.framework/Versions/A/IMTransferAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMTransferAgent/IMTransferAgent-Structs.h>
#import <IDSFoundation/IDSMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface FTiMessageRequestMMCSDownloadToken : IDSMessage <NSCopying> {

	NSString* _owner;
	NSString* _responseAuthToken;
	NSData* _signature;
	NSString* _responseRequestorID;
	long long _contentVersion;
	NSString* _contentHeaders;
	NSString* _authURLString;
	NSData* _responseContentBody;
	long long _responseContentVersion;

}

@property (copy) NSString * owner;                                //@synthesize owner=_owner - In the implementation block
@property (copy) NSData * signature;                              //@synthesize signature=_signature - In the implementation block
@property (copy) NSString * responseAuthToken;                    //@synthesize responseAuthToken=_responseAuthToken - In the implementation block
@property (copy) NSString * responseRequestorID;                  //@synthesize responseRequestorID=_responseRequestorID - In the implementation block
@property (assign) long long contentVersion;                      //@synthesize contentVersion=_contentVersion - In the implementation block
@property (copy) NSString * contentHeaders;                       //@synthesize contentHeaders=_contentHeaders - In the implementation block
@property (copy) NSString * authURLString;                        //@synthesize authURLString=_authURLString - In the implementation block
@property (copy) NSData * responseContentBody;                    //@synthesize responseContentBody=_responseContentBody - In the implementation block
@property (assign) long long responseContentVersion;              //@synthesize responseContentVersion=_responseContentVersion - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setOwner:(NSString *)arg1 ;
-(NSString *)owner;
-(NSData *)signature;
-(long long)command;
-(void)setSignature:(NSData *)arg1 ;
-(id)messageBody;
-(long long)responseCommand;
-(id)requiredKeys;
-(void)handleResponseDictionary:(id)arg1 ;
-(long long)contentVersion;
-(void)setContentVersion:(long long)arg1 ;
-(NSString *)responseAuthToken;
-(void)setResponseAuthToken:(NSString *)arg1 ;
-(NSString *)responseRequestorID;
-(void)setResponseRequestorID:(NSString *)arg1 ;
-(NSString *)contentHeaders;
-(void)setContentHeaders:(NSString *)arg1 ;
-(NSString *)authURLString;
-(void)setAuthURLString:(NSString *)arg1 ;
-(NSData *)responseContentBody;
-(void)setResponseContentBody:(NSData *)arg1 ;
-(void)setResponseContentVersion:(long long)arg1 ;
-(long long)responseContentVersion;
@end

