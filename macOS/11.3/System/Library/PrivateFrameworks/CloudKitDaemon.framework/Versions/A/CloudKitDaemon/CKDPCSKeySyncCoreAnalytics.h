/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSError;

@interface CKDPCSKeySyncCoreAnalytics : NSObject {

	NSString* _serviceName;
	NSNumber* _shouldThrottle;
	NSNumber* _isManatee;
	NSString* _keySyncResult;
	NSString* _overallResult;
	NSNumber* _keySyncDurationSec;
	NSNumber* _throttledDurationSec;
	NSString* _context;
	NSString* _bundleID;
	NSError* _error;

}

@property (nonatomic,retain) NSString * serviceName;                       //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSNumber * shouldThrottle;                    //@synthesize shouldThrottle=_shouldThrottle - In the implementation block
@property (nonatomic,retain) NSNumber * isManatee;                         //@synthesize isManatee=_isManatee - In the implementation block
@property (nonatomic,retain) NSString * keySyncResult;                     //@synthesize keySyncResult=_keySyncResult - In the implementation block
@property (nonatomic,retain) NSString * overallResult;                     //@synthesize overallResult=_overallResult - In the implementation block
@property (nonatomic,retain) NSNumber * keySyncDurationSec;                //@synthesize keySyncDurationSec=_keySyncDurationSec - In the implementation block
@property (nonatomic,retain) NSNumber * throttledDurationSec;              //@synthesize throttledDurationSec=_throttledDurationSec - In the implementation block
@property (nonatomic,retain) NSString * context;                           //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                          //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSError * error;                              //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(void)setError:(NSError *)arg1 ;
-(NSString *)context;
-(void)setContext:(NSString *)arg1 ;
-(NSString *)serviceName;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setShouldThrottle:(NSNumber *)arg1 ;
-(NSNumber *)shouldThrottle;
-(void)setOverallResult:(NSString *)arg1 ;
-(NSNumber *)isManatee;
-(NSString *)keySyncResult;
-(NSString *)overallResult;
-(NSNumber *)keySyncDurationSec;
-(NSNumber *)throttledDurationSec;
-(void)setIsManatee:(NSNumber *)arg1 ;
-(void)setKeySyncResult:(NSString *)arg1 ;
-(void)setKeySyncDurationSec:(NSNumber *)arg1 ;
-(void)setThrottledDurationSec:(NSNumber *)arg1 ;
@end

