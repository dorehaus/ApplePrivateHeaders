/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/Versions/A/DiagnosticRequestService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticRequestService/DiagnosticRequestService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/CKCodeOperationMessageMutation.h>
#import <libobjc.A.dylib/NSCopying.h>

@class DRSProtoClientDeviceMetadata, NSMutableArray, NSString;

@interface DRSProtoDiagnosticRequestStatsBatch : PBCodable <CKCodeOperationMessageMutation, NSCopying> {

	DRSProtoClientDeviceMetadata* _clientMetadata;
	NSMutableArray* _requestsResultsStats;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char hasClientMetadata; 
@property (nonatomic,retain) DRSProtoClientDeviceMetadata * clientMetadata;              //@synthesize clientMetadata=_clientMetadata - In the implementation block
@property (nonatomic,retain) NSMutableArray * requestsResultsStats;                      //@synthesize requestsResultsStats=_requestsResultsStats - In the implementation block
+(Class)requestsResultsStatsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(DRSProtoClientDeviceMetadata *)clientMetadata;
-(void)setClientMetadata:(DRSProtoClientDeviceMetadata *)arg1 ;
-(char)hasClientMetadata;
-(void)addRequestsResultsStats:(id)arg1 ;
-(unsigned long long)requestsResultsStatsCount;
-(void)clearRequestsResultsStats;
-(id)requestsResultsStatsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)requestsResultsStats;
-(void)setRequestsResultsStats:(NSMutableArray *)arg1 ;
@end

