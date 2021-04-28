/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContextKit.framework/Versions/A/ContextKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, NSError, NSDate, CKContextRequest;

@interface CKContextResponse : NSObject <NSSecureCoding> {

	char _discarded;
	double _hideCompletionsTimeLimit;
	AB _shown;
	AB _engaged;
	AB _transactionSuccessful;
	AB _shownLogged;
	AB _engagementLogged;
	AB _transactionLogged;
	NSArray* _loggingCouldHaveShown;
	AI _loggingShownMax;
	AB _loggingServerOverride;
	AI _loggingCouldHaveShownMax;
	AI _loggingInputLengthMax;
	char _resultsNeedFiltering;
	NSString* _uuid;
	NSError* _error;
	NSArray* _results;
	NSArray* _level1Topics;
	NSArray* _level2Topics;
	NSArray* _donorBundleIdentifiers;
	NSString* _languageTag;
	NSString* _debug;
	unsigned long long _requestType;
	unsigned long long _mustPrefixMatchLength;
	NSDate* _hideCompletionsAfterDate;
	NSDate* _responseDate;
	CKContextRequest* _debugRequest;

}

@property (assign,nonatomic) char resultsNeedFiltering;                             //@synthesize resultsNeedFiltering=_resultsNeedFiltering - In the implementation block
@property (assign,nonatomic) unsigned long long mustPrefixMatchLength;              //@synthesize mustPrefixMatchLength=_mustPrefixMatchLength - In the implementation block
@property (nonatomic,retain) NSDate * hideCompletionsAfterDate;                     //@synthesize hideCompletionsAfterDate=_hideCompletionsAfterDate - In the implementation block
@property (nonatomic,retain) NSDate * responseDate;                                 //@synthesize responseDate=_responseDate - In the implementation block
@property (nonatomic,retain) CKContextRequest * debugRequest;                       //@synthesize debugRequest=_debugRequest - In the implementation block
@property (nonatomic,copy) NSString * uuid;                                         //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSError * error;                                       //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSArray * results;                                     //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) NSArray * level1Topics;                                //@synthesize level1Topics=_level1Topics - In the implementation block
@property (nonatomic,retain) NSArray * level2Topics;                                //@synthesize level2Topics=_level2Topics - In the implementation block
@property (nonatomic,retain) NSArray * donorBundleIdentifiers;                      //@synthesize donorBundleIdentifiers=_donorBundleIdentifiers - In the implementation block
@property (nonatomic,retain) NSString * languageTag;                                //@synthesize languageTag=_languageTag - In the implementation block
@property (nonatomic,retain) NSString * debug;                                      //@synthesize debug=_debug - In the implementation block
@property (assign,nonatomic) unsigned long long requestType;                        //@synthesize requestType=_requestType - In the implementation block
+(char)supportsSecureCoding;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uuid;
-(NSError *)error;
-(void)setUuid:(NSString *)arg1 ;
-(char)isPlaceholder;
-(void)setError:(NSError *)arg1 ;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
-(void)discard;
-(NSString *)debug;
-(unsigned long long)requestType;
-(void)setRequestType:(unsigned long long)arg1 ;
-(void)setDebug:(NSString *)arg1 ;
-(NSString *)languageTag;
-(void)setLanguageTag:(NSString *)arg1 ;
-(id)completer;
-(void)setResponseDate:(NSDate *)arg1 ;
-(NSDate *)responseDate;
-(NSDate *)hideCompletionsAfterDate;
-(unsigned long long)mustPrefixMatchLength;
-(char)resultsNeedFiltering;
-(void)markResultsShown:(unsigned long long)arg1 serverOverride:(char)arg2 forInputLength:(unsigned long long)arg3 results:(id)arg4 ;
-(void)logEngagement:(id)arg1 forInputLength:(unsigned long long)arg2 completion:(id)arg3 likelyUnsolicited:(char)arg4 ;
-(void)logTransactionSuccessfulForInputLength:(unsigned long long)arg1 completion:(id)arg2 likelyUnsolicited:(char)arg3 ;
-(void)discardAndLogCompleter:(id)arg1 likelyUnsolicited:(char)arg2 ;
-(void)setDonorBundleIdentifiers:(NSArray *)arg1 ;
-(NSArray *)donorBundleIdentifiers;
-(id)initWithError:(id)arg1 requestType:(unsigned long long)arg2 ;
-(void)setHideCompletionsTimeLimit:(double)arg1 ;
-(id)initWithResults:(id)arg1 requestType:(unsigned long long)arg2 ;
-(id)initPlaceholderWithUUID:(id)arg1 requestType:(unsigned long long)arg2 ;
-(void)appendToDebug:(id)arg1 ;
-(void)addDebug:(id)arg1 ;
-(id)resultByQuery:(id)arg1 ;
-(char)_pm_isSensitive;
-(NSArray *)level1Topics;
-(void)setLevel1Topics:(NSArray *)arg1 ;
-(NSArray *)level2Topics;
-(void)setLevel2Topics:(NSArray *)arg1 ;
-(void)setResultsNeedFiltering:(char)arg1 ;
-(void)setMustPrefixMatchLength:(unsigned long long)arg1 ;
-(void)setHideCompletionsAfterDate:(NSDate *)arg1 ;
-(CKContextRequest *)debugRequest;
-(void)setDebugRequest:(CKContextRequest *)arg1 ;
@end
