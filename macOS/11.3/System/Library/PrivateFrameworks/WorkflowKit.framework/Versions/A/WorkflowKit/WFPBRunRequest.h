/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface WFPBRunRequest : PBRequest <NSCopying> {

	NSData* _payload;
	int _payloadType;

}

@property (assign,nonatomic) int payloadType;               //@synthesize payloadType=_payloadType - In the implementation block
@property (nonatomic,retain) NSData * payload;              //@synthesize payload=_payload - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPayload:(NSData *)arg1 ;
-(NSData *)payload;
-(void)setPayloadType:(int)arg1 ;
-(int)payloadType;
-(id)payloadTypeAsString:(int)arg1 ;
-(int)StringAsPayloadType:(id)arg1 ;
@end

