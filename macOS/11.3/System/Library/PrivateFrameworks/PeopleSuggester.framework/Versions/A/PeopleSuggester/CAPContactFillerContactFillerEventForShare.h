/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/Versions/A/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PeopleSuggester/PeopleSuggester-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface CAPContactFillerContactFillerEventForShare : PBCodable <NSCopying> {

	NSString* _sessionId;
	NSMutableArray* _shareEvents;

}

@property (nonatomic,retain) NSString * sessionId;                      //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,retain) NSMutableArray * shareEvents;              //@synthesize shareEvents=_shareEvents - In the implementation block
+(Class)shareEventsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setSessionId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)sessionId;
-(void)addShareEvents:(id)arg1 ;
-(unsigned long long)shareEventsCount;
-(void)clearShareEvents;
-(id)shareEventsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)shareEvents;
-(void)setShareEvents:(NSMutableArray *)arg1 ;
@end
