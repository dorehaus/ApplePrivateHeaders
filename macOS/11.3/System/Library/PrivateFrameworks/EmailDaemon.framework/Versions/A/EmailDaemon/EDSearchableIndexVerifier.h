/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/Versions/A/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EFSignpostable.h>

@protocol EDSearchableIndexVerifierDataSource, OS_os_activity;
@class NSObject, NSString;

@interface EDSearchableIndexVerifier : NSObject <EFLoggable, EFSignpostable> {

	id<EDSearchableIndexVerifierDataSource> _dataSource;
	NSObject*<OS_os_activity> _indexVerificationActivity;

}

@property (nonatomic,retain) NSObject*<OS_os_activity> indexVerificationActivity;                    //@synthesize indexVerificationActivity=_indexVerificationActivity - In the implementation block
@property (assign,nonatomic,__weak) id<EDSearchableIndexVerifierDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long signpostID; 
+(id)log;
+(id)signpostLog;
-(id<EDSearchableIndexVerifierDataSource>)dataSource;
-(void)setDataSource:(id<EDSearchableIndexVerifierDataSource>)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(unsigned long long)signpostID;
-(void)verifyDataSamplesWithCompletionHandler:(/*^block*/id)arg1 scheduler:(id)arg2 ;
-(id)_failingSamples:(id)arg1 tester:(id)arg2 ;
-(void)_addFailingSamples:(id)arg1 toResultDictionary:(id)arg2 ;
-(id)_verifyDataSamples:(id)arg1 ;
-(id)_verifySamples:(id)arg1 ;
-(NSObject*<OS_os_activity>)indexVerificationActivity;
-(void)setIndexVerificationActivity:(NSObject*<OS_os_activity>)arg1 ;
@end

