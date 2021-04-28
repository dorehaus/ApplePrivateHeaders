/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NPTKit.framework/Versions/A/NPTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NPTKit/NPTKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString;

@interface NPTPerformanceTestConfiguration : NSObject <NSCopying> {

	NSURL* privateDownloadURL;
	NSURL* privateUploadURL;
	NSString* privatePingHost;
	char _useSecureConnection;
	char _collectMetadata;
	char _endWhenStable;
	char _stopAtFileSize;
	int _downloadSize;
	int _uploadSize;
	int _pingAddressStyle;
	int _interfaceType;
	unsigned long long _pingCount;
	long long _concurrentStreams;
	NSString* _clientName;
	NSString* _uuid;
	unsigned long long _testDuration;
	NSString* _interfaceName;

}

@property (nonatomic,retain) NSString * interfaceName;                     //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign,nonatomic) char forceWiFi; 
@property (assign,nonatomic) char useSecureConnection;                     //@synthesize useSecureConnection=_useSecureConnection - In the implementation block
@property (assign,nonatomic) int downloadSize;                             //@synthesize downloadSize=_downloadSize - In the implementation block
@property (assign,nonatomic) int uploadSize;                               //@synthesize uploadSize=_uploadSize - In the implementation block
@property (assign,nonatomic) unsigned long long pingCount;                 //@synthesize pingCount=_pingCount - In the implementation block
@property (assign,nonatomic) int pingAddressStyle;                         //@synthesize pingAddressStyle=_pingAddressStyle - In the implementation block
@property (assign,nonatomic) char collectMetadata;                         //@synthesize collectMetadata=_collectMetadata - In the implementation block
@property (assign,nonatomic) long long concurrentStreams;                  //@synthesize concurrentStreams=_concurrentStreams - In the implementation block
@property (nonatomic,retain) NSURL * downloadURL; 
@property (nonatomic,retain) NSURL * uploadURL; 
@property (nonatomic,retain) NSString * pingHost; 
@property (assign,nonatomic) int interfaceType;                            //@synthesize interfaceType=_interfaceType - In the implementation block
@property (nonatomic,retain) NSString * clientName;                        //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,retain) NSString * uuid;                              //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) unsigned long long testDuration;              //@synthesize testDuration=_testDuration - In the implementation block
@property (assign,nonatomic) char endWhenStable;                           //@synthesize endWhenStable=_endWhenStable - In the implementation block
@property (assign,nonatomic) char stopAtFileSize;                          //@synthesize stopAtFileSize=_stopAtFileSize - In the implementation block
+(id)defaultConfiguration;
+(id)evaluateInterfaceName:(int)arg1 ;
+(id)interfaceServiceName:(int)arg1 ;
+(id)defaultConfigurationWiFi;
+(id)defaultConfigurationWiredEthernet;
+(id)defaultConfigurationCellular;
+(id)fileSizeConfigurationWithTimeout:(int)arg1 timeout:(unsigned long long)arg2 downloadFileSize:(int)arg3 uploadFileSize:(int)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(NSString *)clientName;
-(NSURL *)downloadURL;
-(NSURL *)uploadURL;
-(void)setUploadURL:(NSURL *)arg1 ;
-(void)setDownloadURL:(NSURL *)arg1 ;
-(NSString *)interfaceName;
-(void)setInterfaceName:(NSString *)arg1 ;
-(int)interfaceType;
-(void)setInterfaceType:(int)arg1 ;
-(void)setDownloadSize:(int)arg1 ;
-(void)setUploadSize:(int)arg1 ;
-(int)uploadSize;
-(int)downloadSize;
-(void)setClientName:(NSString *)arg1 ;
-(unsigned long long)testDuration;
-(unsigned long long)pingCount;
-(void)setPingCount:(unsigned long long)arg1 ;
-(void)setTestDuration:(unsigned long long)arg1 ;
-(void)setConcurrentStreams:(long long)arg1 ;
-(long long)concurrentStreams;
-(char)endWhenStable;
-(char)stopAtFileSize;
-(NSString *)pingHost;
-(char)collectMetadata;
-(int)pingAddressStyle;
-(void)setUseSecureConnection:(char)arg1 ;
-(void)setPingAddressStyle:(int)arg1 ;
-(void)setCollectMetadata:(char)arg1 ;
-(void)setStopAtFileSize:(char)arg1 ;
-(id)cdnUploadURL;
-(char)useSecureConnection;
-(id)cdnDownloadURL;
-(void)setPingHost:(NSString *)arg1 ;
-(void)setEndWhenStable:(char)arg1 ;
-(char)customURLSet;
-(char)forceWiFi;
-(void)setForceWiFi:(char)arg1 ;
@end
