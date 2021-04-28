/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSKeyedArchiver, NSString;

@interface HMDRemoteKeyedArchiver : HMFObject {

	NSKeyedArchiver* _archiver;
	NSString* _transportType;

}

@property (nonatomic,retain) NSKeyedArchiver * archiver;              //@synthesize archiver=_archiver - In the implementation block
@property (nonatomic,retain) NSString * transportType;                //@synthesize transportType=_transportType - In the implementation block
-(void)dealloc;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(id)encodedData;
-(void)finishEncoding;
-(NSString *)transportType;
-(void)setTransportType:(NSString *)arg1 ;
-(NSKeyedArchiver *)archiver;
-(void)setArchiver:(NSKeyedArchiver *)arg1 ;
-(void)__configure;
-(id)initForWritingWithRemoteDeviceIsOnSameAccount:(char)arg1 remoteGateway:(char)arg2 remoteUserIsAdministrator:(char)arg3 user:(id)arg4 dataVersion:(long long)arg5 supportedFeatures:(id)arg6 ;
-(id)initForWritingWithRemoteDeviceIsOnSameAccount:(char)arg1 remoteGateway:(char)arg2 remoteUserIsAdministrator:(char)arg3 user:(id)arg4 supportedFeatures:(id)arg5 ;
@end
