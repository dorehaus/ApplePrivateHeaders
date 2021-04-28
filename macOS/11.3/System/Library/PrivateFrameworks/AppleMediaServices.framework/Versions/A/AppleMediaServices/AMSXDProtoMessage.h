/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface AMSXDProtoMessage : PBCodable <NSCopying> {

	NSString* _logKey;
	NSData* _messageData;

}

@property (nonatomic,retain) NSData * messageData;              //@synthesize messageData=_messageData - In the implementation block
@property (nonatomic,readonly) char hasLogKey; 
@property (nonatomic,retain) NSString * logKey;                 //@synthesize logKey=_logKey - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setMessageData:(NSData *)arg1 ;
-(NSData *)messageData;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
-(char)hasLogKey;
@end
