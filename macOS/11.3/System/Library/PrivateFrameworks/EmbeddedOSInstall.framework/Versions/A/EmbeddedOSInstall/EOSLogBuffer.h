/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedOSInstall.framework/Versions/A/EmbeddedOSInstall
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSFileHandle, NSObject;

@interface EOSLogBuffer : NSObject {

	NSString* _hostLogPath;
	NSString* _deviceLogPath;
	NSFileHandle* _hostLog;
	NSFileHandle* _deviceLog;
	NSObject*<OS_dispatch_queue> _q;

}

@property (retain) NSString * hostLogPath;                                 //@synthesize hostLogPath=_hostLogPath - In the implementation block
@property (retain) NSString * deviceLogPath;                               //@synthesize deviceLogPath=_deviceLogPath - In the implementation block
@property (retain) NSFileHandle * hostLog;                                 //@synthesize hostLog=_hostLog - In the implementation block
@property (retain) NSFileHandle * deviceLog;                               //@synthesize deviceLog=_deviceLog - In the implementation block
@property (q,retain) NSObject*<OS_dispatch_queue> q;                       //@synthesize q=_q - In the implementation block
@property (readonly) NSString * hostMessagesForDiagnostics; 
@property (readonly) NSString * deviceMessagesForDiagnostics; 
+(id)sharedInstance;
-(id)init;
-(void)start;
-(void)stop;
-(NSObject*<OS_dispatch_queue>)q;
-(void)logHostMessage:(id)arg1 ;
-(NSString *)hostMessagesForDiagnostics;
-(NSString *)deviceMessagesForDiagnostics;
-(NSString *)hostLogPath;
-(NSString *)deviceLogPath;
-(void)setHostLog:(NSFileHandle *)arg1 ;
-(void)setDeviceLog:(NSFileHandle *)arg1 ;
-(void)setHostLogPath:(NSString *)arg1 ;
-(void)setDeviceLogPath:(NSString *)arg1 ;
-(NSFileHandle *)hostLog;
-(NSFileHandle *)deviceLog;
-(id)_readStringFromFile:(id)arg1 withMaximumByteLength:(unsigned long long)arg2 ;
-(id)_scrubStringForDiagnostics:(id)arg1 ;
-(id)_formattedMessageData:(id)arg1 ;
-(id)_additionalRegexesToScrub;
-(void)logDeviceMessage:(id)arg1 ;
-(void)setQ:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

