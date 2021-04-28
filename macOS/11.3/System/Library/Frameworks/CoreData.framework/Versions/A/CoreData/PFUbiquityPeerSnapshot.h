/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSMutableDictionary, PFUbiquityKnowledgeVector, NSNumber, NSDate, NSString;

@interface PFUbiquityPeerSnapshot : NSObject {

	NSDictionary* _logSnapshot;
	NSMutableDictionary* _diffFromPrevious;
	PFUbiquityKnowledgeVector* _kv;
	NSNumber* _transactionNumber;
	NSDate* _transactionDate;
	NSString* _exportingPeerID;

}

@property (nonatomic,readonly) NSDictionary * logSnapshot;                               //@synthesize logSnapshot=_logSnapshot - In the implementation block
@property (nonatomic,readonly) NSDictionary * diffFromPrevious;                          //@synthesize diffFromPrevious=_diffFromPrevious - In the implementation block
@property (nonatomic,readonly) PFUbiquityKnowledgeVector * knowledgeVector;              //@synthesize kv=_kv - In the implementation block
@property (nonatomic,readonly) NSNumber * transactionNumber;                             //@synthesize transactionNumber=_transactionNumber - In the implementation block
@property (nonatomic,readonly) NSDate * transactionDate;                                 //@synthesize transactionDate=_transactionDate - In the implementation block
@property (nonatomic,readonly) NSString * exportingPeerID;                               //@synthesize exportingPeerID=_exportingPeerID - In the implementation block
-(NSString *)exportingPeerID;
-(PFUbiquityKnowledgeVector *)knowledgeVector;
-(id)initWithTranasctionEntry:(id)arg1 andLogSnapshot:(id)arg2 ;
-(NSDictionary *)logSnapshot;
-(NSDictionary *)diffFromPrevious;
-(id)initWithExportingPeerID:(id)arg1 logSnapshot:(id)arg2 transactionNumber:(id)arg3 transactionDate:(id)arg4 andKnowledgeVector:(id)arg5 ;
-(void)computeDiffToPreviousSnapshot:(id)arg1 ;
-(void)removeValuesChangedByPeerSnapshot:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(long long)compare:(id)arg1 ;
-(NSNumber *)transactionNumber;
-(NSDate *)transactionDate;
@end
