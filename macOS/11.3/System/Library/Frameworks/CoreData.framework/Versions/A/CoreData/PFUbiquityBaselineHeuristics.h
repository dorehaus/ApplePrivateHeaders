/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, PFUbiquityLocation, PFUbiquityKnowledgeVector;

@interface PFUbiquityBaselineHeuristics : NSObject {

	NSString* _localPeerID;
	NSString* _storeName;
	PFUbiquityLocation* _ubiquityRootLocation;
	NSString* _modelVersionHash;
	long long _numRequiredTransactions;
	long long _storeSize;
	long long _logSize;
	D _logToStoreSizeRatio;
	long long _minLogBytes;
	PFUbiquityKnowledgeVector* _currentBaselineKV;
	PFUbiquityKnowledgeVector* _currentKV;

}

@property (nonatomic,readonly) NSString * localPeerID;                                   //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,readonly) NSString * storeName;                                     //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * ubiquityRootLocation;                //@synthesize ubiquityRootLocation=_ubiquityRootLocation - In the implementation block
@property (nonatomic,readonly) NSString * modelVersionHash;                              //@synthesize modelVersionHash=_modelVersionHash - In the implementation block
@property (assign,nonatomic) long long numRequiredTransactions;                          //@synthesize numRequiredTransactions=_numRequiredTransactions - In the implementation block
@property (nonatomic,readonly) long long storeSize;                                      //@synthesize storeSize=_storeSize - In the implementation block
@property (nonatomic,readonly) long long logSize;                                        //@synthesize logSize=_logSize - In the implementation block
@property (assign,nonatomic) D logToStoreSizeRatio;                                      //@synthesize logToStoreSizeRatio=_logToStoreSizeRatio - In the implementation block
@property (assign,nonatomic) long long minLogBytes;                                      //@synthesize minLogBytes=_minLogBytes - In the implementation block
@property (nonatomic,retain) PFUbiquityKnowledgeVector * currentBaselineKV;              //@synthesize currentBaselineKV=_currentBaselineKV - In the implementation block
@property (nonatomic,retain) PFUbiquityKnowledgeVector * currentKV;                      //@synthesize currentKV=_currentKV - In the implementation block
-(void)setCurrentBaselineKV:(PFUbiquityKnowledgeVector *)arg1 ;
-(void)setCurrentKV:(PFUbiquityKnowledgeVector *)arg1 ;
-(id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4 ;
-(void)setNumRequiredTransactions:(long long)arg1 ;
-(void)setLogToStoreSizeRatio:(D)arg1 ;
-(void)setMinLogBytes:(long long)arg1 ;
-(long long)bytesForFileAtPath:(id)arg1 ;
-(NSString *)modelVersionHash;
-(char)haveEnoughTransactionsToRoll;
-(char)logsConsumeEnoughDiskSpace;
-(void)updateHeuristics;
-(char)canRollBaseline:(id*)arg1 ;
-(PFUbiquityLocation *)ubiquityRootLocation;
-(long long)numRequiredTransactions;
-(D)logToStoreSizeRatio;
-(long long)minLogBytes;
-(PFUbiquityKnowledgeVector *)currentBaselineKV;
-(PFUbiquityKnowledgeVector *)currentKV;
-(id)copy;
-(void)dealloc;
-(id)description;
-(id)init;
-(NSString *)storeName;
-(NSString *)localPeerID;
-(long long)logSize;
-(void)setStoreSize:(long long)arg1 ;
-(long long)storeSize;
-(void)setLogSize:(long long)arg1 ;
@end

