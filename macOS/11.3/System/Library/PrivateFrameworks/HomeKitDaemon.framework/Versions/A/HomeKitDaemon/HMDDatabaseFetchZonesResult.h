/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMBLocalZone, HMBCloudZone;

@interface HMDDatabaseFetchZonesResult : NSObject {

	HMBLocalZone* _localZone;
	HMBCloudZone* _cloudZone;

}

@property (readonly) HMBLocalZone * localZone;              //@synthesize localZone=_localZone - In the implementation block
@property (readonly) HMBCloudZone * cloudZone;              //@synthesize cloudZone=_cloudZone - In the implementation block
-(HMBLocalZone *)localZone;
-(HMBCloudZone *)cloudZone;
-(id)initWithLocalZone:(id)arg1 cloudZone:(id)arg2 ;
@end

