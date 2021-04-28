/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface CKThrottle : NSObject {

	int _operationType;
	NSString* _defaultsKey;
	NSString* _label;
	NSString* _containerIdentifier;
	long long _databaseScope;
	NSString* _zoneName;
	NSString* _serviceName;
	NSString* _functionName;
	NSString* _bundleID;
	NSString* _operationGroupNamePrefix;
	NSDate* _throttleStartDate;
	unsigned long long _intervalLengthSeconds;
	unsigned long long _repeatEverySeconds;
	unsigned long long _allowedRequestCount;
	NSDate* _expirationDate;
	unsigned long long _sentRequestCount;
	unsigned long long _currentRequestWindowIndex;

}

@property (nonatomic,copy) NSString * defaultsKey;                                      //@synthesize defaultsKey=_defaultsKey - In the implementation block
@property (nonatomic,copy) NSString * label;                                            //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * containerIdentifier;                              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (assign,nonatomic) long long databaseScope;                                   //@synthesize databaseScope=_databaseScope - In the implementation block
@property (nonatomic,copy) NSString * zoneName;                                         //@synthesize zoneName=_zoneName - In the implementation block
@property (assign,nonatomic) int operationType;                                         //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,copy) NSString * serviceName;                                      //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) NSString * functionName;                                     //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                                         //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * operationGroupNamePrefix;                         //@synthesize operationGroupNamePrefix=_operationGroupNamePrefix - In the implementation block
@property (nonatomic,retain) NSDate * throttleStartDate;                                //@synthesize throttleStartDate=_throttleStartDate - In the implementation block
@property (assign,nonatomic) unsigned long long intervalLengthSeconds;                  //@synthesize intervalLengthSeconds=_intervalLengthSeconds - In the implementation block
@property (assign,nonatomic) unsigned long long repeatEverySeconds;                     //@synthesize repeatEverySeconds=_repeatEverySeconds - In the implementation block
@property (assign,nonatomic) unsigned long long allowedRequestCount;                    //@synthesize allowedRequestCount=_allowedRequestCount - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                                   //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) unsigned long long sentRequestCount;                       //@synthesize sentRequestCount=_sentRequestCount - In the implementation block
@property (assign,nonatomic) unsigned long long currentRequestWindowIndex;              //@synthesize currentRequestWindowIndex=_currentRequestWindowIndex - In the implementation block
+(id)CKStatusReportArray;
+(void)resetThrottles;
+(char)addThrottle:(id)arg1 ;
+(id)enforcedThrottleForCriteria:(id)arg1 willSendRequest:(char)arg2 outThrottleError:(id*)arg3 ;
+(void)throttleWillBeRemoved:(id)arg1 ;
+(void)locked_removeThrottles:(id)arg1 ;
+(void)removeThrottles:(id)arg1 ;
+(void)setThrottleObserver:(id)arg1 ;
+(void)removeThrottle:(id)arg1 ;
+(id)allThrottles;
+(void)setThrottleList:(id)arg1 ;
-(id)description;
-(id)init;
-(void)setBundleID:(NSString *)arg1 ;
-(int)operationType;
-(NSString *)bundleID;
-(void)setOperationType:(int)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)serviceName;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(NSString *)containerIdentifier;
-(NSString *)zoneName;
-(void)setZoneName:(NSString *)arg1 ;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(NSString *)functionName;
-(long long)databaseScope;
-(void)setDatabaseScope:(long long)arg1 ;
-(void)setFunctionName:(NSString *)arg1 ;
-(char)isExpired;
-(NSString *)defaultsKey;
-(void)takeValuesFromThrottleDictionary:(id)arg1 ;
-(double)delayUntilNextOperationAllowed;
-(char)appliesToCriteria:(id)arg1 ;
-(void)throttleDataWasChanged;
-(id)throttleDictionaryBlockingUntilNextRequestWindow;
-(char)canTestInClientProcess;
-(void)setThrottles:(id)arg1 ;
-(void)setDefaultsKey:(NSString *)arg1 ;
-(NSString *)operationGroupNamePrefix;
-(void)setOperationGroupNamePrefix:(NSString *)arg1 ;
-(NSDate *)throttleStartDate;
-(void)setThrottleStartDate:(NSDate *)arg1 ;
-(unsigned long long)intervalLengthSeconds;
-(void)setIntervalLengthSeconds:(unsigned long long)arg1 ;
-(unsigned long long)repeatEverySeconds;
-(void)setRepeatEverySeconds:(unsigned long long)arg1 ;
-(unsigned long long)allowedRequestCount;
-(void)setAllowedRequestCount:(unsigned long long)arg1 ;
-(unsigned long long)sentRequestCount;
-(void)setSentRequestCount:(unsigned long long)arg1 ;
-(unsigned long long)currentRequestWindowIndex;
-(void)setCurrentRequestWindowIndex:(unsigned long long)arg1 ;
@end

