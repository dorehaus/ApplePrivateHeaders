/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailCore/MCMessage.h>

@class NSString, MCMutableMessageHeaders, NSData;

@interface MCOutgoingMessage : MCMessage {

	unsigned long long _localAttachmentsSize;
	NSString* _remoteID;
	MCMutableMessageHeaders* _mutableHeaders;
	NSString* _existingRemoteID;
	NSData* _rawData;

}

@property (nonatomic,retain) MCMutableMessageHeaders * mutableHeaders;              //@synthesize mutableHeaders=_mutableHeaders - In the implementation block
@property (nonatomic,retain) NSData * rawData;                                      //@synthesize rawData=_rawData - In the implementation block
@property (nonatomic,retain) NSString * existingRemoteID;                           //@synthesize existingRemoteID=_existingRemoteID - In the implementation block
@property (copy) NSString * remoteID;                                               //@synthesize remoteID=_remoteID - In the implementation block
-(id)init;
-(id)dataSource;
-(NSData *)rawData;
-(unsigned long long)messageSize;
-(NSString *)remoteID;
-(void)setRawData:(NSData *)arg1 ;
-(void)setRemoteID:(NSString *)arg1 ;
-(id)headersFetchIfNotAvailable:(char)arg1 ;
-(id)bodyDataFetchIfNotAvailable:(char)arg1 allowPartial:(char)arg2 ;
-(id)messageDataFetchIfNotAvailable:(char)arg1 newDocumentID:(id)arg2 ;
-(NSString *)existingRemoteID;
-(void)setMutableHeaders:(MCMutableMessageHeaders *)arg1 ;
-(MCMutableMessageHeaders *)mutableHeaders;
-(void)setLocalAttachmentsSize:(unsigned long long)arg1 ;
-(void)setExistingRemoteID:(NSString *)arg1 ;
@end

