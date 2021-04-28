/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface DDScannerServiceConfiguration : NSObject {

	int _scannerType;
	long long _resultsOptions;
	long long _scannerOptions;
	double _timeout;
	char _noObjC;
	char _spotlightSuggestionsEnabled;
	NSString* _recyclingIdentifier;
	long long* _jobIdentifierPtr;
	NSObject*<OS_dispatch_queue> _completionQueue;

}

@property (assign,nonatomic) char noObjC;                                               //@synthesize noObjC=_noObjC - In the implementation block
@property (assign,nonatomic) char spotlightSuggestionsEnabled; 
@property (assign,nonatomic) double timeout;                                            //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) long long resultsOptions;                                  //@synthesize resultsOptions=_resultsOptions - In the implementation block
@property (assign,nonatomic) long long scannerOptions;                                  //@synthesize scannerOptions=_scannerOptions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionQueue;              //@synthesize completionQueue=_completionQueue - In the implementation block
-(void)updateRecyclingIdentifier;
-(id)recyclingIdentifier;
-(char)spotlightSuggestionsEnabled;
-(int)scannerType;
-(long long)scannerOptions;
-(void)setScannerOptions:(long long)arg1 ;
-(long long)resultsOptions;
-(char)noObjC;
-(void)setNoObjC:(char)arg1 ;
-(id)copy;
-(id)description;
-(id)init;
-(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timeout;
-(void)setCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(void)setTimeout:(double)arg1 ;
-(id)initWithScannerType:(int)arg1 passiveIntent:(char)arg2 ;
-(void)setSpotlightSuggestionsEnabled:(char)arg1 ;
-(id)initEmpty;
-(void)setResultsOptions:(long long)arg1 ;
@end

