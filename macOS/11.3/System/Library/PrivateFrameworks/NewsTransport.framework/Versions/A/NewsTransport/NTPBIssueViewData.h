/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NTPBIssueViewData : PBCodable <NSCopying> {

	NSData* _issueViewingSessionId;

}

@property (nonatomic,readonly) char hasIssueViewingSessionId; 
@property (nonatomic,retain) NSData * issueViewingSessionId;               //@synthesize issueViewingSessionId=_issueViewingSessionId - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setIssueViewingSessionId:(NSData *)arg1 ;
-(char)hasIssueViewingSessionId;
-(NSData *)issueViewingSessionId;
@end

