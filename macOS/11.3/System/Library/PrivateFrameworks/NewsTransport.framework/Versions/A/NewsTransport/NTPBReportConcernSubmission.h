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

@interface NTPBReportConcernSubmission : PBCodable <NSCopying> {

	int _cancelLocation;
	int _reportConcernLocation;
	int _resultType;
	SCD_Struct_NT5 _has;

}

@property (assign,nonatomic) char hasResultType; 
@property (assign,nonatomic) int resultType;                             //@synthesize resultType=_resultType - In the implementation block
@property (assign,nonatomic) char hasReportConcernLocation; 
@property (assign,nonatomic) int reportConcernLocation;                  //@synthesize reportConcernLocation=_reportConcernLocation - In the implementation block
@property (assign,nonatomic) char hasCancelLocation; 
@property (assign,nonatomic) int cancelLocation;                         //@synthesize cancelLocation=_cancelLocation - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(int)resultType;
-(void)setResultType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasResultType:(char)arg1 ;
-(char)hasResultType;
-(int)reportConcernLocation;
-(void)setReportConcernLocation:(int)arg1 ;
-(void)setHasReportConcernLocation:(char)arg1 ;
-(char)hasReportConcernLocation;
-(int)cancelLocation;
-(void)setCancelLocation:(int)arg1 ;
-(void)setHasCancelLocation:(char)arg1 ;
-(char)hasCancelLocation;
@end
