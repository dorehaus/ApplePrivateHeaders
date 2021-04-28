/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBIssueViewContextData : PBCodable <NSCopying> {

	int _issueViewContext;
	SCD_Struct_NT3 _has;

}

@property (assign,nonatomic) char hasIssueViewContext; 
@property (assign,nonatomic) int issueViewContext;                  //@synthesize issueViewContext=_issueViewContext - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)issueViewContext;
-(void)setIssueViewContext:(int)arg1 ;
-(void)setHasIssueViewContext:(char)arg1 ;
-(char)hasIssueViewContext;
@end

